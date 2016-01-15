#ifndef WORLD_H
#define WORLD_H

#include "graphics.hpp"
#include "sdlUtil.hpp"

namespace world
{
     class World
     {
     public:
         Tile* worldTiles; // world tile array
         void update( );
         void render( );
          // virtual World() = 0;
          // virtual void update() = 0;
     };
}

#endif
