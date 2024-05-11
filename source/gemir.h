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

#ifndef GEMIR_H
#define GEMIR_H

#define GEMIR_OUT_OF_MEMORY_MESSAGE "GemIR: Out of memory!"

typedef struct GemIRContext GemIRContext;

typedef struct GemIRType GemIRType;
typedef struct GemIRValue GemIRValue;
typedef struct GemIRFunc GemIRFunc;

GemIRContext* gemir_newContext(void);
void gemir_freeContext(GemIRContext*);

#endif
