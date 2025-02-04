#include <imgui.h>
#include <rlImGui.h>

class UI
{
private:
    bool showProperties = true;
    bool showNodes = true;
    bool showConsole = true;
    bool showPreview = true;
    bool showFiles = true;

public:
    UI();
    ~UI();

    void draw();
    void event();
    void startContext();
    void init();

};