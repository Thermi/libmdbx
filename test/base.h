/*
 * Copyright 2017 Leonid Yuriev <leo@yuriev.ru>
 * and other libmdbx authors: please see AUTHORS file.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted only as authorized by the OpenLDAP
 * Public License.
 *
 * A copy of this license is available in the file LICENSE in the
 * top-level directory of the distribution or, alternatively, at
 * <http://www.OpenLDAP.org/license.html>.
 */

#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif

#if defined(_WIN32) || defined(_WIN64) || defined(_WINDOWS)
/* If you wish to build your application for a previous Windows platform,
 * include WinSDKVer.h and set the _WIN32_WINNT macro to the platform you
 * wish to support before including SDKDDKVer.h.
 *
 * TODO: #define _WIN32_WINNT WIN32_MUSTDIE */
#include <SDKDDKVer.h>
#endif /* WINDOWS */

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(_WIN32) || defined(_WIN64) || defined(_WINDOWS)
#include <io.h>
#else
#include <sys/param.h>
#include <sys/time.h>
#include <unistd.h>
#endif

#ifdef _BSD_SOURCE
#include <endian.h>
#endif

#include <algorithm>
#include <cassert>
#include <cinttypes> // for PRId64, PRIu64
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#ifdef _MSC_VER
#include <intrin.h>
#endif

#if defined(__i386__) || defined(__x86_64__)
#include <x86intrin.h>
#endif

#include "../mdbx.h"
#include "../src/defs.h"
