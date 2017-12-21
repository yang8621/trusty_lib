/*
 * Copyright (C) 2017 The Android Open Source Project
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


#ifndef __TRUSTY_KEY_MIGRATION_H
#define __TRUSTY_KEY_MIGRATION_H

/* saved to rpmb */
struct crypto_context
{
        uint32_t magic;
        uint8_t ssek_cipher[48];
        uint8_t ssek_iv[12];
        uint8_t trk_cipher[48];
        uint8_t trk_iv[12];
        uint8_t svn;
        uint8_t padding[131];
};

#define CRYPTO_CONTEXT_MAGIC_DATA	(0x2e5afc78)

static void * (* const volatile memset_ptr)(void *, int, size_t) = memset;

void secure_memzero(void * p, size_t len)
{
        (memset_ptr)(p, 0, len);
}

#endif

