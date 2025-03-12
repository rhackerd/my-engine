#ifndef GRAPHICS_H
#define GRAPHICS_H


#include <raylib.h>
#include <raymath.h>

class Graphics
{
    private:
        Color background_color;
    
    public:
        Graphics();
        ~Graphics();

        void draw();
        void event();
        void createWindow();
        void setClearColor(Color color);
        void setWindowTitle(const char* title);
        void setFPS(int fps);
        void setWindowSize(int width, int height);
        void setWindowPosition(int x, int y);
        void setWindowIcon(const char *fileName);
        void setVsync(bool vsync);
        void setConfigFlags(unsigned flags);

        int getFPS();
        int getWindowWidth();
        int getWindowHeight();
        Vector2 getWindowSize();
        Vector2 getWindowPosition();
        Color getClearColor();

        void renderToTexture(RenderTexture2D renderTexture);
        void render();
};

#endif
