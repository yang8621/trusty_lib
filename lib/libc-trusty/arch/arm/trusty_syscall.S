/*
 * Copyright (c) 2013 Google Inc. All rights reserved
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/* This file is auto-generated. !!! DO NOT EDIT !!! */

#include <asm.h>
#include <trusty_syscalls.h>

FUNCTION(read)
    mov     ip, r7
    ldr     r7, =__NR_read
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(write)
    mov     ip, r7
    ldr     r7, =__NR_write
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(open)
    mov     ip, r7
    ldr     r7, =__NR_open
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(brk)
    mov     ip, r7
    ldr     r7, =__NR_brk
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(ioctl)
    mov     ip, r7
    ldr     r7, =__NR_ioctl
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(set_tls)
    mov     ip, r7
    ldr     r7, =__NR_set_tls
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(gettimeofday)
    mov     ip, r7
    ldr     r7, =__NR_gettimeofday
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(munmap)
    mov     ip, r7
    ldr     r7, =__NR_munmap
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(mprotect)
    mov     ip, r7
    ldr     r7, =__NR_mprotect
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(usleep)
    mov     ip, r7
    ldr     r7, =__NR_usleep
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(mmap2)
    mov     ip, r7
    ldr     r7, =__NR_mmap2
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(fstat)
    mov     ip, r7
    ldr     r7, =__NR_fstat
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(madvise)
    mov     ip, r7
    ldr     r7, =__NR_madvise
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(gettid)
    mov     ip, r7
    ldr     r7, =__NR_gettid
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(exit_group)
    mov     ip, r7
    ldr     r7, =__NR_exit_group
    swi     #0
    mov     r7, ip
    bx      lr

FUNCTION(clock_gettime)
    mov     ip, r7
    ldr     r7, =__NR_clock_gettime
    swi     #0
    mov     r7, ip
    bx      lr
