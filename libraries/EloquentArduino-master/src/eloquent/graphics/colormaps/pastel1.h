//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Pastel1 {
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
                uint8_t red[64] = {251, 251, 251, 251, 251, 251, 251, 179, 179, 179, 179, 179, 179, 179, 204, 204, 204, 204, 204, 204, 204, 222, 222, 222, 222, 222, 222, 222, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 229, 229, 229, 229, 229, 229, 229, 229, 253, 253, 253, 253, 253, 253, 242, 242, 242, 242, 242, 242, 242, 242};
                uint8_t green[64] = {180, 180, 180, 180, 180, 180, 180, 205, 205, 205, 205, 205, 205, 205, 235, 235, 235, 235, 235, 235, 235, 203, 203, 203, 203, 203, 203, 203, 217, 217, 217, 217, 217, 217, 217, 255, 255, 255, 255, 255, 255, 255, 216, 216, 216, 216, 216, 216, 216, 216, 218, 218, 218, 218, 218, 218, 242, 242, 242, 242, 242, 242, 242, 242};
                uint8_t blue[64] = {174, 174, 174, 174, 174, 174, 174, 227, 227, 227, 227, 227, 227, 227, 197, 197, 197, 197, 197, 197, 197, 228, 228, 228, 228, 228, 228, 228, 166, 166, 166, 166, 166, 166, 166, 204, 204, 204, 204, 204, 204, 204, 189, 189, 189, 189, 189, 189, 189, 189, 236, 236, 236, 236, 236, 236, 242, 242, 242, 242, 242, 242, 242, 242};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Pastel1 pastel1);