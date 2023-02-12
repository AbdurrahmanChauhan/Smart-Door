//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Terrain_r {
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
                uint8_t red[64] = {255, 246, 238, 230, 222, 214, 206, 198, 190, 182, 174, 165, 157, 149, 141, 133, 129, 137, 145, 153, 161, 170, 178, 186, 194, 202, 210, 218, 226, 234, 242, 250, 246, 230, 214, 198, 182, 165, 149, 133, 117, 101, 85, 68, 52, 36, 20, 4, 0, 0, 0, 0, 0, 0, 2, 7, 13, 18, 24, 29, 34, 40, 45, 51};
                uint8_t green[64] = {255, 244, 234, 223, 213, 203, 192, 182, 172, 161, 151, 141, 130, 120, 109, 99, 94, 104, 115, 125, 135, 146, 156, 166, 177, 187, 198, 208, 218, 229, 239, 249, 253, 250, 246, 243, 240, 237, 233, 230, 227, 224, 221, 217, 214, 211, 208, 204, 197, 189, 181, 173, 165, 157, 148, 137, 126, 115, 104, 94, 83, 72, 61, 51};
                uint8_t blue[64] = {255, 244, 233, 222, 211, 200, 189, 179, 168, 157, 146, 135, 124, 113, 103, 92, 85, 89, 93, 98, 102, 107, 111, 115, 120, 124, 128, 133, 137, 142, 146, 150, 151, 148, 144, 141, 138, 135, 131, 128, 125, 122, 119, 115, 112, 109, 106, 102, 120, 144, 168, 193, 217, 241, 250, 239, 228, 217, 206, 196, 185, 174, 163, 153};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Terrain_r terrain_r);