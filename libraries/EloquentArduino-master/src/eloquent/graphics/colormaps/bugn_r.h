//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class BuGn_r {
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
                uint8_t red[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 9, 13, 18, 22, 27, 31, 35, 39, 43, 47, 51, 54, 58, 62, 66, 71, 76, 80, 85, 90, 94, 99, 105, 111, 118, 124, 131, 137, 144, 150, 157, 163, 170, 176, 182, 189, 195, 202, 206, 209, 212, 215, 219, 222, 225, 228, 231, 233, 235, 237, 240, 242, 244, 247};
                uint8_t green[64] = {68, 73, 78, 83, 88, 94, 99, 104, 109, 113, 117, 120, 124, 128, 132, 136, 140, 144, 148, 153, 157, 162, 166, 171, 174, 177, 180, 182, 185, 187, 190, 192, 195, 198, 200, 203, 206, 209, 212, 214, 217, 220, 222, 225, 227, 230, 232, 235, 236, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252};
                uint8_t blue[64] = {27, 29, 31, 33, 35, 37, 39, 42, 44, 47, 50, 53, 57, 60, 63, 66, 70, 76, 83, 89, 95, 101, 107, 114, 120, 126, 131, 137, 143, 149, 155, 161, 166, 171, 175, 180, 185, 189, 194, 199, 203, 206, 210, 214, 218, 221, 225, 229, 231, 234, 236, 239, 241, 243, 246, 248, 249, 249, 250, 250, 251, 251, 252, 253};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::BuGn_r bugn_r);