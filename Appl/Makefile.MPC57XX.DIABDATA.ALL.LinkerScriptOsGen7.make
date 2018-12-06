#######################################################################################################################
# File Name  : Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptOsGen7.make                                                  #
# Description: Linker/Symbol Preprocessor command file generation                                                     #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for platform Freescale/ST MPC57xx                                                                #
#              and Compiler DiabData                                                                                  #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# COPYRIGHT                                                                                                           #
#---------------------------------------------------------------------------------------------------------------------#
# Copyright (c) 2017 by Vector Informatik GmbH.                                                  All rights reserved. #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# AUTHOR IDENTITY                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# Name                          Initials      Company                                                                 #
# ----------------------------  ------------  ------------------------------------------------------------------------#
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Andreas Hahn                  vishan        Vector Informatik GmbH                                                  #
# Roland Reinl                  virrro        Vector Informatik GmbH                                                  #
# Joachim Wenzel                viswjo        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2016-09-05  vishan  Initial version for new Gen7-OS                                                       #
# 01.01.00  2017-02-07  visbwa  Review according to Brs_Template 2.00, support for Core2, updates for OsGen7 1.10.0,  #
#                               moved generic parts into Makefile.MPC57XX.DIABDATA.ALL.make,                          #
#                               added additional information output                                                   #
# 01.01.01  2017-02-14  visbwa  Added several missed defines and usage of section INTTABLE                            #
# 01.01.02  2017-05-12  visbwa  Added LinkerScriptOsGen7.make to include list                                         #
# 01.02.00  2017-06-20  virrro  Moved preprocessing of linker script from Makefile into this file,                    #
#                               added AWK script to delete empty lines within preprocessed linkage file               #
# 01.02.01  2017-07-18  visbwa  Review according to Brs_Template 2.01.04, harmonized with Brs_Spc58xx                 #
# 01.02.02  2017-09-11  visbwa  Enhanced support for derivatives with less than 3 cores                               #
# 01.02.03  2017-09-15  visbwa  Fixed syntax error                                                                    #
# 01.02.04  2017-10-05  viswjo  Fixed alignment of sdata symbols for initialization                                   #
# 01.02.05  2017-11-29  visbwa  Added usage of strip to solve issues within blanks within CPU_NO_OF_CORES value,      #
#                               added usage of OS-stacks already for boot-stack                                       #
# 01.02.06  2017-12-12  vismaa  Added _VECTORTABLE_START_ADDR for IVPR initialisation                                 #
#######################################################################################################################

#------------------------------------------------------------------------------
# Configuration Check
#------------------------------------------------------------------------------
ifeq ($(strip $(CPU_NO_OF_CORES)),)
 $(error LINKERFILEERROR: Number of Cores is not defined! Please set CPU_NO_OF_CORES_$(DERIVATIVE)= with the amount of Cores of your derivative in makefile.derivative.setting.)
endif

#------------------------------------------------------------------------------
# Rule to generate linker command file (listing of all dependent files)
# AWK script: replace multiple newlines "\n\n" with empty string ""
#------------------------------------------------------------------------------
$(PROJECT_NAME).$(LNK_SUFFIX): $(PROJECT_NAME)_Unprocessed.$(LNK_SUFFIX)
	@$(ECHO) "Preprocessing $(PROJECT_NAME)_Unprocessed.$(LNK_SUFFIX) by using Compiler (necessary for defines and includes) ..."; \
  if [ -n "$(MKVERBOSE)" ] ; then \
    $(ECHO) ""; \
    $(ECHO) "$(subst \,/,$(CC_ENV) $(CC)) -I$(GENDATA_DIR) -I./ -P $(PROJECT_NAME)_Unprocessed.$(LNK_SUFFIX) -o $(PROJECT_NAME).$(LNK_SUFFIX)"; \
  fi; \
  $(ECHO) ""; \
  $(subst \,/,$(CC_ENV) $(CC)) -I$(GENDATA_DIR) -I./ -P $(PROJECT_NAME)_Unprocessed.$(LNK_SUFFIX) -o $(PROJECT_NAME).$(LNK_SUFFIX).tmp; \
  $(ECHO) "Run AWK-script to delete empty lines ..."; \
  $(GAWK) 'BEGIN{RS="\n\n" ; ORS="";}{ print }' $(PROJECT_NAME).$(LNK_SUFFIX).tmp > $(PROJECT_NAME).$(LNK_SUFFIX); \
  $(RM) $(PROJECT_NAME).$(LNK_SUFFIX).tmp

$(PROJECT_NAME)_Unprocessed.$(LNK_SUFFIX): Makefile \
                                           Makefile.config \
                                           Makefile.derivative.settings \
                                           Makefile.derivative.memorymap \
                                           Makefile.project.part.defines \
                                           Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make \
                                           Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).LinkerScriptOsGen7.make

#---------------------------------------------------------------------------------
# _NEVER_ delete the leading "Tab" in the first ECHO-line below!!!
# The Linker-Command-File which will be generated:
#---------------------------------------------------------------------------------
	@$(ECHO) "Vector BRS for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)";                      \
  $(ECHO);                                                                                                   \
  $(ECHO) "Generate Linker-script $(PROJECT_NAME).$(LNK_SUFFIX) out of Linker command file";                 \
  $(ECHO) "Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptOsGen7.make ...";                                       \
  $(ECHO) "/* ----------------------------------------------------------------------"                  > $@; \
  $(ECHO) " *  Vector BRS linker file for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)" >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"              >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "MEMORY {"                                                                                  >> $@; \
  $(ECHO) "    /* Derivative specific section allocation */"                                          >> $@; \
  $(MAPPING_$(DERIVATIVE))                                                                                   \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "SECTIONS {"                                                                                >> $@; \
  $(ECHO) "  /* ROM sections */"                                                                      >> $@; \
  $(ECHO) "  .resetword : {} > RESETWORD"                                                             >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  .startup : {} > ROM1"                                                                    >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  GROUP : {"                                                                               >> $@; \
  $(ECHO) "#define OS_LINK_EXCVEC_CODE"                                                               >> $@; \
  $(ECHO) "  #include <Os_Link_Core0.ld>"                                                             >> $@;
	@$(ECHO) "#define OS_LINK_INTVEC_CODE"                                                              >> $@; \
  $(ECHO) "  #include <Os_Link.ld>"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CODE"                                                               >> $@; \
  $(ECHO) "  #include <Os_Link_Core0.ld>"                                                             >> $@;

	@$(ECHO) "  } > INTTABLE"                                                                           >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  GROUP : {"                                                                               >> $@; \
  $(WORKAROUND_$(LENGTH_ENCODING))                                                                           \
  $(ECHO) "    .text (TEXT) : {"                                                                      >> $@; \
  $(ECHO) "      *(.text) *(.text_vle) *(.rodata) *(.init) *(.fini) *(.eini) *(.ctors) *(.dtors)"     >> $@; \
  $(ECHO) "      . = (.+15) & ~15;"                                                                   >> $@; \
  $(ECHO) "    }"                                                                                     >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_CODE"                                                                      >> $@; \
  $(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                              >> $@; \
  $(ECHO) "  #include <Os_Link.ld>"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                              >> $@; \
  $(ECHO) "  #include <Os_Link_Core0.ld>"                                                             >> $@;

	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "    .sdata2 (TEXT) :{}"                                                                    >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_CONST"                                                                     >> $@; \
  $(ECHO) "#define OS_LINK_EXCVEC_CONST"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CONST"                                                              >> $@; \
  $(ECHO) "  #include <Os_Link.ld>"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_CONST"                                                                     >> $@; \
  $(ECHO) "#define OS_LINK_EXCVEC_CONST"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CONST"                                                              >> $@; \
  $(ECHO) "#include <Os_Link_Core0.ld> "                                                              >> $@;

	@$(ECHO) "    __DATA_ROM = .;"                                                                      >> $@; \
  $(ECHO) "    /* ROM area for data section, do not link anything beyond this point! */"              >> $@; \
  $(ECHO) "  } > ROM2"                                                                                >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  GROUP : {"                                                                               >> $@; \
  $(ECHO) "    /* Generic init data */"                                                               >> $@; \
  $(ECHO) "    __DATA_RAM = .;"                                                                       >> $@; \
  $(ECHO) "    /* Generic initialized data */"                                                        >> $@; \
  $(ECHO) "    _dataAddr = ALIGN(32);"                                                                >> $@; \
  $(ECHO) "    .data (DATA) LOAD(_dataAddr - __DATA_RAM + __DATA_ROM) : {}"                           >> $@; \
  $(ECHO) "#define OS_LINK_SPINLOCKS"                                                                 >> $@; \
  $(ECHO) "  #include <Os_Link.ld>"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_SPINLOCKS"                                                                 >> $@; \
  $(ECHO) "  #include <Os_Link_Core0.ld>"                                                             >> $@;

	@$(ECHO) "    /* Generic initialized sdata */"                                                      >> $@; \
  $(ECHO) "    _sdabase = ALIGN(32);"                                                                  >> $@; \
  $(ECHO) "    .sdabase ALIGN(8) LOAD(_sdabase - __DATA_RAM + __DATA_ROM) : {}"                       >> $@; \
  $(ECHO) "    _sdataAddr = ALIGN(32);"                                                                >> $@; \
  $(ECHO) "    .sdata (DATA) LOAD(_sdataAddr - __DATA_RAM + __DATA_ROM) : {}"                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "#define OS_LINK_VAR_GLOBALSHARED"                                                          >> $@; \
  $(ECHO) "#define OS_LINK_VAR_CORESHARED"                                                            >> $@; \
  $(ECHO) "  #include <Os_Link.ld>"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION_UNTRUSTED_CORE0"                                       >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION_TRUSTED_CORE0"                                   >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0"                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_VAR_TASK"                                                                  >> $@; \
  $(ECHO) "#define OS_LINK_VAR_ISR"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_TRACE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "  #include <Os_Link_Core0.ld>"                                                             >> $@;

	@$(ECHO) "    __DATA_END = .;"                                                                      >> $@; \
  $(ECHO) "    /* Generic uninitialized sdata */"                                                     >> $@; \
  $(ECHO) "    __BSS_START = .;"                                                                      >> $@; \
  $(ECHO) "    .sbss  (BSS) : {}"                                                                     >> $@; \
  $(ECHO) "    /* Generic uninitialized data */"                                                      >> $@; \
  $(ECHO) "    .frmdata (BSS) : {}"                                                                   >> $@; \
  $(ECHO) "    FLASHDRV (BSS) : {}"                                                                   >> $@; \
  $(ECHO) "    .bss   (BSS) : {}"                                                                     >> $@; \
  $(ECHO) "    __BSS_END = .;"                                                                        >> $@; \
  $(ECHO) "    __HEAP_START = .;"                                                                     >> $@; \
  $(ECHO) "  } >RAM"                                                                                  >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  GROUP : {"                                                                               >> $@; \
  $(ECHO) "    __STACK_START = .;"                                                                      >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_STACKS"                                                             >> $@; \
  $(ECHO) "#include <Os_Link_Core0_Stacks.ld>"                                                        >> $@; \
  $(ECHO) "    __STACK_END = .;"                                                                      >> $@; \
  $(ECHO) "    . = (.+0xf) & ~0xf;"                                                                   >> $@; \
  $(ECHO) "    . += 0x400;"                                                                           >> $@; \
  $(ECHO) "    oskStackTop_SYS_c0 = .;"                                                               >> $@; \
  $(ECHO) "    . += 0x400;"                                                                           >> $@; \
  $(ECHO) "  } > STACK"                                                                               >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  /* Any space left over will be used as a heap */"                                        >> $@; \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "/* Symbol for StartUpCode IVPR */"                                                         >> $@; \
  $(ECHO) "_VECTORTABLE_START_ADDR = ADDR(INTTABLE);"                                                 >> $@; \
  $(ECHO) "/* Symbol for StartUpCode ECC RAM initialization mechanism */"                             >> $@; \
  $(ECHO) "_RAM_START_ADDR = $(CPU_RAM_START_ADDR);"                                                  >> $@; \
  $(ECHO) "RC_SDATA_SRC    = __DATA_ROM;"                                                             >> $@; \
  $(ECHO) "RC_SDATA_DEST   = __DATA_RAM;"                                                             >> $@; \
  $(ECHO) "RC_SDATA_SIZE   = (__DATA_END - __DATA_RAM + 3)/4;"                                        >> $@; \
  $(ECHO) "__HEAP_END      = ADDR(RAM)+SIZEOF(RAM);"                                                  >> $@; \
  $(ECHO) "__VEC_BASE      = ADDR(INTTABLE);"                                                         >> $@; \
  $(ECHO) "_SDA_BASE_  = ADDR(.sdata ) + 0x7FF0;"                                                     >> $@; \
  $(ECHO) "_SDA2_BASE_ = ADDR(.sdata2) + 0x7FF0;"                                                     >> $@; \
  $(ECHO) "__SP_INIT   = ADDR(STACK)+SIZEOF(STACK);"                                                  >> $@; \
  $(ECHO) "__SP_END    = ADDR(STACK);"                                                                >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "/* Some targets use an extra underscore in front of identifiers"                           >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"              >> $@; \
  $(ECHO) "___HEAP_START   = __HEAP_START;"                                                           >> $@; \
  $(ECHO) "___HEAP_END     = __HEAP_END;"                                                             >> $@; \
  $(ECHO) "___DATA_ROM     = __DATA_ROM;"                                                             >> $@; \
  $(ECHO) "___DATA_RAM     = __DATA_RAM;"                                                             >> $@; \
  $(ECHO) "___DATA_END     = __DATA_END;"                                                             >> $@; \
  $(ECHO) "___BSS_START    = __BSS_START;"                                                            >> $@; \
  $(ECHO) "___BSS_END      = __BSS_END;"                                                              >> $@; \
  $(ECHO) "___VEC_BASE     = __VEC_BASE;"                                                             >> $@; \
  $(ECHO) "/* ---------------------------------------------------------------------- */"              >> $@;

#End of Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptOsGen7.make
