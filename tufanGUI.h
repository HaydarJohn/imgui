#pragma once

class TufanGUI
{
private:
    bool m_status;
public:
    void init();
    virtual void update();
    bool getStatus();
    void render();
    void shutdown();
};