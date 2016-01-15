#include "world.hpp"

#include "graphics.hpp"

using namespace world;

World::World( ) throw (error::InitError){
    worldTiles = new Tile[8][8]; // generate an 8x8 grid of tiles
    for( int i=0; i<8; i++ ){
        for( int j=0; j<8; j++ ){
            int id = j*8 + i;
            int tileSize = 100;
            srand( 1 );
            worldTiles[i][j].id = id;
            worldTiles[i][j].height = rand( ) % 128;
            worldTiles[i][j].posX = i*tileSize + 200;
            worldTiles[i][j].posY = j*tileSize + 200;
            worldTiles[i][j].tileSize = tileSize;
        }
    }
}

void World::update( ){
    for( int i=0; i<8; i++ ){
        for( int j=0; j<8; j++ ){
            worldTiles[i][j].update( );}}

    render( );
}

void World::render( ){
    for( int i=0; i<8; i++ ){
        for( int j=0; j<8; j++ ){
            worldTiles[i][j].render( );}}
}
