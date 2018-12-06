#######################################################################################################################
# File Name  : Makefile                                                                                               #
# Description: local main project Makefile                                                                            #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for platform Freescale/ST MPC57xx                                                                #
#              and Compiler DiabData,                                                                                 #
#              using Vector PES Makesupport 3.13                                                                      #
# Template   : This Makefile is reviewed according to zBrs_Template@root[2.02.01]                                     #
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
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Stefan Schorer                vissns        Vector Informatik GmbH                                                  #
# Steffen Frank                 visfsn        Vector Informatik GmbH                                                  #
# Roland Reinl                  virrro        Vector Informatik GmbH                                                  #
# Ivo Georgiev                  visivg        Vector Informatik GmbH                                                  #
# Manuel Rettig                 visrgm        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2015-05-05  vissns  New creation, based on zBrs_Mpc@root[3.09.04],                                        #
#                               according to template for BrsHw Codestyle 2.0                                         #
#           2015-07-17  visbwa  Review                                                                                #
# 01.00.01  2015-09-18  visbwa  Fixed hex target                                                                      #
# 01.00.02  2015-09-29  visfsn  Support for SafeContext (Link rule), removed redundant statements from LD_ENV,        #
#                               linker options moved from DLD to link rule                                            #
# 01.00.03  2015-10-12  visbwa  fixed BRS_CPU_STARTUP_ID defines                                                      #
# 01.00.04  2015-10-15  visbwa  fixed LD_ENV                                                                          #
# 02.00.00  2015-12-21  visbwa  Reworked Makefile, according to template 2.00.00 and Makesupport 3.13                 #
# 02.00.01  2016-01-13  visbwa  Moved FLOAT_SUPPORT and OBJECT_FORMAT to Makefile.config                              #
# 02.00.02  2016-01-19  visfsn  Added LDFLAGS to Non-SafeContext LINK_RULE, removed Compiler options from LD_ENV      #
# 02.00.03  2016-03-24  visbwa  Added hex as default target                                                           #
# 02.01.00  2016-07-01  visbwa  Adapted complete file header structure for zBrs_Template@root[2.00.02]                #
# 02.01.01  2016-07-04  virrro  Moved linker-flags from link-rule to LDFLAGS                                          #
# 02.01.02  2016-10-24  visbwa  Removed empty -L$(COMPILER_LIB) from LDFLAGS                                          #
# 02.02.00  2017-02-07  visbwa  Added linkage support for OsGen7, fixed MKVERBOSE output of LINK_RULE,                #
#                               changed LINK_RULE to use LINKER_COMMAND_FILE (GlobalMake distinguishes between        #
#                               USER_LINKER_COMMAND_FILE and $(PROJECT_NAME).$(LNK_SUFFIX))                           #
# 02.02.01  2017-03-14  visbwa  Added -Xkeywords=0x4 to Vector default compiler options to allow inlining             #
# 02.02.02  2017-06-20  virrro  Moved preprocessing of linker script from this file into LinkerScript file,           #
#                               moved LINKER_COMMAND_FILE from link rule to linker flags                              #
# 02.02.03  2017-06-20  visbwa  Added MAKE_CLEAN_PATTERN_LIST                                                         #
# 03.00.00  2017-06-28  visivg  Splitted platform/compiler static settings into separate file Makefile.static         #
#                               (acording to Brs_Template 2.01.02)                                                    #
# 03.00.01  2017-07-18  visbwa  Review according to Brs_Template 2.01.04                                              #
# 03.00.02  2017-10-16  visrgm  Changed compiler option -g to -g3 and added compiler option -Xdebug-inline-on         #
# 03.00.03  2018-03-28  visbwa  Review according to Brs_Template 2.02.01                                              #
#######################################################################################################################

#------------------------------------------------------------------------------
# Name of this project (dir under which the appl dir resides)
# E.g.: TestSuit
#------------------------------------------------------------------------------
#PROJECT_NAME = TestSuit
PROJECT_NAME = SCIM_BP

#------------------------------------------------------------------------------
# More static settings placed inside separate file
#------------------------------------------------------------------------------
include Makefile.static

#------------------------------------------------------------------------------
# Define Compiler path
# E.g.: COMPILER_BASE = D:\uti\%vendor%\%platform%\%version%
#       COMPILER_BIN  = $(COMPILER_BASE)\bin
#       COMPILER_INC  = $(COMPILER_BASE)\inc
#       COMPILER_LIB  = $(COMPILER_BASE)\lib
#------------------------------------------------------------------------------
COMPILER_BASE = C:\WindRiver\compilers\diab-5.9.6.2
COMPILER_BIN  = $(COMPILER_BASE)\WIN32\bin
COMPILER_INC  = $(COMPILER_BASE)\include

#------------------------------------------------------------------------------
# Build Options Selection: VECTOR / CUSTOMER
#------------------------------------------------------------------------------
ASFLAGS_SELECTOR = VECTOR
CFLAGS_SELECTOR  = VECTOR
LDFLAGS_SELECTOR = VECTOR

#------------------------------------------------------------------------------
# Default License server and port
#------------------------------------------------------------------------------
LICENSE_SERVER = LeeSeungSeob
LICENSE_SERVER_PORT = 27000

#------------------------------------------------------------------------------
# Define Emulator path
# E.g.: EMU_PATH = C:\UTI\HITOPWIN\P6811
#------------------------------------------------------------------------------
EMU_PATH = $(COMPILER_BASE)

#------------------------------------------------------------------------------
# Set NANT_USED to '1', to enable the usage of NAnt support within
# Global Makefile. If this is enabled, the Makesupport will include the
# NAnt support from a intranel link and the NAnt build-targets can be used.
#------------------------------------------------------------------------------
#NANT_USED=1

#------------------------------------------------------------------------------
# Set MKVERBOSE to a various value, to enable enhanced debug output from 
# Makesupport. To disable this afterwards, set MKVERBOSE to nothing
# (comment out this line and type "set MKVERBOSE=" in command window)
#------------------------------------------------------------------------------
#MKVERBOSE=1

#------------------------------------------------------------------------------
# Set BRSVINFO_USED to '1', to enable the generation of BrsVInfo.h within the
# GenData folder by the Makesupport.
# The BrsVInfo.h will contain e.g. kBrsCompilerVersion, to use this 
# information within the embedded code.
#------------------------------------------------------------------------------
#BRSVINFO_USED=1

#------------------------------------------------------------------------------
# Turn off strict c setting for dependency generation
#------------------------------------------------------------------------------
#STRICT_C_OFF=1

#------------------------------------------------------------------------------
# Set DELETE_DLD to '1', to enable the deleting of previously 
# generated/outdated Linker-script file, before every new linkage request.
#------------------------------------------------------------------------------
#DELETE_DLD=1 // original
DELETE_DLD=1
#Jinwoo

#------------------------------------------------------------------------------
# Set NEW_DEPENDENCY_FORMAT to '1' to enable parallel creation of dependencies.
# You have to ensure that you call m.bat with -jX to use this feature.
#------------------------------------------------------------------------------
#NEW_DEPENDENCY_FORMAT=1 // original
NEW_DEPENDENCY_FORMAT=1
#Jinwoo

#------------------------------------------------------------------------------
# If you want to use code analysis tools like PC-Lint or QAC,
# configure them within Makefile.analysis (part of global-make-package)
# and include this file here
#------------------------------------------------------------------------------
#include Makefile.analysis

#------------------------------------------------------------------------------
# Dependency defines
# These defines are used for the GNU-Preprocessor,
# e.g.: BRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK)
#------------------------------------------------------------------------------
DEP_DEFINES = BRS_DERIVATIVE_$(DERIVATIVE)         \
              BRS_OSC_CLK=$(MAIN_OSC_CLK)          \
              BRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK) \
              BRS_OS_USECASE_$(OS_USECASE)         \
              BRS_CPU_STARTUP_ID=$(CPU_STARTUP_ID) \
              BRS_EVA_BOARD_$(EVA_BOARD)           \
              BRS_PLATFORM_$(PLATFORM)             \
              BRS_COMP_DIAB                        \
              BRSHW_INSTRUCTION_SET_$(LENGTH_ENCODING)

#------------------------------------------------------------------------------
# $(AS_ENV) is the environment necessary to run the assembler
# $(AS) defines the path to the assembler
# $(ASFLAGS_VECTOR_MAKESUPPORT) defines all assembler switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(ASFLAGS_VECTOR_OPTIONS) defines the Vector default assembler switches
# $(ASFLAGS_CUSTOMER_OPTIONS) defines the customer requested assembler switches
# Depending of ASFLAGS_SELECTOR, ASFLAGS_VECTOR_OPTIONS or ASFLAGS_CUSTOMER_OPTIONS
# are used together with ASFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
AS_ENV  = $(LD_ENV)
AS      = $(COMPILER_BIN)\das.exe

#Please add only absolutely mandatory options below
ASFLAGS_VECTOR_MAKESUPPORT = -o $(OBJ_PATH)\$*.$(OBJ_SUFFIX)

# Length encoding specific flags
ASFLAGS_BOOKE =
ASFLAGS_VLE   = $(CFLAG_VLE) \
                -D__VLE

#Please add any other option below (vector default options)
ASFLAGS_VECTOR_OPTIONS = -t$(DIAB_PROC_$(DERIVATIVE))$(strip $(OBJECT_FORMAT))$(strip $(FLOAT_SUPPORT)):simple \
                         -g \
                         $(ASFLAGS_$(LENGTH_ENCODING))

#Please enter all customer options below
ASFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# $(ASVERSION) defines the assembler switch for version report
# E.g.: ASVERSION = -V
#------------------------------------------------------------------------------
ASVERSION = -V

#------------------------------------------------------------------------------
# $(AS_LC) defines the number of lines used for assembler version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
AS_LC = 2

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(CC_ENV) is the environment necessary to run the compiler
# $(CC) defines the path to the C-Compiler
# $(CFLAGS_VECTOR_MAKESUPPORT) defines all compiler switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(CFLAGS_VECTOR_OPTIONS) defines the Vector default compiler switches
# $(CFLAGS_CUSTOMER_OPTIONS) defines the customer requested compiler switches
# Depending of CFLAGS_SELECTOR, CFLAGS_VECTOR_OPTIONS or CFLAGS_CUSTOMER_OPTIONS
# are used together with CFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
CC_ENV  = $(LD_ENV)
CC      = $(COMPILER_BIN)\dcc.exe

#Please add only absolutely mandatory options below
CFLAGS_VECTOR_MAKESUPPORT = -DBRS_DERIVATIVE_$(DERIVATIVE)             \
                            -DBRS_OSC_CLK=$(MAIN_OSC_CLK)              \
                            -DBRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK)     \
                            -DBRS_OS_USECASE_$(OS_USECASE)             \
                            -DBRS_EVA_BOARD_$(EVA_BOARD)               \
                            -DBRS_PLATFORM_$(PLATFORM)                 \
                            -DBRS_COMP_DIAB                            \
                            -DBRSHW_INSTRUCTION_SET_$(LENGTH_ENCODING) \
                            -DBRS_CPU_STARTUP_ID=$(CPU_STARTUP_ID)     \
                            -@E=$(ERR_PATH)/$*.err                     \
                            -@O=$(ERR_PATH)/$*.err                     \
                            -o $(OBJ_PATH)/$*.$(OBJ_SUFFIX)            \
                            -c

# Length encoding specific flags
CFLAGS_VLE   = -D__PPC_VLE__
CFLAGS_BOOKE =

#Please add any other option below (vector default options)
CFLAGS_VECTOR_OPTIONS = -t$(DIAB_PROC_$(DERIVATIVE))$(strip $(OBJECT_FORMAT))$(strip $(FLOAT_SUPPORT)):simple \
                        -Xsmall-const=2000   \
                        -Xnested-interrupts  \
                        -g                  \
                        -Xdebug-inline-on    \
                        -Xkeep-assembly-file \
                        -Xpass-source        \
                        -Xkeywords=0x4       \
                        $(CFLAGS_$(LENGTH_ENCODING))

#Please enter all customer options below
CFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# $(CVERSION) defines the compiler switch for version report
# E.g.: CVERSION = -V
#------------------------------------------------------------------------------
CVERSION = -V

#------------------------------------------------------------------------------
# $(CC_LC) defines the number of lines used for compiler version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
CC_LC = 2

#------------------------------------------------------------------------------
# $(CINC) defines the include switch of the used compiler.
# E.g.: COSMIC Compiler use: CINC = -i
#------------------------------------------------------------------------------
CINC = -I

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(LD_ENV) is the environment necessary to run the linker
# $(LD) defines the path linker
# $(LDFLAGS_VECTOR_MAKESUPPORT) defines all linker switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(LDFLAGS_VECTOR_OPTIONS) defines the Vector default linker switches
# $(LDFLAGS_CUSTOMER_OPTIONS) defines the customer requested linker switches
# Depending of LDFLAGS_SELECTOR, LDFLAGS_VECTOR_OPTIONS or LDFLAGS_CUSTOMER_OPTIONS
# are used together with LDFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
LD_ENV  = export WRSD_LICENSE_FILE=$(LICENSE_SERVER_PORT)@$(LICENSE_SERVER);
LD      = $(COMPILER_BIN)\dld.exe

#Please add only absolutely mandatory options below
LDFLAGS_VECTOR_MAKESUPPORT = -o $(PROJECT_NAME).$(BINARY_SUFFIX) \
                             -@E=$(ERR_PATH)/$(PROJECT_NAME).err \
                             -@O=$(PROJECT_NAME).map             \
                             $(LINKER_COMMAND_FILE)

#Please add any other option below (vector default options)
LDFLAGS_VECTOR_OPTIONS = -t$(DIAB_PROC_$(DERIVATIVE))$(strip $(OBJECT_FORMAT))$(strip $(FLOAT_SUPPORT)):simple \
                         -m6               \
                         -li               \
                         -lc

#                         -lind             \

#Please enter all customer options below
LDFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# $(LDVERSION) defines the linker switch for version report
# E.g.: LDVERSION = -v
#------------------------------------------------------------------------------
LDVERSION = -V

#------------------------------------------------------------------------------
# $(LD_LC) defines the number of lines used for linker version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
LD_LC = 2

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(LB_ENV) is the environment necessary to run the librarian
# $(LB) defines the path to the C-librarian
# $(LBFLAGS) defines all librarian switches
#------------------------------------------------------------------------------
LB_ENV  = $(LD_ENV)
LB      = $(COMPILER_BIN)/dar.exe

LBFLAGS  = -c -q $@

#------------------------------------------------------------------------------
# $(LBVERSION) defines the archiver switch for version report
# E.g.: LBVERSION = -v
#------------------------------------------------------------------------------
LBVERSION = -V

#------------------------------------------------------------------------------
# $(LB_LC) defines the number of lines used for librarian version information
# in BrsVinfo.h
#------------------------------------------------------------------------------
LB_LC = 1

#------------------------------------------------------------------------------
# Additional includes essentially for compilation
#------------------------------------------------------------------------------
ADDITIONAL_INCLUDES +=

#------------------------------------------------------------------------------
# Additional objects essentially for linking
# E.g.: ADDITIONAL_OBJECTS = $(OBJ_PATH)\myobject.$(OBJ_SUFFIX)
#------------------------------------------------------------------------------
ADDITIONAL_OBJECTS +=

#------------------------------------------------------------------------------
# List of assembler source files
# E.g.: ASM_SOURCES = source\startup.$(ASM_SUFFIX)
#------------------------------------------------------------------------------
ASM_SOURCES +=

#------------------------------------------------------------------------------
# Add Startup code to application source list
# E.g.: APP_SOURCE_LST += source\startup.c
#------------------------------------------------------------------------------
APP_SOURCE_LST +=

#------------------------------------------------------------------------------
# Check if all necessary variables are set
# (Checks that are not possible to be performed within Makefile.static)
#------------------------------------------------------------------------------

###############################################################################
######### DO NOT remove these lines from the end of the Makefile!!! ###########
###############################################################################

#------------------------------------------------------------------------------
# Platform/compiler/derivative/emulator dependant makefile is included here
# It defines a rule to generate the linker and a rule to generate the
# symbol preprocessor command file.
# A template for this Makefile can be found under
#     R:\Can_Base\CANtate\BRS\PlatformSpecific\...\OrganiAndMake\...
#------------------------------------------------------------------------------
include Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make

#------------------------------------------------------------------------------
# Include the main makefile where all the targets are defined
#------------------------------------------------------------------------------
include $(MAKESUPPORT_DIR)\Global.Makefile.target.make.$(VERSION)

#End of Makefile
