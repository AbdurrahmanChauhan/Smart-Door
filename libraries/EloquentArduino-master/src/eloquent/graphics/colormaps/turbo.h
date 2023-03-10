//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Turbo {
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
                uint8_t red[64] = {48, 53, 57, 60, 64, 66, 68, 69, 70, 70, 70, 69, 65, 60, 54, 47, 38, 32, 27, 24, 23, 26, 32, 41, 53, 66, 81, 97, 113, 128, 142, 155, 169, 179, 190, 200, 209, 218, 227, 234, 240, 246, 249, 252, 253, 254, 253, 251, 248, 245, 241, 236, 230, 224, 217, 210, 201, 192, 182, 172, 160, 148, 135, 122};
                uint8_t green[64] = {18, 30, 41, 53, 64, 75, 86, 96, 107, 117, 127, 137, 147, 157, 168, 177, 189, 198, 207, 215, 222, 228, 233, 238, 243, 246, 249, 252, 253, 254, 254, 253, 251, 248, 243, 238, 232, 226, 218, 211, 203, 194, 186, 176, 166, 155, 143, 131, 116, 104, 93, 82, 73, 64, 56, 48, 41, 35, 28, 22, 17, 12, 8, 4};
                uint8_t blue[64] = {59, 88, 114, 139, 161, 181, 199, 214, 227, 237, 246, 252, 254, 253, 249, 243, 233, 223, 212, 202, 191, 182, 172, 160, 148, 135, 121, 108, 95, 83, 72, 64, 57, 53, 52, 51, 52, 54, 55, 57, 58, 58, 56, 53, 49, 45, 40, 35, 28, 23, 19, 14, 11, 8, 6, 5, 3, 2, 1, 1, 1, 1, 1, 2};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Turbo turbo);