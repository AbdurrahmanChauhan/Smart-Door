//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Plasma_r {
            public:

                /**
                 * Convert single byte to RGB color
                 * @param x
                 * @param r
                 * @param g
                 * @param b
                 */
                void convert(uint8_t x, uint8_t *r, uint8_t *g, uint8_t *b) {
                    *r = red[x << 2];
                    *g = green[x << 2];
                    *b = blue[x << 2];
                }

            protected:
                uint8_t red[64] = {239, 242, 244, 246, 248, 250, 251, 252, 253, 253, 253, 253, 252, 251, 250, 249, 247, 245, 243, 241, 239, 236, 234, 231, 228, 225, 222, 219, 215, 212, 209, 205, 200, 196, 192, 188, 184, 180, 175, 170, 165, 160, 155, 150, 144, 139, 133, 127, 120, 114, 108, 101, 95, 89, 82, 76, 69, 63, 56, 49, 41, 33, 24, 12};
                uint8_t green[64] = {248, 241, 234, 228, 221, 214, 208, 201, 195, 188, 182, 176, 170, 164, 159, 153, 146, 141, 135, 130, 125, 120, 115, 110, 106, 101, 96, 91, 87, 82, 78, 73, 68, 63, 59, 54, 50, 45, 40, 36, 31, 27, 23, 18, 14, 9, 6, 3, 1, 0, 0, 0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 7};
                uint8_t blue[64] = {33, 38, 38, 37, 36, 36, 36, 38, 40, 42, 45, 48, 51, 54, 58, 61, 65, 69, 72, 76, 79, 83, 86, 90, 93, 96, 100, 103, 107, 110, 114, 117, 122, 126, 129, 133, 137, 141, 144, 148, 151, 155, 158, 160, 163, 164, 166, 167, 168, 168, 168, 167, 166, 164, 163, 161, 158, 156, 153, 150, 147, 143, 139, 134};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Plasma_r plasma_r);