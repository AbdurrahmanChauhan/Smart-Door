//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class OrRd_r {
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
                uint8_t red[64] = {127, 133, 140, 146, 153, 160, 166, 173, 179, 184, 188, 193, 197, 202, 207, 211, 215, 218, 221, 224, 227, 231, 234, 237, 239, 241, 242, 244, 246, 247, 249, 251, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 255};
                uint8_t green[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 12, 19, 25, 31, 37, 43, 49, 56, 63, 69, 76, 83, 90, 96, 102, 107, 113, 118, 123, 128, 133, 138, 143, 149, 155, 161, 167, 173, 178, 184, 188, 192, 195, 198, 201, 204, 208, 211, 213, 216, 218, 221, 224, 226, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247};
                uint8_t blue[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 8, 12, 16, 20, 24, 28, 32, 37, 42, 47, 53, 58, 63, 68, 72, 74, 77, 79, 81, 83, 85, 87, 91, 97, 102, 108, 113, 119, 124, 129, 134, 137, 140, 143, 147, 150, 153, 157, 162, 167, 172, 178, 183, 188, 194, 199, 204, 208, 213, 217, 222, 226, 231, 236};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::OrRd_r orrd_r);