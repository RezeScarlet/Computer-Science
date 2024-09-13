#include <Rectangle.hpp>
#include <raylib-cpp.hpp>
#include <vector>
#define RAYGUI_IMPLEMENTATION
#include "../include/raygui.h"

class Forma {
private:
  raylib::Vector2 pos;
  raylib::Vector2 size;

public:
  Forma(raylib::Vector2 pos, raylib::Vector2 size) : pos(pos), size(size) {}
  void SetPos(raylib::Vector2 newPos) { this->pos = newPos; }
  void Setsize(raylib::Vector2 newSize) { this->size = newSize; }
  raylib::Vector2 GetSize() { return size; }
  raylib::Vector2 GetPos() { return pos; }
};

static void rectButton();
static void elliButton();
static void lineButton();

int main() {

  SetConfigFlags(FLAG_MSAA_4X_HINT);
  raylib::Window window(854, 480);
  SetTargetFPS(60);

  float h = window.GetHeight();
  float w = window.GetWidth();

  bool lineButtonPressed = false;
  bool rectButtonPressed = false;
  bool elliButtonPressed = false;

  std::vector<Forma> linha;
  raylib::Vector2 mouseClick(0, 0);
  raylib::Vector2 mouseRelease(0, 0);
  Forma quadrado(raylib::Vector2::Zero(), {w, h / 4});

  raylib::Rectangle guiGroupRect(8, 8, w - 16, 34);

  while (WindowShouldClose() == false) {

    BeginDrawing();

    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

    if (raylib::Mouse::IsButtonPressed(0)) {
      mouseClick.SetX(raylib::Mouse::GetX());
      mouseClick.SetY(raylib::Mouse::GetY());
    }
    if (IsMouseButtonDown(0)) {
      mouseRelease.x = GetMouseX();
      mouseRelease.y = GetMouseY();
    }
    if (IsMouseButtonReleased(0)) {
      Forma linhaTemp(mouseClick, mouseRelease);
      linha.push_back(linhaTemp);
    }
    DrawLineV(mouseClick, mouseRelease, raylib::Color::Black());
    for (Forma x : linha) {

      DrawLineV(x.GetPos(), x.GetSize(), raylib::Color::Black());
    }

    GuiGroupBox(guiGroupRect, "CONTROLS");
    lineButtonPressed = GuiButton((Rectangle){13, 13, 120, 24}, "LINHA");
    rectButtonPressed = GuiButton((Rectangle){137, 13, 120, 24}, "RETANGULO");
    elliButtonPressed = GuiButton((Rectangle){260, 13, 120, 24}, "ELIPSE");

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
static void rectButton() {
  // TODO: Implement control logic
}
static void elliButton() {
  // TODO: Implement control logic
}
static void lineButton() {
  // TODO: Implement control logic
}
