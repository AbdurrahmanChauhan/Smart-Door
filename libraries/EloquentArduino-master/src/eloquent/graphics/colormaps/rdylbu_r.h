//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class RdYlBu_r {
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
                uint8_t red[64] = {49, 52, 55, 58, 61, 64, 68, 74, 81, 89, 96, 104, 111, 119, 128, 136, 145, 154, 163, 171, 180, 188, 197, 205, 213, 222, 227, 232, 237, 242, 247, 252, 254, 254, 254, 254, 254, 254, 253, 253, 253, 253, 253, 253, 253, 251, 250, 248, 247, 246, 244, 241, 236, 232, 227, 222, 218, 212, 204, 196, 188, 180, 172, 165};
                uint8_t green[64] = {54, 64, 73, 84, 94, 104, 114, 123, 132, 141, 149, 158, 167, 175, 182, 189, 196, 203, 210, 217, 221, 225, 229, 233, 238, 242, 244, 246, 248, 250, 252, 254, 252, 247, 242, 237, 232, 227, 222, 214, 206, 198, 190, 182, 174, 164, 154, 144, 133, 123, 113, 103, 93, 83, 74, 64, 54, 45, 38, 30, 22, 15, 7, 0};
                uint8_t blue[64] = {149, 153, 158, 163, 168, 173, 178, 183, 187, 192, 197, 201, 206, 210, 214, 218, 221, 225, 229, 233, 235, 238, 240, 242, 245, 247, 240, 231, 222, 213, 204, 195, 187, 179, 172, 164, 157, 149, 142, 135, 127, 120, 112, 105, 97, 92, 87, 83, 78, 73, 68, 64, 59, 55, 51, 46, 42, 38, 38, 38, 38, 38, 38, 38};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::RdYlBu_r rdylbu_r);