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

#define __NR_read		0x3
#define __NR_write		0x4
#define __NR_open		0x5
#define __NR_brk		0x2d
#define __NR_ioctl		0x36
#define __NR_set_tls		0x37
#define __NR_gettimeofday		0x4e
#define __NR_munmap		0x5b
#define __NR_mprotect		0x7d
#define __NR_usleep		0xa2
#define __NR_mmap2		0xc0
#define __NR_fstat		0xc5
#define __NR_madvise		0xdc
#define __NR_gettid		0xe0
#define __NR_exit_group		0xf8
#define __NR_clock_gettime		0x107

#ifndef ASSEMBLY

long read (uint32_t fd, void* msg, uint32_t size);
long write (uint32_t fd, void* msg, uint32_t size);
long open (void);
long brk (uint32_t brk);
long ioctl (uint32_t d, uint32_t req, void *msg);
long set_tls (uint32_t tp_value);
long gettimeofday (void);
long munmap (addr_t addr, uint32_t size);
long mprotect (void);
long usleep (struct timespec *ts);
long mmap2 (addr_t addr, uint32_t length, uint32_t prot, uint32_t flags);
long fstat (void);
long madvise (void);
long gettid (void);
long exit_group (void);
long clock_gettime (void);

#endif
