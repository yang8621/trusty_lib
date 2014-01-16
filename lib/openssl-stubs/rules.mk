LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)
MODULE_USER := true

MODULE_SRCS := \
	$(LOCAL_DIR)/abort.c \
	$(LOCAL_DIR)/errno.c \
	$(LOCAL_DIR)/rand_poll.c \
	$(LOCAL_DIR)/sscanf.c

MODULE_DEPS := \
	lib/libc-trusty

GLOBAL_INCLUDES += $(LOCAL_DIR)/include

include make/module.mk
