//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Twilight_r {
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
                uint8_t red[64] = {225, 224, 222, 219, 216, 212, 209, 206, 203, 201, 199, 196, 193, 190, 186, 181, 176, 170, 164, 157, 150, 140, 131, 122, 111, 101, 90, 80, 70, 62, 55, 49, 50, 54, 59, 66, 73, 79, 84, 88, 90, 92, 93, 94, 94, 95, 96, 97, 99, 102, 107, 112, 119, 128, 137, 147, 158, 170, 182, 194, 205, 214, 221, 225};
                uint8_t green[64] = {216, 215, 211, 205, 197, 189, 180, 171, 162, 152, 142, 131, 121, 112, 102, 93, 84, 75, 66, 58, 50, 43, 37, 32, 28, 25, 22, 20, 18, 17, 17, 18, 17, 16, 17, 18, 21, 25, 31, 39, 48, 57, 68, 78, 87, 97, 106, 115, 124, 132, 141, 149, 156, 165, 172, 180, 187, 193, 199, 205, 210, 214, 217, 216};
                uint8_t blue[64] = {225, 220, 212, 201, 188, 175, 161, 148, 135, 123, 113, 104, 96, 91, 87, 83, 81, 80, 79, 79, 79, 80, 80, 79, 78, 75, 72, 68, 64, 60, 56, 55, 58, 65, 75, 87, 100, 114, 127, 139, 149, 157, 165, 171, 176, 180, 183, 185, 187, 189, 191, 192, 193, 195, 196, 198, 200, 203, 207, 211, 216, 220, 224, 226};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Twilight_r twilight_r);