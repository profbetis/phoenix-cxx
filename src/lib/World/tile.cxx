#include "tile.hpp"

using namespace world;

Tile::Tile( ) throw (error::InitError){

}

Tile::update( ){

}

Tile::render( ){
    Graphics::brushColor(height);
    drawSquare( posX, posY, posX + tileSize, posY + tileSize );
}
