/*
 * Copyright (c) 2017 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *		http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "../../libc_init.h"

__attribute__ ((section (".preinit_array")))
void (*__PREINIT_ARRAY__)(void) = (void (*)(void)) -1;

__attribute__ ((section (".init_array")))
void (*__INIT_ARRAY__)(void) = (void (*)(void)) -1;

__attribute__ ((section (".fini_array")))
void (*__FINI_ARRAY__)(void) = (void (*)(void)) -1;

__attribute__ ((section (".bss")))
void *__dso_handle = (void *) 0;

/* Arguments are supplied in memory pointed by r0 */
void _start(void *args) {
    structors_array_t array;
    array.preinit_array = &__PREINIT_ARRAY__;
    array.init_array = &__INIT_ARRAY__;
    array.fini_array = &__FINI_ARRAY__;

    __libc_init(args, &main, &array);
}

