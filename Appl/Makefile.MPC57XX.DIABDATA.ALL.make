#######################################################################################################################
# File Name  : Makefile.MPC57XX.DIABDATA.ALL.make                                                                     #
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
# Stefan Schorer                vissns        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2015-05-05  vissns  New creation, based on zBrs_Mpc@root[3.09.03],                                        #
#                               according to template for BrsHw Codestyle 2.0                                         #
# 02.00.00  2015-09-29  visfsn  Moved linker file generation to separate files                                        #
# 02.01.00  2016-07-01  visbwa  Adapted complete file header structure for zBrs_Template@root[2.00.02]                #
# 02.02.00  2017-01-27  visbwa  Added support for OsGen7, added generic parts                                         #
#######################################################################################################################

#------------------------------------------------------------------------------
# include the memory map (RAM/ROM area)
#------------------------------------------------------------------------------
include Makefile.derivative.memorymap

define WORKAROUND_VLE
  $(ECHO) "        /* This is a dummy section to satisfy the linker for vle!*/"  >> $@; \
  $(ECHO) "        /* This section should not contain any code.             */"  >> $@; \
  $(ECHO) "        .text_e (TEXT) : {"                                           >> $@; \
  $(ECHO) "            *(.text)"                                                 >> $@; \
  $(ECHO) "            . = (.+15) & ~15;"                                        >> $@; \
  $(ECHO) "        }"                                                            >> $@;
endef

define WORKAROUND_BOOKE
endef

##########################################################################################################
# LINKER FILE GENERATION
##########################################################################################################
#Linker script generation moved to external file
ifeq ($(OS_USECASE),$(filter $(OS_USECASE),BRS OS))
  include Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptDefault.make
endif

ifeq ($(OS_USECASE),SAFECTX)
  include Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptSafeContext.make
endif

ifeq ($(OS_USECASE),OSGEN7)
  include Makefile.MPC57XX.DIABDATA.ALL.LinkerScriptOsGen7.make
endif

#End of Makefile.MPC57XX.DIABDATA.ALL.make
