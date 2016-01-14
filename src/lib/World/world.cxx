#include "world.hpp"

using namespace world;

World::World( ) throw (error::InitError){
    worldTiles = new Tile[8][8]; // generate an 8x8 grid of tiles
    for( int i=0; i<64; i++ ){
        worldTiles[i].id = i;
        worldTiles[i].height = float(i)*12.691;
    }
}
