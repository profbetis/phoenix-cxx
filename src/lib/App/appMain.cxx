#include "SDL.h"

#include "app.hpp"

using namespace app;

void App::run()
{
     bool finished = false;

     bool lmbDown = false, lmbDownPrev = false;
     bool lmbClick = false, lmbRelease = false;
     bool rmbDown = false, rmbDownPrev = false;
     bool rmbClick = false, rmbRelease = false;

     int prevX = 0, prevY = 0;
     int currX = 0, currY = 0; // Mmmmmm... Curry!
    //  float currsX = 0, currsY = 0;
    //  float prevsX = 0, prevsY = 0;

     SDL_Event event = SDL_Event{ 0 };

     while (!finished) {
          graphics.update();

          while (SDL_PollEvent(&event)) {
               switch(event.type) {
               case SDL_QUIT:
                    finished = true;
                    break;
               case SDL_KEYDOWN:
                    switch(event.key.keysym.sym) {
                    case SDLK_ESCAPE:
                         finished = true;
                    }
                    break;
               case SDL_MOUSEBUTTONUP:
                    if      (event.button.button == SDL_BUTTON_LEFT)
                                 lmbDownPrev = lmbDown = false;
                    else if (event.button.button == SDL_BUTTON_RIGHT)
                                 rmbDownPrev = rmbDown = false;
                    break;
               case SDL_MOUSEBUTTONDOWN:
                    prevX = currX = event.button.x, prevY = currY = event.button.y;
                    
                    if (event.button.button == SDL_BUTTON_LEFT) {
                         lmbDown = true;
                         graphics.drawPoint(currX, currY);
                    }
                    if (event.button.button == SDL_BUTTON_RIGHT){
                        rmbDown = true;
                        graphics.drawSquare(currX, currY, currX + 100, currY + 100);
                    }
                    break;
               case SDL_MOUSEMOTION:
                    currX = event.motion.x, currY = event.motion.y;

                    if (lmbDown){
                        //  prevsX = currsX = float(currX)*0.85 + currsX*0.15;
                        //  prevsY = currsY = float(currY)*0.85 + currsY*0.15;
                         graphics.drawLine(prevX, prevY, currX, currY);
                        //  graphics.drawLine(int(prevsX), int(prevsY), int(currsX), int(currsY));
                    }

                    prevX = currX, prevY = currY;
                    break;
               }
          }

          graphics.draw();
     }
}
