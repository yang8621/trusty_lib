/*
 * Copyright (c) 2017 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This file is auto-generated. !!! DO NOT EDIT !!! */

#include <asm.h>
#include <trusty_syscalls.h>

.macro  PROLOG
    pushfq
    pushq %rbp
    pushq %rbx

    pushq %r15
.endm

.macro  MOV_PARAMS
   /* Return Addr and stack*/
   leaq 1f(%rip), %rbx
   mov %rsp, %rbp
.endm

.macro EPILOG
1:  popq %r15

    popq %rbx
    popq %rbp
    popfq
.endm

FUNCTION(write)
    PROLOG
    mov $__NR_write, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(brk)
    PROLOG
    mov $__NR_brk, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(exit_group)
    PROLOG
    mov $__NR_exit_group, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(read)
    PROLOG
    mov $__NR_read, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(ioctl)
    PROLOG
    mov $__NR_ioctl, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(nanosleep)
    PROLOG
    mov $__NR_nanosleep, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(gettime)
    PROLOG
    mov $__NR_gettime, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(mmap)
    PROLOG
    mov $__NR_mmap, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(munmap)
    PROLOG
    mov $__NR_munmap, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(prepare_dma)
    PROLOG
    mov $__NR_prepare_dma, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(finish_dma)
    PROLOG
    mov $__NR_finish_dma, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(get_device_info)
    PROLOG
    mov $__NR_get_device_info, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(port_create)
    PROLOG
    mov $__NR_port_create, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(connect)
    PROLOG
    mov $__NR_connect, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(accept)
    PROLOG
    mov $__NR_accept, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(close)
    PROLOG
    mov $__NR_close, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(set_cookie)
    PROLOG
    mov $__NR_set_cookie, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(wait)
    PROLOG
    mov $__NR_wait, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(wait_any)
    PROLOG
    mov $__NR_wait_any, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(get_msg)
    PROLOG
    mov $__NR_get_msg, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(read_msg)
    PROLOG
    mov $__NR_read_msg, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(put_msg)
    PROLOG
    mov $__NR_put_msg, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret

FUNCTION(send_msg)
    PROLOG
    mov $__NR_send_msg, %rax
    MOV_PARAMS
    sysenter
    EPILOG
    ret
