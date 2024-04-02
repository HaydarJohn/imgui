#pragma once


struct SDL_Window;
struct SDL_Renderer;

class Graphics
{
private:
    SDL_Window* m_window;
    SDL_Renderer* m_renderer;

public:
    Graphics();
    Graphics(int width,int height,const char* windowName);
    ~Graphics();

};