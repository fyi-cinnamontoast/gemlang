/*
 * This file is part of the GemLang distribution (https://github.com/gemlang).
 * Copyright (c) 2024 Cinnamon Bell.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GEMCONF_H
#define GEMCONF_H

#define TOSTR(x) #x
#define STR(x) TOSTR(x)

#define GEM_VERSION_BUILD 0
#define GEM_VERSION_MINOR 0
#define GEM_VERSION_MAJOR 1
#define GEM_VERSION_FULL  STR(GEM_VERSION_MAJOR) "." STR(GEM_VERSION_MINOR) "." STR(GEM_VERSION_BUILD)

#endif
