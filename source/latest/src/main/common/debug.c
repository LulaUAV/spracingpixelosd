/*
 * Copyright 2019-2023 Dominic Clifton
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Author: Dominic Clifton - Sync generation, Sync Detection, Video Overlay and first-cut of working OSD system.
 */


#ifndef BETAFLIGHT

#include <stdint.h>

#include "debug.h"

int16_t debug[DEBUG16_VALUE_COUNT];
uint8_t debugMode = DEBUG_SPRACING_PIXEL_OSD;

#endif