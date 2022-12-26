/*
  Copyright (c) 2020 Fred Silberberg

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#pragma once

#define EE_HANDS

#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
// right
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { B7, D5, C7, F1, F0, F6 }

# define MASTER_RIGHT
# define SPLIT_POINTING_ENABLE
# define POINTING_DEVICE_RIGHT
# define PMW33XX_CS_PIN F7
# define PMW33XX_CPI 400
