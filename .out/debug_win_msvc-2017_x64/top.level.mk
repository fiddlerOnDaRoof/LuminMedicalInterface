# Generated Makefile -- DO NOT EDIT!

HOST=win64
MLProtoLumin_BASE=C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09
MLProtoLumin_OUTPUT=$(MLProtoLumin_BASE)/.out/$(SPEC)
SPEC=debug_win_msvc-2017_x64


# this turns off the suffix rules built into make
.SUFFIXES:

# this turns off the RCS / SCCS implicit rules of GNU Make
% : RCS/%,v
% : RCS/%
% : %,v
% : s.%
% : SCCS/s.%

# If a rule fails, delete $@.
.DELETE_ON_ERROR:

ifeq ($(VERBOSE),)
ECHO=@
else
ECHO=
endif

ifeq ($(QUIET),)
INFO=@echo
else
INFO=@:
endif

all: prebuild build postbuild


prebuild :: 

postbuild :: 

clean :: MLProtoLumin-clean

$(MLSDK)/tools/mabu/data/options/debug/on.option : 

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/code/srcs.comp : 

$(MLSDK)/tools/mabu/data/components/stdc++.comp : 

$(MLSDK)/.metadata/components/ml_sdk_common.comp : 

$(MLSDK)/tools/mabu/data/options/magicleap.option : 

$(MLSDK)/.metadata/components/lumin_runtime.comp : 

$(MLSDK)/tools/mabu/data/options/optimize/off.option : 

$(MLSDK)/tools/mabu/data/options/warn/on.option : 

$(MLSDK)/tools/mabu/data/options/package/debuggable/on.option : 

$(MLSDK)/.metadata/components/ml_sdk.comp : 

$(MLSDK)/tools/mabu/data/configs/debug.config : 

$(MLSDK)/tools/mabu/data/options/runtime/shared.option : 

$(MLSDK)/tools/mabu/data/components/OpenGL.comp : 

PROGRAM_PREFIX=
PROGRAM_EXT=.exe
SHARED_PREFIX=
SHARED_EXT=.dll
IMPLIB_PREFIX=
IMPLIB_EXT=.lib
STATIC_PREFIX=
STATIC_EXT=.lib
COMPILER_PREFIX=
LINKER_PREFIX=

-make-directories : C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64 C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen/ListsLayoutScene C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/BES_Label6 C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/SSSL_EmergencyList C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/eclipseLabel1 C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/foodEclipseButton C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpEclipseLabel C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpList C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseBut C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseLabel C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin/code/src

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64 : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen/ListsLayoutScene : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src.gen/ListsLayoutScene

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/BES_Label6 : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/BES_Label6

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/SSSL_EmergencyList : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/SSSL_EmergencyList

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/eclipseLabel1 : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/eclipseLabel1

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/foodEclipseButton : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/foodEclipseButton

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpEclipseLabel : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpEclipseLabel

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpList : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/helpList

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseBut : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseBut

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseLabel : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin-srcs/src/ListsLayoutScene/washroomEclipseLabel

C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin/code/src : 
	$(ECHO) @mkdir -p C:/Users/micha/Documents/Magic\ Leap/Lumin\ Projects\ Current\ Dec09/.out/debug_win_msvc-2017_x64/obj.MLProtoLumin/code/src

include $(MLProtoLumin_OUTPUT)/MLProtoLumin.mk
build :  | MLProtoLumin-all

