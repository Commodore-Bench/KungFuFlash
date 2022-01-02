/*
 * Copyright (c) 2019-2022 Kim Jørgensen
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

typedef struct
{
    const char *name;
    bool wildcard;
    bool overwrite;
    u8 drive;
    u8 type;
    char mode;
} PARSED_FILENAME;

typedef struct
{
    u8 number;

    u8 use_buf;
    u16 data_len;
    u16 data_ptr;
    u8 *buf;

    D64 d64;
} DISK_CHANNEL;
