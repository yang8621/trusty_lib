LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

MODULE_SRCS += \
	$(LOCAL_DIR)/crtbegin.c \
	$(LOCAL_DIR)/trusty_syscall.S \
	$(LOCAL_DIR)/crtend.S

include make/module.mk

