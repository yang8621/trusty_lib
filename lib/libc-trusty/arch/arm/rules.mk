LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE_SRCS += \
	$(LOCAL_DIR)/trusty_syscall.S

GEN := $(BUILDDIR)/user/crtbegin.o
$(GEN): $(LOCAL_DIR)/crtbegin.c $(CONFIGHEADER)
	@$(MKDIR)
	@echo compiling $<
	$(NOECHO)$(CC) $(GLOBAL_COMPILEFLAGS) $(GLOBAL_CFLAGS) $(GLOBAL_INCLUDES) -c $< -MD -MT $@ -MF $(@:%o=%d) -o $@

GENERATED += $(GEN)

GEN := $(BUILDDIR)/user/crtend.o
$(GEN): $(LOCAL_DIR)/crtend.S $(CONFIGHEADER)
	@$(MKDIR)
	@echo compiling $<
	$(NOECHO)$(CC) $(GLOBAL_COMPILEFLAGS) $(GLOBAL_ASMFLAGS) $(GLOBAL_INCLUDES) -c $< -MD -MT $@ -MF $(@:%o=%d) -o $@

GENERATED += $(GEN)
