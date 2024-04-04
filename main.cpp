#include<SDL2/SDL.h>
#include"imgui/imgui.h"
#include"tufanGUI.h"
#include"graphics.h"

int main(int argc,const char* argv[])
{
    Graphics* graphics = new Graphics(1920,1080,"HaydarJohn");
    bool changeThis = true
    while (changeThis) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {  // poll until all events are handled!
        // decide what to do with this event.
        if(event.type ==SDL_QUIT)
        {
            changeThis = false;
        }
        }

        // update game state, draw the current frame
    }


    //TufanGUI imgui;

    //imgui.init();
    //while (/*imgui.getStatus()*/true)
    //{
        
        //imgui.update();
        //imgui.render();
    //}

    //imgui.shutdown();
    
}