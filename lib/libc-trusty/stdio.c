/*
 * Copyright (C) 2013 The Android Open Source Project
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

#include <printf.h>
#include <stdio.h>
#include <string.h>
#include <trusty_std.h>

static int _stdio_fputc(void *ctx, int c)
{
	int fd = (int)ctx;
	char _c = (char)c;

	write(fd, &_c, 1);
	return INT_MAX;
}

static int _stdio_fputs(void *ctx, const char *s)
{
	int fd = (int)ctx;
	return write(fd, (char *)s, strlen(s));
}

static int _stdio_fgetc(void *ctx)
{
	return (unsigned char)0xff;
}

static int _output_func(char c, void *state)
{
	return _stdio_fputc(state, c);
}

static int _stdio_vfprintf(void *ctx, const char *fmt, va_list ap)
{
	return _printf_engine(&_output_func, ctx, fmt, ap);
}

#define DEFINE_STDIO_DESC(id)					\
	[(id)]	= {						\
		.ctx		= (void *)(id),			\
		.fputc		= _stdio_fputc,			\
		.fputs		= _stdio_fputs,			\
		.fgetc		= _stdio_fgetc,			\
		.vfprintf	= _stdio_vfprintf,		\
	}

FILE __stdio_FILEs[3] = {
	DEFINE_STDIO_DESC(0), /* stdin */
	DEFINE_STDIO_DESC(1), /* stdout */
	DEFINE_STDIO_DESC(2), /* stderr */
};
#undef DEFINE_STDIO_DESC


