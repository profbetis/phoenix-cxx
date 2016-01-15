#ifndef WORLDTILE_H
#define WORLDTILE_H

#include "initError.hpp"
#include "world.hpp"
#include "graphics.hpp"

namespace world{
    class Tile{
    public:
        Tile(int idIn, float heightIn, float posXIn, float posYIn);
        int id;
        int tileSize;
        float height;
        float posX, posY;
        void update( );
        void render( );

    private:

    };
}
