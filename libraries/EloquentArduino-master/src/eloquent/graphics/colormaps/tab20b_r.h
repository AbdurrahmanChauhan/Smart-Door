//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Tab20b_r {
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
                uint8_t red[64] = {222, 222, 222, 222, 206, 206, 206, 165, 165, 165, 123, 123, 123, 231, 231, 231, 214, 214, 214, 173, 173, 173, 173, 132, 132, 132, 231, 231, 231, 231, 231, 231, 189, 189, 189, 140, 140, 140, 206, 206, 206, 181, 181, 181, 181, 140, 140, 140, 99, 99, 99, 156, 156, 156, 107, 107, 107, 82, 82, 82, 57, 57, 57, 57};
                uint8_t green[64] = {158, 158, 158, 158, 109, 109, 109, 81, 81, 81, 65, 65, 65, 150, 150, 150, 97, 97, 97, 73, 73, 73, 73, 60, 60, 60, 203, 203, 203, 186, 186, 186, 158, 158, 158, 109, 109, 109, 219, 219, 219, 207, 207, 207, 207, 162, 162, 162, 121, 121, 121, 158, 158, 158, 110, 110, 110, 84, 84, 84, 59, 59, 59, 59};
                uint8_t blue[64] = {214, 214, 214, 214, 189, 189, 189, 148, 148, 148, 115, 115, 115, 156, 156, 156, 107, 107, 107, 74, 74, 74, 74, 57, 57, 57, 148, 148, 148, 82, 82, 82, 57, 57, 57, 49, 49, 49, 156, 156, 156, 107, 107, 107, 107, 82, 82, 82, 57, 57, 57, 222, 222, 222, 207, 207, 207, 163, 163, 163, 121, 121, 121, 121};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Tab20b_r tab20b_r);