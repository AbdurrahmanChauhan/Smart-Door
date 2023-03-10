//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class BuGn {
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
                uint8_t red[64] = {247, 244, 242, 240, 237, 235, 233, 231, 228, 225, 222, 219, 215, 212, 209, 206, 202, 195, 189, 182, 176, 170, 163, 157, 150, 144, 137, 131, 124, 118, 111, 105, 99, 94, 90, 85, 80, 76, 71, 66, 62, 58, 55, 51, 47, 43, 39, 35, 31, 27, 22, 18, 13, 9, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                uint8_t green[64] = {252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, 236, 235, 232, 230, 227, 225, 222, 220, 217, 214, 212, 209, 206, 203, 200, 198, 195, 192, 190, 187, 185, 182, 180, 177, 174, 171, 166, 162, 157, 153, 149, 144, 140, 136, 132, 128, 124, 120, 117, 113, 109, 104, 99, 94, 88, 83, 78, 73, 68};
                uint8_t blue[64] = {253, 252, 251, 251, 250, 250, 249, 249, 248, 246, 243, 241, 239, 236, 234, 231, 229, 225, 221, 218, 214, 210, 206, 203, 199, 194, 189, 185, 180, 175, 171, 166, 161, 155, 149, 143, 137, 131, 126, 120, 114, 107, 101, 95, 89, 83, 76, 70, 66, 63, 60, 57, 53, 50, 47, 44, 42, 39, 37, 35, 33, 31, 29, 27};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::BuGn bugn);