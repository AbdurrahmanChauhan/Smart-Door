//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class RdBu {
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
                uint8_t red[64] = {103, 114, 126, 138, 150, 162, 174, 181, 187, 193, 199, 204, 210, 215, 220, 225, 230, 234, 239, 244, 245, 247, 248, 249, 251, 252, 252, 251, 250, 249, 248, 247, 243, 237, 231, 225, 219, 213, 207, 197, 187, 177, 167, 157, 147, 134, 122, 109, 97, 84, 72, 63, 58, 52, 47, 42, 36, 31, 27, 22, 18, 13, 9, 5};
                uint8_t green[64] = {0, 3, 7, 11, 15, 19, 22, 31, 43, 54, 66, 77, 89, 100, 111, 122, 133, 144, 155, 165, 174, 182, 191, 200, 208, 217, 222, 227, 231, 235, 240, 244, 245, 242, 239, 237, 234, 231, 227, 222, 217, 212, 207, 202, 197, 189, 181, 173, 166, 158, 150, 142, 135, 128, 121, 114, 107, 99, 90, 82, 73, 65, 56, 48};
                uint8_t blue[64] = {31, 32, 34, 36, 38, 40, 42, 46, 52, 57, 62, 68, 73, 80, 88, 97, 105, 114, 122, 131, 142, 152, 163, 174, 185, 196, 205, 212, 220, 227, 235, 243, 246, 245, 244, 243, 242, 240, 239, 236, 233, 230, 228, 225, 222, 218, 213, 209, 205, 201, 196, 192, 189, 185, 181, 178, 174, 168, 156, 144, 132, 120, 108, 97};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::RdBu rdbu);