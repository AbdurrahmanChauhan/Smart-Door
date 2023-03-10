//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Twilight_shifted {
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
                uint8_t red[64] = {47, 51, 56, 62, 69, 76, 82, 86, 89, 91, 93, 93, 94, 94, 95, 96, 98, 101, 104, 109, 115, 124, 132, 142, 152, 164, 176, 188, 199, 210, 217, 223, 225, 223, 221, 217, 214, 210, 207, 204, 202, 200, 197, 195, 192, 188, 184, 179, 173, 167, 161, 154, 146, 136, 127, 117, 106, 95, 85, 75, 66, 58, 52, 47};
                uint8_t green[64] = {19, 17, 16, 17, 19, 22, 27, 34, 43, 52, 62, 73, 83, 92, 101, 110, 119, 128, 136, 145, 153, 161, 169, 176, 183, 190, 196, 202, 208, 213, 216, 217, 216, 213, 208, 201, 193, 185, 176, 167, 157, 147, 136, 126, 116, 107, 97, 88, 79, 70, 62, 54, 47, 40, 34, 30, 26, 23, 21, 19, 17, 17, 17, 20};
                uint8_t blue[64] = {55, 61, 70, 81, 93, 107, 120, 133, 144, 153, 161, 168, 173, 178, 181, 184, 186, 188, 190, 191, 193, 194, 195, 197, 199, 202, 205, 209, 214, 218, 222, 225, 223, 216, 207, 195, 181, 168, 154, 141, 129, 118, 108, 100, 93, 89, 85, 82, 80, 79, 79, 79, 79, 80, 80, 79, 77, 74, 70, 66, 61, 58, 55, 54};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Twilight_shifted twilight_shifted);