//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class YlGnBu_r {
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
                uint8_t red[64] = {8, 11, 15, 19, 22, 26, 30, 33, 36, 36, 36, 35, 35, 35, 34, 34, 33, 33, 32, 31, 31, 30, 30, 29, 30, 35, 39, 44, 48, 53, 58, 62, 68, 76, 84, 92, 100, 108, 116, 124, 132, 141, 151, 160, 169, 178, 187, 196, 202, 207, 212, 217, 221, 226, 231, 236, 239, 241, 243, 245, 248, 250, 252, 255};
                uint8_t green[64] = {29, 31, 34, 37, 40, 43, 46, 49, 52, 58, 63, 68, 74, 79, 84, 90, 95, 102, 108, 115, 121, 128, 134, 140, 146, 151, 156, 160, 165, 170, 174, 179, 183, 186, 189, 192, 195, 198, 200, 203, 207, 210, 214, 217, 221, 224, 228, 232, 234, 236, 238, 240, 242, 243, 245, 247, 248, 249, 250, 251, 252, 253, 254, 255};
                uint8_t blue[64] = {88, 95, 103, 110, 118, 126, 133, 141, 148, 150, 153, 155, 158, 161, 163, 166, 168, 171, 174, 177, 180, 184, 187, 190, 192, 192, 193, 193, 194, 194, 195, 195, 195, 194, 193, 192, 190, 189, 188, 187, 186, 185, 184, 183, 182, 182, 181, 180, 179, 179, 178, 178, 178, 177, 177, 177, 181, 186, 191, 196, 201, 206, 211, 217};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::YlGnBu_r ylgnbu_r);