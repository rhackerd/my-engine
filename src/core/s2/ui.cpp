#include "ui.h"
#include <algorithm>
#include <imgui_internal.h>
#include <imgui.h>
#include <cstdint>

UI::UI() : io(ImGuiIO()), font(nullptr)
{
}

UI::~UI()
{
}

void UI::draw()
{
    rlImGuiBegin();

    // Get screen size dynamically
    ImVec2 screenSize = ImVec2((float)GetScreenWidth(), (float)GetScreenHeight());

    float leftPanelWidth = screenSize.x * 0.2f;
    float rightPanelWidth = screenSize.x * 0.2f;
    float bottomHeight = screenSize.y * 0.3f;
    float centerWidth = screenSize.x - leftPanelWidth - rightPanelWidth;
    float centerHeight = screenSize.y - bottomHeight;

    // Left Panel (Nodes)
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(ImVec2(leftPanelWidth, centerHeight * 0.6f));
    ImGui::Begin("Nodes", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    ImGui::Text("Nodes List");
    ImGui::End();

    // Left Bottom Panel (Files)
    ImGui::SetNextWindowPos(ImVec2(0, centerHeight * 0.6f));
    ImGui::SetNextWindowSize(ImVec2(leftPanelWidth, centerHeight * 0.4f));
    ImGui::Begin("Files", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    ImGui::Text("Files Panel");
    ImGui::End();

    // Right Panel (Properties)
    ImGui::SetNextWindowPos(ImVec2(screenSize.x - rightPanelWidth, 0));
    ImGui::SetNextWindowSize(ImVec2(rightPanelWidth, centerHeight));
    ImGui::Begin("Properties", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    ImGui::Text("Properties Panel");
    ImGui::End();

    // Bottom Panel (Console)
    ImGui::SetNextWindowPos(ImVec2(0, centerHeight));
    ImGui::SetNextWindowSize(ImVec2(screenSize.x, bottomHeight));
    ImGui::Begin("Console", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    ImGui::Text("Console Output");
    ImGui::End();


    // --- 🎥 Display RenderTexture in ImGui ---
    ImGui::SetNextWindowPos(ImVec2(leftPanelWidth, 0));
    ImGui::SetNextWindowSize(ImVec2(centerWidth, centerHeight));
    ImGui::Begin("Preview", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
    


    ImGui::End();

    rlImGuiEnd();
}



RenderTexture2D UI::getRenderTexture()
{
    return renderTexture;
}

void UI::drawOutside()
{
}




void UI::event()
{
}

void UI::startContext()
{
    rlImGuiSetup(true);
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
    ImGui::StyleColorsDark();
    ImGui_ImplRaylib_Init();
    io.Fonts->AddFontDefault();
    ImGui_ImplRaylib_BuildFontAtlas();

    // Create RenderTexture for preview
    renderTexture = LoadRenderTexture(GetScreenWidth(), GetScreenHeight());
}




void UI::init()
{
    // InitImGui();
}