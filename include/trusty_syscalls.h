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

#define __NR_write		0x1
#define __NR_brk		0x2
#define __NR_exit_group		0x3
#define __NR_read		0x4
#define __NR_ioctl		0x5
#define __NR_nanosleep		0x6

#define __NR_port_create		0x10
#define __NR_connect		0x11
#define __NR_accept		0x12
#define __NR_close		0x13
#define __NR_set_cookie		0x14
#define __NR_wait		0x18
#define __NR_wait_any		0x19
#define __NR_get_msg		0x20
#define __NR_read_msg		0x21
#define __NR_put_msg		0x22
#define __NR_send_msg		0x23

#ifndef ASSEMBLY

long write (uint32_t fd, void* msg, uint32_t size);
long brk (uint32_t brk);
long exit_group (void);
long read (uint32_t fd, void* msg, uint32_t size);
long ioctl (uint32_t fd, uint32_t req, void* buf);
long nanosleep (uint32_t clock_id, uint32_t flags, uint64_t sleep_time);

int port_create (const char *path, int num_recv_bufs, size_t recv_buf_size, uint32_t flags);
int connect (const char *path, unsigned long timeout_msecs);
int accept (int handle_id);
void close (int handle_id);
void set_cookie (int handle, void *cookie);
int wait (int handle_id, uevent_t *event, unsigned long timeout_msecs);
int wait_any (uevent_t *event, unsigned long timeout_msecs);
int get_msg (int handle, ipc_msg_info_t *msg_info);
int read_msg (int handle, uint32_t msg_id, uint32_t offset, ipc_msg_t *msg);
void put_msg (int handle, uint32_t msg_id);
int send_msg (int handle, ipc_msg_t *msg);

#endif