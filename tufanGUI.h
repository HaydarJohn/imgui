#pragma once

class TufanGUI
{
public:
    void init();
    virtual void update();
    bool getStatus();
    void render();
    void shutdown();
};