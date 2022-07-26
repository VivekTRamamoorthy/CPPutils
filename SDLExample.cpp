#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

// Run this file only in terminals (not run button) wth `gcc SDLExample.cpp -lSDL2 && ./SDLExample.cpp`
// The -lSDL2 flag links the library to the compile. brew install sdl2 is a prerequisite.

int main(int argc, char const *argv[])
{
    SDL_Init( SDL_INIT_EVERYTHING);
    
    SDL_Window * window = NULL;
    SDL_Renderer * renderer;

    window = SDL_CreateWindow("My first CPP app", 100,100,640,480,SDL_WINDOW_RESIZABLE);

    renderer = SDL_CreateRenderer(window, -1 , SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer, 250, 250, 250, 255);
    SDL_RenderClear(renderer);

      SDL_RenderPresent(renderer);
    // if (window == NULL){
    //     std::cout << "Couldn't initialize the window"  << SDL_GetError() << std::endl;
    //     return 1;
    // }

    SDL_Delay(1000);
    SDL_Event e;
    bool quit = false;
    while (!quit){
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            if (e.type == SDL_KEYDOWN){
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                quit = true;
            }
        }
    }
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

