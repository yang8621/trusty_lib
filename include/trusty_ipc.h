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

#ifndef __USR_TRUSTY_IPC_H
#define __USR_TRUSTY_IPC_H

#define MAX_MSG_HANDLES	8

typedef struct iovec {
	void		*base;
	size_t		len;
} iovec_t;

typedef struct ipc_msg {
	int		num_iov;
	iovec_t		*iov;

	int		num_handles;
	int		*handles;
} ipc_msg_t;

typedef struct ipc_msg_info {
	size_t		len;
	uint32_t	id;
} ipc_msg_info_t;

/* bitmask */
enum {
	IPC_HANDLE_POLL_NONE	= 0x0,
	IPC_HANDLE_POLL_READY	= 0x1,
	IPC_HANDLE_POLL_ERROR	= 0x2,
	IPC_HANDLE_POLL_HUP	= 0x4,
	IPC_HANDLE_POLL_MSG	= 0x8,
};

typedef struct uevent {
	int			handle;
	uint32_t		event;
	void			*cookie;
} uevent_t;

#endif
