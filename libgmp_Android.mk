# copy this file to $NDK_ROOT/sources/gmp/Android.mk

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE:= gmp_static
LOCAL_SRC_FILES:= .libs/libgmp.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= gmp_shared
LOCAL_SRC_FILES:= .libs/libgmp.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
include $(PREBUILT_SHARED_LIBRARY)

