#include<SDL2/SDL.h>
#include"graphics.h"


Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(640,480,0,&this->m_window,&this->m_renderer);
    SDL_SetWindowTitle(this->m_window,"HaydarJohn");
}

Graphics::Graphics(int width,int height,const char* windowName)
{
    SDL_CreateWindowAndRenderer(width,height,0,&this->m_window,&this->m_renderer);
    SDL_SetWindowTitle(this->m_window,windowName);
}
