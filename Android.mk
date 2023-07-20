LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPP_EXTENSION := .cpp .cc
LOCAL_SRC_FILES := main.cpp bass.cpp mod/logger.cpp mod/config.cpp
ifeq ($(TARGET_ARCH_ABI), armeabi-v7a)
	LOCAL_MODULE    := BASSMod
	LOCAL_SRC_FILES += libbass.cpp libbass_ssl.cpp
else
	LOCAL_MODULE    := BASSMod64
	LOCAL_SRC_FILES += libbass64.cpp libbass64_ssl.cpp
endif
LOCAL_CFLAGS += -O2 -mfloat-abi=softfp -DNDEBUG -std=c++17
LOCAL_C_INCLUDES += ./include
LOCAL_LDLIBS += -llog
include $(BUILD_SHARED_LIBRARY)