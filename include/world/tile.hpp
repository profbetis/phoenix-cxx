#ifndef WORLDTILE_H
#define WORLDTILE_H

namespace world{
    class Tile{
    public:
        int id;
        float height;
        void render( );
        void update( );
    }
}
