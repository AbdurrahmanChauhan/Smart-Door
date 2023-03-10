//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Gist_earth_r {
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
                uint8_t red[64] = {253, 248, 243, 239, 234, 230, 225, 221, 216, 212, 207, 203, 198, 194, 191, 189, 188, 186, 184, 183, 176, 169, 163, 156, 149, 143, 136, 129, 123, 115, 106, 97, 88, 79, 70, 67, 65, 63, 61, 59, 57, 56, 54, 52, 50, 48, 45, 43, 40, 37, 35, 32, 29, 26, 24, 21, 18, 16, 13, 10, 8, 5, 2, 0};
                uint8_t green[64] = {250, 239, 227, 217, 208, 200, 192, 186, 180, 176, 172, 169, 165, 163, 165, 168, 172, 175, 179, 182, 181, 179, 177, 175, 174, 172, 170, 168, 166, 165, 163, 161, 158, 156, 154, 151, 149, 147, 144, 142, 140, 137, 135, 133, 130, 128, 122, 116, 110, 103, 97, 89, 82, 74, 65, 57, 48, 39, 30, 21, 11, 2, 0, 0};
                uint8_t blue[64] = {250, 238, 226, 214, 202, 189, 177, 166, 156, 146, 136, 126, 116, 106, 100, 99, 97, 96, 95, 94, 92, 91, 90, 88, 87, 86, 85, 83, 82, 80, 78, 76, 73, 71, 72, 77, 81, 86, 91, 96, 101, 106, 111, 116, 121, 126, 127, 126, 125, 124, 124, 123, 122, 121, 121, 120, 119, 118, 118, 117, 116, 116, 78, 0};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Gist_earth_r gist_earth_r);