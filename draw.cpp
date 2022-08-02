#include <map>
#include <string>
#include <iostream>

#include "imgui.h"

#include "theme.h"

static void HelpMarker(const char* desc) {
    ImGui::SameLine();
    ImGui::TextDisabled("(?)");
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(desc);
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
}


const ImVec4 floatArrayToImVec4(float array[4]) {
    return ImVec4(array[0], array[1], array[2], array[3]);
}

// imgui.h: line 1510, 1822
void draw(std::map<ImGuiCol_, ImVec4>& map) {
    // write maps to buffers
    // memory usage :gaming:
    static float textColor[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float textColorDisabled[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float windowBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float childBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f};
    static float popupBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float border[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float borderShadow[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float frameBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float frameBackgroundHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float frameBackgroundActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float titleBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float titleBackgroundActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float titleBackgroundCollapsed[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float menuBarBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float scrollBarBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float scrollBarGrab[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float scrollBarGrabHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float scrollBarGrabActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float checkMark[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float sliderGrab[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float sliderGrabActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float button[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float buttonActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float buttonHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float header[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float headerHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float headerActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float separator[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float separatorHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float separatorActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float resizeGrip[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float resizeGripHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float resizeGripActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tab[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tabHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tabActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tabUnfocused[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tabUnfocusedActive[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float plotLines[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float plotLinesHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float plotHistogram[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float plotHistogramHovered[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tableHeaderBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tableBorderStrong[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tableBorderLight[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float tableRowBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float altTableRowBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float textSelectedBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float dragAndDropTarget[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float navHighlight[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float navWindowingHighlight[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float navWindowingDimBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    static float modalWindowDimBackground[4] { 0.0f, 0.0f, 0.0f, 0.0f };
    // static float count { 0.0f, 0.0f, 0.0f, 0.0f };

    static float globalAlpha = 0.0f;
    static float disabledAlpha = 0.0f;
    static float windowPadding[2] { 0.0f, 0.0f };
    static float windowRounding = 0.0f;
    static float windowBorderSize = 0.0f;
    static float windowMinimumSize[2] { 0.0f, 0.0f };
    static float childRounding = 0.0f;
    static float childBorderSize = 0.0f;
    static float popupRounding = 0.0f;
    static float popupBorderSize = 0.0f;
    static float framePadding[2] { 0.0f, 0.0f };
    static float frameRounding = 0.0f;
    static float frameBorderSize = 0.0f;
    static float itemSpacing[2] = { 0.0f, 0.0f };
    static float itemInnerSpacing[2] = { 0.0f, 0.0f };
    static float cellPadding[2] = { 0.0f, 0.0f };
    static float touchExtraPadding[2] = { 0.0f, 0.0f };
    static float indentSpacing = 0.0f;
    static float columnsMinimumSpacing = 0.0f;
    static float scrollbarSize = 0.0f;
    static float scrollbarRounding = 0.0f;
    static float grabMinSize = 0.0f;
    static float grabRounding = 0.0f;
    static float logSliderDeadzone = 0.0f;
    static float tabRounding = 0.0f;
    static float tabBorderSize = 0.0f;
    static float tabMinWidthForCloseButton = 0.0f;
    static float buttonTextAlign[2] = { 0.0f, 0.0f };
    static float selectableTextAlign[2] = { 0.0f, 0.0f };
    static float displayWindowPadding[2] = { 0.0f, 0.0f };
    static float displaySafeAreaPadding[2] = { 0.0f, 0.0f };
    static float mouseCursorScale = 0.0f;
    static float curveTesselationTolerance = 0.0f;
    static float CircleTesselationMaxError = 0.0f;
    static float windowTitleAlign[2] = { 0.0f, 0.0f };

    static int windowMenuButtonPosition = 0;
    static int colorButtonPosition = 0;

    static bool showAbout = false;
    static bool applyColors = false;
    static bool applyOther = false;

    ImGui::BeginMainMenuBar();
    
        if (ImGui::BeginMenu("File")) {

            if (ImGui::MenuItem("Export C++")) {
                // TODO
            }
            
            if (ImGui::MenuItem("About...")) {
                showAbout = true;
            }

            ImGui::EndMenu();
        }

        if (ImGui::BeginMenu("Theme")) {

            if (ImGui::MenuItem("Apply all")) {
                applyColors = true;
                applyOther = true;
            }
            
            if (ImGui::MenuItem("Apply misc")) {
                applyColors = true;
            }

            if (ImGui::MenuItem("Apply other")) {
                applyOther = true;
            }

            ImGui::EndMenu();
        }

    ImGui::EndMainMenuBar();


    ImGui::ShowDemoWindow();

    ImGui::Begin("Colors");

    ImGui::ColorEdit4("Text", textColor);
    ImGui::ColorEdit4("Disabled text", textColorDisabled);
    ImGui::ColorEdit4("Window background", windowBackground); HelpMarker("Background of normal windows");
    ImGui::ColorEdit4("Child window background", childBackground); HelpMarker("Background of child windows");
    ImGui::ColorEdit4("Popup background", popupBackground); HelpMarker("Background of popups, menus, tooltips windows");
    ImGui::ColorEdit4("Border", border);
    ImGui::ColorEdit4("Border shadow", borderShadow);
    ImGui::ColorEdit4("Frame background", frameBackground); HelpMarker("Background of checkbox, radio button, plot, slider and text input");
    ImGui::ColorEdit4("Hovered frame background", frameBackgroundHovered);
    ImGui::ColorEdit4("Active frame background", frameBackgroundActive);
    ImGui::ColorEdit4("Title background", titleBackground);
    ImGui::ColorEdit4("Active title background", titleBackgroundActive);
    ImGui::ColorEdit4("Collapsed title background", titleBackgroundCollapsed);
    ImGui::ColorEdit4("Menubar background", menuBarBackground);
    ImGui::ColorEdit4("Scrollbar background", scrollBarBackground);
    ImGui::ColorEdit4("Scrollbar grabbed", scrollBarGrab);
    ImGui::ColorEdit4("Active scrollbar grabbed", scrollBarGrabActive);
    ImGui::ColorEdit4("Hovered scrollbar grabbed", scrollBarGrabHovered);
    ImGui::ColorEdit4("Checkmark", checkMark);
    ImGui::ColorEdit4("Grabbed slider", sliderGrab);
    ImGui::ColorEdit4("Active grabbed slider", sliderGrabActive);
    ImGui::ColorEdit4("Button", button);
    ImGui::ColorEdit4("Hovered Button", buttonHovered);
    ImGui::ColorEdit4("Active button", buttonActive);
    ImGui::ColorEdit4("Header", header); HelpMarker("Header* colors are used for CollapsingHeader, TreeNode, Selectable and MenuItem");
    ImGui::ColorEdit4("Hovered header", headerHovered), HelpMarker("Header* colors are used for CollapsingHeader, TreeNode, Selectable, MenuItem");
    ImGui::ColorEdit4("Active Header", headerActive); HelpMarker("Header* colors are used for CollapsingHeader, TreeNode, Selectable, MenuItem");
    ImGui::ColorEdit4("Separator", separator);
    ImGui::ColorEdit4("Hovered Separator", separatorHovered);
    ImGui::ColorEdit4("Active Separator", separatorActive);
    ImGui::ColorEdit4("Resize grip", resizeGrip); HelpMarker("Resize grip in lower-right and lower-left corners of windows");
    ImGui::ColorEdit4("Hovered resize grip", resizeGripHovered); HelpMarker("Resize grip in lower-right and lower-left corners of windows");
    ImGui::ColorEdit4("Active resize grip", resizeGripActive); HelpMarker("Resize grip in lower-right and lower-left corners of windows");
    ImGui::ColorEdit4("Tab", tab); HelpMarker("TabItem in a TabBar");
    ImGui::ColorEdit4("Hovered tab", tabHovered);
    ImGui::ColorEdit4("Active tab", tabActive);
    ImGui::ColorEdit4("Unfocused tab", tabUnfocused);
    ImGui::ColorEdit4("Unfocused active tab", tabUnfocusedActive);
    ImGui::ColorEdit4("Plot lines", plotLines);
    ImGui::ColorEdit4("Hovered plot lines", plotLinesHovered);
    ImGui::ColorEdit4("Histogram plot", plotHistogram);
    ImGui::ColorEdit4("Hovered histogram plot", plotHistogramHovered);
    ImGui::ColorEdit4("Table header background", tableHeaderBackground); HelpMarker("Table header background");
    ImGui::ColorEdit4("Strong table border", tableBorderStrong); HelpMarker("Table outer and header borders (prefer using Alpha=1.0 here)");
    ImGui::ColorEdit4("Light table border", tableBorderLight); HelpMarker("Table inner borders (prefer using Alpha=1.0 here)");
    ImGui::ColorEdit4("Table row background", tableRowBackground); HelpMarker("Table row background (even rows)");
    ImGui::ColorEdit4("Alt table row background", altTableRowBackground); HelpMarker("Table row background (odd rows)");
    ImGui::ColorEdit4("Selected text background", textSelectedBackground);
    ImGui::ColorEdit4("Drag and drop target", dragAndDropTarget); HelpMarker("Rectangle highlighting a drop target");
    ImGui::ColorEdit4("Navigation highlight", navHighlight); HelpMarker("Gamepad/keyboard: current highlighted item");
    ImGui::ColorEdit4("Window navigation highlight", navWindowingHighlight); HelpMarker("Highlight window when using CTRL+TAB");
    ImGui::ColorEdit4("Window navigation background dimming", navWindowingDimBackground); HelpMarker("Darken/colorize entire screen behind the CTRL+TAB window list, when active");
    ImGui::ColorEdit4("Modal window background dimming", modalWindowDimBackground); HelpMarker("Darken/colorize entire screen behind a modal window, when one is active");

    ImGui::End();

    ImGui::Begin("Misc");

    ImGui::InputFloat("Global alpha", &globalAlpha); HelpMarker("Global alpha applies to everything in Dear ImGui");
    ImGui::InputFloat("Disabled alpha", &disabledAlpha); HelpMarker("Additional alpha multiplier applied by BeginDisabled(). Multiply over current value of Alpha");
    ImGui::InputFloat2("Window padding", windowPadding); HelpMarker("Padding within a window");
    ImGui::InputFloat("Window rounding", &windowRounding); HelpMarker("Radius of window corners rounding. Set to 0.0f to have rectangular windows. Large values tend to lead to variety of artifacts and are not recommended");
    ImGui::InputFloat("Window border size", &windowBorderSize); HelpMarker("Thickness of border around windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly)");
    ImGui::InputFloat2("Minimum window size", windowMinimumSize); HelpMarker("Minimum window size. This is a global setting. If you want to constraint individual windows, use SetNextWindowSizeConstraints()");

    ImGui::Combo("Window menu button position", &windowMenuButtonPosition, "Left\0Right\0None\0\0");
    ImGui::SameLine();
    HelpMarker("Side of the collapsing/docking button in the title bar (None/Left/Right). Defaults to ImGuiDir_Left");

    ImGui::InputFloat("Child window rounding", &childRounding); HelpMarker("Radius of child window corners rounding. Set to 0.0f to have rectangular windows");
    ImGui::InputFloat("Child border size", &childBorderSize); HelpMarker("Thickness of border around child windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly)");
    ImGui::InputFloat("Popup rounding", &popupRounding); HelpMarker("Radius of popup window corners rounding. (Note that tooltip windows use WindowRounding)");
    ImGui::InputFloat("Popup border size", &popupBorderSize); HelpMarker("Thickness of border around popup/tooltip windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly)");
    ImGui::InputFloat2("Frame padding", framePadding); HelpMarker("Padding within a framed rectangle (used by most widgets)");
    ImGui::InputFloat("Frame rounding", &frameRounding); HelpMarker("Radius of frame corners rounding. Set to 0.0f to have rectangular frame (used by most widgets)");
    ImGui::InputFloat("Frame border size", &frameBorderSize); HelpMarker("Thickness of border around frames. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly)");
    ImGui::InputFloat2("Item spacing", itemSpacing); HelpMarker("Horizontal and vertical spacing between widgets/lines");
    ImGui::InputFloat2("Item inner spacing", itemInnerSpacing); HelpMarker("Horizontal and vertical spacing between within elements of a composed widget (e.g. a slider and its label)");
    ImGui::InputFloat2("Cell padding", cellPadding); HelpMarker("Padding within a table cell");
    ImGui::InputFloat2("Touch extra padding", touchExtraPadding); HelpMarker("Expand reactive bounding box for touch-based system where touch position is not accurate enough. Unfortunately we don't sort widgets so priority on overlap will always be given to the first widget. So don't grow this too much!");
    ImGui::InputFloat("Indent spacing", &indentSpacing); HelpMarker("Horizontal indentation when e.g. entering a tree node. Generally == (FontSize + FramePadding.x*2)");
    ImGui::InputFloat("Columns min spacing", &columnsMinimumSpacing); HelpMarker("Minimum horizontal spacing between two columns. Preferably > (FramePadding.x + 1)");
    ImGui::InputFloat("Scrollbar size", &scrollbarSize); HelpMarker("Width of the vertical scrollbar, Height of the horizontal scrollbar");
    ImGui::InputFloat("Scrollbar Rounding", &scrollbarRounding); HelpMarker("Radius of grab corners for scrollbar");
    ImGui::InputFloat("Grab min size", &grabMinSize); HelpMarker("Minimum width/height of a grab box for slider/scrollbar");
    ImGui::InputFloat("Grab rounding", &grabRounding); HelpMarker("Radius of grabs corners rounding. Set to 0.0f to have rectangular slider grabs");
    ImGui::InputFloat("Log slider deadzone", &logSliderDeadzone); HelpMarker("The size in pixels of the dead-zone around zero on logarithmic sliders that cross zero");
    ImGui::InputFloat("Tab rounding", &tabRounding); HelpMarker("Radius of upper corners of a tab. Set to 0.0f to have rectangular tabs");
    ImGui::InputFloat("Tab border size", &tabBorderSize); HelpMarker("Thickness of border around tabs");
    ImGui::InputFloat("Tab min width for close button", &tabMinWidthForCloseButton); HelpMarker("Minimum width for close button to appears on an unselected tab when hovered. Set to 0.0f to always show when hovering, set to FLT_MAX to never show close button unless selected");
    
    ImGui::Combo("Color button position", &colorButtonPosition, "Left\0Right\0\0");
    ImGui::SameLine();
    HelpMarker("Side of the color button in the ColorEdit4 widget (left/right). Defaults to ImGuiDir_Right");

    ImGui::InputFloat2("Button text align", buttonTextAlign); HelpMarker("Alignment of button text when button is larger than text. Defaults to (0.5f, 0.5f) (centered)");
    ImGui::InputFloat2("Selectable text align", selectableTextAlign); HelpMarker("Alignment of selectable text. Defaults to (0.0f, 0.0f) (top-left aligned). It's generally important to keep this left-aligned if you want to lay multiple items on a same line");
    ImGui::InputFloat2("Display window padding", displayWindowPadding); HelpMarker("Window position are clamped to be visible within the display area or monitors by at least this amount. Only applies to regular windows");
    ImGui::InputFloat2("Display safe area padding", displaySafeAreaPadding); HelpMarker("If you cannot see the edges of your screen (e.g. on a TV) increase the safe area padding. Apply to popups/tooltips as well regular windows. NB: Prefer configuring your TV sets correctly!");
    ImGui::InputFloat("MouseCursorScale", &mouseCursorScale); HelpMarker("Scale software rendered mouse cursor (when io.MouseDrawCursor is enabled). May be removed later");
    
    static int antialiasLines = 0;
    static int antialiasedLinesUseTex = 0;
    static int antialiasedFill = 0;
    ImGui::Combo("Antialias lines", &antialiasLines, "true\0false\0\0");
    ImGui::SameLine();
    HelpMarker("Enable anti-aliased lines/borders. Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList)");

    ImGui::Combo("Antialias lines use tex", &antialiasedLinesUseTex, "true\0false\0\0");
    ImGui::SameLine();
    HelpMarker("Enable anti-aliased lines/borders using textures where possible. Require backend to render with bilinear filtering (NOT point/nearest filtering). Latched at the beginning of the frame (copied to ImDrawList)");

    ImGui::Combo("Antialiased fill", &antialiasedFill, "true\0false\0\0");
    ImGui::SameLine();
    HelpMarker("Enable anti-aliased edges around filled shapes (rounded rectangles, circles, etc.). Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList).");

    
    ImGui::InputFloat("Curve tesselation tolerance", &curveTesselationTolerance); HelpMarker("Tessellation tolerance when using PathBezierCurveTo() without a specific number of segments. Decrease for highly tessellated curves (higher quality, more polygons), increase to reduce quality");
    ImGui::InputFloat("Circle tesselation max error", &CircleTesselationMaxError); HelpMarker("Maximum error (in pixels) allowed when using AddCircle()/AddCircleFilled() or drawing rounded corner rectangles with no explicit segment count specified. Decrease for higher quality but more geometry");
    ImGui::InputFloat("Window title align", windowTitleAlign); HelpMarker("Alignment for title bar text. Defaults to (0.0f,0.5f) for left-aligned,vertically centered.");
    ImGui::End();

    if (showAbout) {
        ImGui::Begin("About");
        ImGui::Text("Current FPS: %.1f", ImGui::GetIO().Framerate);

        ImGui::Separator();

        ImGui::Text("Libraries used:");
        ImGui::Text("SDL2: https://github.com/libsdl-org/SDL");
        ImGui::Text("ImGui: https://github.com/ocornut/imgui");
        
        ImGui::Separator();

        if (ImGui::Button("Close")) {
            showAbout = false;
        }
        
        ImGui::End();
    }

    if (applyOther) {
        ImGuiStyle* style = &ImGui::GetStyle();
        style->Alpha = globalAlpha;
        style->DisabledAlpha = disabledAlpha;
        style->WindowPadding = ImVec2(windowPadding[0], windowPadding[1]);
        style->WindowRounding = windowRounding;
        style->WindowBorderSize = windowBorderSize;
        style->WindowMinSize = ImVec2(windowMinimumSize[0], windowMinimumSize[1]);
        style->WindowTitleAlign = ImVec2(windowTitleAlign[0], windowTitleAlign[1]);
        
        switch (windowMenuButtonPosition) {
            case 0:
                style->WindowMenuButtonPosition = ImGuiDir_Left;
                break;
            case 1:
                style->WindowMenuButtonPosition = ImGuiDir_Right;
                break;
            case 2:
                style->WindowMenuButtonPosition = ImGuiDir_None;
                break;
        }

        style->ChildRounding = childRounding;
        style->ChildBorderSize = childBorderSize;
        style->PopupRounding = popupRounding;
        style->PopupBorderSize = popupBorderSize;
        style->FramePadding = ImVec2(framePadding[0], framePadding[1]);
        style->FrameRounding = frameRounding;
        style->FrameBorderSize = frameBorderSize;
        style->ItemSpacing = ImVec2(itemSpacing[0], itemSpacing[1]);
        style->ItemInnerSpacing = ImVec2(itemInnerSpacing[0], itemInnerSpacing[1]);
        style->CellPadding = ImVec2(cellPadding[0], cellPadding[1]);
        style->TouchExtraPadding = ImVec2(touchExtraPadding[0], touchExtraPadding[1]);
        style->IndentSpacing = indentSpacing;
        style->ColumnsMinSpacing = columnsMinimumSpacing;
        style->ScrollbarSize = scrollbarSize;
        style->ScrollbarRounding = scrollbarRounding;
        style->GrabMinSize = grabMinSize;
        style->GrabRounding = grabRounding;
        style->LogSliderDeadzone = logSliderDeadzone;
        style->TabRounding = tabRounding;
        style->TabBorderSize = tabBorderSize;
        style->TabMinWidthForCloseButton = tabMinWidthForCloseButton;

        switch (colorButtonPosition) {
            case 0:
                style->ColorButtonPosition = ImGuiDir_Left;
                break;
            case 1:
                style->ColorButtonPosition = ImGuiDir_Right;
                break;
        }

        style->ButtonTextAlign = ImVec2(buttonTextAlign[0], buttonTextAlign[1]);
        style->SelectableTextAlign = ImVec2(selectableTextAlign[0], selectableTextAlign[1]);
        style->DisplayWindowPadding = ImVec2(displayWindowPadding[0], displayWindowPadding[1]);
        style->DisplaySafeAreaPadding = ImVec2(displaySafeAreaPadding[0], displaySafeAreaPadding[1]);
        style->MouseCursorScale = mouseCursorScale;
        style->AntiAliasedLines = antialiasLines == 0 ? false : true;
        style->AntiAliasedFill = antialiasedFill == 0 ? false : true;
        style->AntiAliasedLinesUseTex = antialiasedLinesUseTex == 0 ? false : true;
        style->CurveTessellationTol = curveTesselationTolerance;
        style->CircleTessellationMaxError = CircleTesselationMaxError;
    }

    if (applyColors) {
        ImGuiStyle* style = &ImGui::GetStyle();
        ImVec4* colors = style->Colors;

        colors[ImGuiCol_Text] = floatArrayToImVec4(textColor);
        colors[ImGuiCol_TextDisabled] = floatArrayToImVec4(textColorDisabled);
        colors[ImGuiCol_WindowBg] = floatArrayToImVec4(windowBackground);
        colors[ImGuiCol_ChildBg] = floatArrayToImVec4(childBackground);
        colors[ImGuiCol_PopupBg] = floatArrayToImVec4(popupBackground);
        colors[ImGuiCol_Border] = floatArrayToImVec4(border);
        colors[ImGuiCol_BorderShadow] = floatArrayToImVec4(borderShadow);
        colors[ImGuiCol_FrameBg] = floatArrayToImVec4(frameBackground);
        colors[ImGuiCol_FrameBgHovered] = floatArrayToImVec4(frameBackgroundHovered);
        colors[ImGuiCol_FrameBgActive] = floatArrayToImVec4(frameBackgroundActive);
        colors[ImGuiCol_TitleBg] = floatArrayToImVec4(titleBackground);
        colors[ImGuiCol_TitleBgActive] = floatArrayToImVec4(titleBackgroundActive);
        colors[ImGuiCol_TitleBgCollapsed] = floatArrayToImVec4(titleBackgroundCollapsed);
        colors[ImGuiCol_MenuBarBg] = floatArrayToImVec4(menuBarBackground);
        colors[ImGuiCol_ScrollbarBg] = floatArrayToImVec4(scrollBarBackground);
        colors[ImGuiCol_ScrollbarGrab] = floatArrayToImVec4(scrollBarGrab);
        colors[ImGuiCol_ScrollbarGrabHovered] = floatArrayToImVec4(scrollBarGrabHovered);
        colors[ImGuiCol_ScrollbarGrabActive] = floatArrayToImVec4(scrollBarGrabActive);
        colors[ImGuiCol_CheckMark] = floatArrayToImVec4(checkMark);
        colors[ImGuiCol_SliderGrab] = floatArrayToImVec4(sliderGrab);
        colors[ImGuiCol_SliderGrabActive] = floatArrayToImVec4(sliderGrabActive);
        colors[ImGuiCol_Button] = floatArrayToImVec4(button);
        colors[ImGuiCol_ButtonHovered] = floatArrayToImVec4(buttonHovered);
        colors[ImGuiCol_ButtonActive] = floatArrayToImVec4(buttonActive);
        colors[ImGuiCol_Header] = floatArrayToImVec4(header);
        colors[ImGuiCol_HeaderHovered] = floatArrayToImVec4(headerHovered);
        colors[ImGuiCol_HeaderActive] = floatArrayToImVec4(headerActive);
        colors[ImGuiCol_Separator] = floatArrayToImVec4(separator);
        colors[ImGuiCol_SeparatorHovered] = floatArrayToImVec4(separatorHovered);
        colors[ImGuiCol_SeparatorActive] = floatArrayToImVec4(separatorActive);
        colors[ImGuiCol_ResizeGrip] = floatArrayToImVec4(resizeGrip);
        colors[ImGuiCol_ResizeGripHovered] = floatArrayToImVec4(resizeGripHovered);
        colors[ImGuiCol_ResizeGripActive] = floatArrayToImVec4(resizeGripActive);
        colors[ImGuiCol_Tab] = floatArrayToImVec4(tab);
        colors[ImGuiCol_TabHovered] = floatArrayToImVec4(tabHovered);
        colors[ImGuiCol_TabActive] = floatArrayToImVec4(tabActive);
        colors[ImGuiCol_TabUnfocused] = floatArrayToImVec4(tabUnfocused);
        colors[ImGuiCol_TabUnfocusedActive] = floatArrayToImVec4(tabUnfocusedActive);
        colors[ImGuiCol_PlotLines] = floatArrayToImVec4(plotLines);
        colors[ImGuiCol_PlotLinesHovered] = floatArrayToImVec4(plotLinesHovered);
        colors[ImGuiCol_PlotHistogram] = floatArrayToImVec4(plotHistogram);
        colors[ImGuiCol_PlotHistogramHovered] = floatArrayToImVec4(plotHistogramHovered);
        colors[ImGuiCol_TableHeaderBg] = floatArrayToImVec4(tableHeaderBackground);
        colors[ImGuiCol_TableBorderStrong] = floatArrayToImVec4(tableBorderStrong);
        colors[ImGuiCol_TableBorderLight] = floatArrayToImVec4(tableBorderLight);
        colors[ImGuiCol_TableRowBg] = floatArrayToImVec4(tableRowBackground);
        colors[ImGuiCol_TableRowBgAlt] = floatArrayToImVec4(altTableRowBackground);
        colors[ImGuiCol_TextSelectedBg] = floatArrayToImVec4(textSelectedBackground);
        colors[ImGuiCol_DragDropTarget] = floatArrayToImVec4(dragAndDropTarget);
        colors[ImGuiCol_NavHighlight] = floatArrayToImVec4(navHighlight);
        colors[ImGuiCol_NavWindowingHighlight] = floatArrayToImVec4(navWindowingHighlight);
        colors[ImGuiCol_NavWindowingDimBg] = floatArrayToImVec4(navWindowingDimBackground);
        colors[ImGuiCol_ModalWindowDimBg] = floatArrayToImVec4(modalWindowDimBackground);
    }
}