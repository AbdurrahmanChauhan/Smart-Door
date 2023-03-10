//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class PuBu {
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
                uint8_t red[64] = {255, 252, 250, 247, 245, 242, 240, 238, 235, 232, 228, 224, 221, 217, 214, 210, 206, 201, 196, 190, 185, 180, 174, 169, 163, 157, 150, 144, 138, 131, 125, 119, 112, 104, 96, 88, 80, 72, 64, 56, 50, 43, 37, 31, 25, 19, 12, 6, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2};
                uint8_t green[64] = {247, 244, 242, 240, 238, 236, 234, 232, 230, 227, 225, 222, 219, 216, 213, 211, 208, 205, 203, 200, 198, 195, 193, 190, 188, 185, 182, 180, 177, 175, 172, 170, 167, 164, 161, 157, 154, 151, 148, 145, 141, 137, 133, 129, 125, 121, 117, 113, 109, 107, 104, 101, 98, 95, 93, 90, 86, 81, 77, 73, 68, 64, 60, 56};
                uint8_t blue[64] = {251, 249, 248, 247, 246, 245, 244, 243, 241, 240, 238, 237, 235, 234, 232, 231, 229, 228, 226, 225, 224, 222, 221, 219, 218, 216, 215, 213, 212, 210, 209, 207, 206, 204, 202, 200, 198, 196, 194, 192, 190, 188, 186, 184, 182, 180, 178, 176, 172, 168, 163, 159, 154, 150, 146, 141, 135, 128, 121, 114, 108, 101, 94, 88};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::PuBu pubu);