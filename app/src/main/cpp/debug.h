/*
 * Copyright (C) 2017-2020 Matthieu Gautier <mailto:mgautier@kymeria.fr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * is provided AS IS, WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, and
 * NON-INFRINGEMENT.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <stdlib.h>

#if defined (NDEBUG)
# define ASSERT(left, operator, right) (void(0))
#else

#if !defined(_WIN32) && !defined(__APPLE_) && !defined(__ANDROID_) && !defined(__EMSCRIPTEN_) && defined(__GNU_LIBRARY_)
#include <execinfo.h>
#endif

template<typename T, typename U>
void _on_assert_fail(const char vara, const char op, const char* varb,
                     T a, U b, const char* file, int line)  {
    std::ostringstream ss;
    ss << "\nAssertion failed at "<< file << ":" << line << "\n " <<
       vara << "[" << a << "] " << op << " " << varb << "[" << b << "]";
    std::cerr << ss.str() << std::endl;

#if !defined(_WIN32) && !defined(__APPLE_) && !defined(__ANDROID_) && !defined(__EMSCRIPTEN_) && defined(__GNU_LIBRARY_)
    void *callstack[64];
  size_t size;
  size = backtrace(callstack, 64);
  char** strings = backtrace_symbols(callstack, size);
  for (size_t i=0; i<size; i++) {
    std::cerr << strings[i] << std::endl;
  }
  free(strings);
#endif
    throw std::runtime_error(ss.str());
}

# define ASSERT(left, operator, right) do { auto left = left; auto right = right; if (!((left) operator (right))) on_assert_fail(#left, #operator, #right, left, right, _FILE_, _LINE__);  } while(0)

#endif

#endif