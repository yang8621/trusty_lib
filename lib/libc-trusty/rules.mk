LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

WITH_CUSTOM_MALLOC := true

MODULE_SRCS := \
	$(LOCAL_DIR)/atexit.c \
	$(LOCAL_DIR)/exit.c \
	$(LOCAL_DIR)/malloc.c \
	$(LOCAL_DIR)/stdio.c \
	$(LOCAL_DIR)/libc_init.c \

include $(LOCAL_DIR)/arch/$(ARCH)/rules.mk

MODULE_DEPS := \
	lib/libc

include make/module.mk
