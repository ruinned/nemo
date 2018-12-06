#######################################################################################################################
# File Name  : Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptDefault.make                                                 #
# Description: Linker/Symbol Preprocessor command file generation                                                     #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for platform Freescale/ST MPC57xx                                                                #
#              and Compiler DiabData                                                                                  #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# COPYRIGHT                                                                                                           #
#---------------------------------------------------------------------------------------------------------------------#
# Copyright (c) 2018 by Vector Informatik GmbH.                                                  All rights reserved. #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# AUTHOR IDENTITY                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# Name                          Initials      Company                                                                 #
# ----------------------------  ------------  ------------------------------------------------------------------------#
# Steffen Frank                 visfsn        Vector Informatik GmbH                                                  #
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Vamshi Gonuguntla             visvga        Vector Informatik GmbH                                                  #
# Jens Haerer                   visjhr        Vector Informatik GmbH                                                  #
# Ivo Georgiev                  visivg        Vector Informatik GmbH                                                  #
# Sascha Mauser                 vismaa        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2015-09-29  visfsn  Initial version                                                                       #
# 01.00.01  2015-10-12  visbwa  Repaired linkage process                                                              #
# 01.00.02  2016-01-19  visfsn  Removed LDFLAGS and OBJECTS (now in LINK_RULE)                                        #
# 01.00.03  2016-01-28  visvga  Added new OS sections, removed several alignments                                     #
# 01.00.04  2016-02-01  visjhr  Corrected sdata/data alignment for init in startup                                    #
# 01.01.00  2016-07-01  visbwa  Adapted complete file header structure for zBrs_Template@root[2.00.02]                #
# 01.02.00  2016-07-12  visbwa  Added _RAM_START_ADDR and RAM_FLEXRAY_ETH                                             #
# 01.02.01  2017-02-08  visbwa  Moved generic parts into Makefile.MPC57XX.DIABDATA.ALL.make,                          #
#                               added additional information output                                                   #
# 01.02.02  2017-05-12  visbwa  Added LinkerScriptDefault.make to include list, moved FLASHDRV                        #
# 01.02.03  2017-07-18  visbwa  Review according to Brs_Template 2.01.04, harmonized with Brs_Spc58xx                 #
# 01.02.04  2017-09-01  visivg  Fixed __SP_INIT                                                                       #
# 01.02.05  2017-12-12  vismaa  Added _VECTORTABLE_START_ADDR for IVPR initialisation                                 #
# 01.02.06  2018-03-20  vismaa  Replaced section ivortable with intvect_CoreExceptions,                               #
#                               replaced section intvecttable with intvect_ExtExceptions,                             #
#                               deleted os* sections of GEN6-OS                                                       #
#######################################################################################################################

#---------------------------------------------------------------------------------
# Rule to generate linker command file (listing of all dependent files)
#---------------------------------------------------------------------------------
$(PROJECT_NAME).$(LNK_SUFFIX): Makefile \
                               Makefile.config \
                               Makefile.derivative.settings \
                               Makefile.derivative.memorymap \
                               Makefile.project.part.defines \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).LinkerScriptDefault.make

#---------------------------------------------------------------------------------
# _NEVER_ delete the leading "Tab" in the first ECHO-line below!!!
# The Linker-Command-File which will be generated:
#---------------------------------------------------------------------------------
	@$(ECHO) "Vector BRS for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)";                        \
  $(ECHO);                                                                                                     \
  $(ECHO) "Generate Linker-script $(PROJECT_NAME).$(LNK_SUFFIX) out of Linker command file";                   \
  $(ECHO) "Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptDefault.make ...";                                        \
  $(ECHO) "/* ----------------------------------------------------------------------"                    > $@; \
  $(ECHO) " *  Vector BRS linker file for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)"   >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"                >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "MEMORY {"                                                                                    >> $@; \
  $(ECHO) "    /*  section allocation */"                                                               >> $@; \
  $(MAPPING_$(DERIVATIVE))                                                                                     \
  $(ECHO) "}"                                                                                           >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "SECTIONS {"                                                                                  >> $@; \
  $(ECHO) "    .resetword : {} > RESETWORD"                                                             >> $@; \
  $(ECHO) "    .startup : {} > ROM1"                                                                    >> $@; \
  $(ECHO) "    GROUP : {"                                                                               >> $@; \
  $(ECHO) "        .intvect_ExtExceptionsCode : {}"                                                     >> $@; \
  $(WORKAROUND_$(LENGTH_ENCODING))                                                                             \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "        .text (TEXT) : {"                                                                    >> $@; \
  $(ECHO) "            *(.text) *(.text_vle) *(.rodata) *(.init) *(.fini) *(.eini) *(.ctors) *(.dtors)" >> $@; \
  $(ECHO) "            . = (.+15) & ~15;"                                                               >> $@; \
  $(ECHO) "        }"                                                                                   >> $@; \
  $(ECHO) "        .sdata2 (TEXT) : {}"                                                                 >> $@; \
  $(ECHO) "   __DATA_ROM = .;"                                                                          >> $@; \
  $(ECHO) "      /* ROM area for data section, do not link anything beyond this point! */"              >> $@; \
  $(ECHO) "    } > ROM2"                                                                                >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "    GROUP ALIGN(0x100): {"                                                                   >> $@; \
  $(ECHO) "      .intvect_CoreExceptions : {}"                                                          >> $@; \
  $(ECHO) "      .intvect_ExtExceptions  : {}"                                                          >> $@; \
  $(ECHO) "    } >INTTABLE"                                                                             >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "    GROUP ALIGN(0x100): {"                                                                   >> $@; \
  $(ECHO) "     .frmdata            ALIGN(4)        : {}"                                               >> $@; \
  $(ECHO) "     .EthRamDesc         ALIGN(16) (BSS) : {}"                                               >> $@; \
  $(ECHO) "     .EthRamBuf          ALIGN(16) (BSS) : {}"                                               >> $@; \
  $(ECHO) "    } >RAM_FLEXRAY_ETH"                                                                      >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "    GROUP : {"                                                                               >> $@; \
  $(ECHO) "      FLASHDRV : {}"                                                                         >> $@; \
  $(ECHO) "      /* Generic init data */"                                                               >> $@; \
  $(ECHO) "      __DATA_RAM = .;"                                                                       >> $@; \
  $(ECHO) "      /* Generic initialized data */"                                                        >> $@; \
  $(ECHO) "      _dataAddr = .;"                                                                        >> $@; \
  $(ECHO) "      .data ALIGN(32) (DATA) LOAD(_dataAddr - __DATA_RAM + __DATA_ROM) : {}"                 >> $@; \
  $(ECHO) "      /* Generic initialized sdata */"                                                       >> $@; \
  $(ECHO) "      _sdabase = .;"                                                                         >> $@; \
  $(ECHO) "      .sdabase ALIGN(32) LOAD(_sdabase - __DATA_RAM + __DATA_ROM) : {}"                      >> $@; \
  $(ECHO) "      _sdataAddr = .;"                                                                       >> $@; \
  $(ECHO) "      .sdata ALIGN(32) (DATA) LOAD(_sdataAddr - __DATA_RAM + __DATA_ROM) : {}"               >> $@; \
  $(ECHO) "      __DATA_END = .;"                                                                       >> $@; \
  $(ECHO) "      /* Generic uninitialized sdata */"                                                     >> $@; \
  $(ECHO) "      __BSS_START = .;"                                                                      >> $@; \
  $(ECHO) "      .sbss  (BSS) : {}"                                                                     >> $@; \
  $(ECHO) "      /* Generic uninitialized data */"                                                      >> $@; \
  $(ECHO) "      .frmdata (BSS) : {}"                                                                   >> $@; \
  $(ECHO) "      FLASHDRV (BSS) : {}"                                                                   >> $@; \
  $(ECHO) "      .bss   (BSS) : {}"                                                                     >> $@; \
  $(ECHO) "      __BSS_END = .;"                                                                        >> $@; \
  $(ECHO) "      __HEAP_START = .;"                                                                     >> $@; \
  $(ECHO) "    } >RAM"                                                                                  >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "    GROUP : {"                                                                               >> $@; \
  $(ECHO) "            /*CORE 0 or SingleCore */"                                                       >> $@; \
  $(ECHO) "            __SP_END = .;"                                                                   >> $@; \
  $(ECHO) "            __SP_INIT = ADDR(STACK) + SIZEOF(STACK);"                                        >> $@; \
  $(ECHO) "            /*CORE 1 */"                                                                     >> $@; \
  $(ECHO) "            __SP_END_C1 = .;"                                                                >> $@; \
  $(ECHO) "            __SP_INIT_C1 = .;"                                                               >> $@; \
  $(ECHO) "            /*CORE 2 */"                                                                     >> $@; \
  $(ECHO) "    } > STACK"                                                                               >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "        /* Any space left over will be used as a heap */"                                    >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "}"                                                                                           >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "/* Definitions of identifiers used by sbrk.c, init.c and the different"                      >> $@; \
  $(ECHO) " * crt0.s files. Their purpose is to control initialization and memory"                      >> $@; \
  $(ECHO) " * allocation."                                                                              >> $@; \
  $(ECHO) " *"                                                                                          >> $@; \
  $(ECHO) " * __HEAP_START : Used by sbrk.c. Start of memory used by malloc() etc."                     >> $@; \
  $(ECHO) " * __HEAP_END   : Used by sbrk.c. End of heap memory"                                        >> $@; \
  $(ECHO) " * __SP_INIT    : Used by crt0.s. Initial address of stack pointer"                          >> $@; \
  $(ECHO) " * __SP_END     : Used by sbrk.c. Only used when stack probing"                              >> $@; \
  $(ECHO) " * __DATA_ROM   : Used by init.c. Address of initialized data in ROM"                        >> $@; \
  $(ECHO) " * __DATA_RAM   : Used by init.c. Address of initialized data in RAM"                        >> $@; \
  $(ECHO) " * __DATA_END   : Used by init.c. End of allocated initialized data"                         >> $@; \
  $(ECHO) " * __BSS_START  : Used by init.c. Start of uninitialized data"                               >> $@; \
  $(ECHO) " * __BSS_END    : Used by init.c. End of data to be cleared"                                 >> $@; \
  $(ECHO) " * __VEC_BASE   : Used by ic_a.c. Interrupt vector base address"                             >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"                >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "/* Symbol for StartUpCode IVPR */"                                                           >> $@; \
  $(ECHO) "_VECTORTABLE_START_ADDR = ADDR(INTTABLE);"                                                   >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "_RAM_START_ADDR = $(CPU_RAM_START_ADDR);"                                                    >> $@; \
  $(ECHO) ".acfls_code_rom"                                                    >> $@; \
  $(ECHO) "RC_SDATA_SRC    = __DATA_ROM;"                                                               >> $@; \
  $(ECHO) "RC_SDATA_DEST   = __DATA_RAM;"                                                               >> $@; \
  $(ECHO) "RC_SDATA_SIZE   = (__DATA_END - __DATA_RAM + 3)/4;"                                          >> $@; \
  $(ECHO) "__HEAP_END      = ADDR(RAM)+SIZEOF(RAM);"                                                    >> $@; \
  $(ECHO) "__VEC_BASE      = ADDR(INTTABLE);"                                                           >> $@; \
  $(ECHO) ""                                                                                            >> $@; \
  $(ECHO) "/* Some targets use an extra underscore in front of identifiers"                             >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"                >> $@; \
  $(ECHO) "___HEAP_START   = __HEAP_START;"                                                             >> $@; \
  $(ECHO) "___HEAP_END     = __HEAP_END;"                                                               >> $@; \
  $(ECHO) "___SP_INIT      = __SP_INIT;"                                                                >> $@; \
  $(ECHO) "___SP_END       = __SP_END;"                                                                 >> $@; \
  $(ECHO) "___SP_INIT_C1      = __SP_INIT_C1;"                                                          >> $@; \
  $(ECHO) "___SP_END_C1       = __SP_END_C1;"                                                           >> $@; \
  $(ECHO) "___DATA_ROM     = __DATA_ROM;"                                                               >> $@; \
  $(ECHO) "___DATA_RAM     = __DATA_RAM;"                                                               >> $@; \
  $(ECHO) "___DATA_END     = __DATA_END;"                                                               >> $@; \
  $(ECHO) "___BSS_START    = __BSS_START;"                                                              >> $@; \
  $(ECHO) "___BSS_END      = __BSS_END;"                                                                >> $@; \
  $(ECHO) "___VEC_BASE     = __VEC_BASE;"                                                               >> $@; \
  $(ECHO) "/* ---------------------------------------------------------------------- */"                >> $@;

#End of Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptDefault.make
