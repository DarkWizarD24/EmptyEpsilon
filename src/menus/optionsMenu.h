#ifndef OPTIONS_MENU_H
#define OPTIONS_MENU_H

#include "gui/gui2_canvas.h"
#include "Updatable.h"

class GuiAutoLayout;
class GuiSelector;
class GuiBasicSlider;
class GuiSlider;
class GuiLabel;

class OptionsMenu : public GuiCanvas, public Updatable
{
private:
    GuiAutoLayout* left_container;
    GuiAutoLayout* right_container;
    GuiSelector* options_pager;
    GuiAutoLayout* graphics_page;
    GuiAutoLayout* audio_page;
    GuiAutoLayout* interface_page;
    GuiSlider* sound_volume_slider;
    GuiSlider* music_volume_slider;
    GuiSlider* impulse_volume_slider;
    GuiLabel* sound_volume_overlay_label;
    GuiLabel* music_volume_overlay_label;

    GuiBasicSlider* graphics_fov_slider{};
    GuiLabel* graphics_fov_overlay_label{};

    std::vector<string> hotkey_categories;
    GuiLabel* impulse_volume_overlay_label;

    void setupGraphicsOptions();
public:
    OptionsMenu();

    virtual void update(float delta) override;
};
#endif//OPTIONS_MENU_H
