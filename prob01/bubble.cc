#include "bubble.h"

#include <map>
#include <string>

void Bubble::SetX(int x) {
  x_ = x;
}

void Bubble::SetY(int y) {
  y_ = y;
}

void Bubble::SetSize(int size) {
  size_ = size;
}

graphics::Color Bubble::GetColor() const {
  return color_;
}

int Bubble::GetX() const {
  return x_;
}

int Bubble::GetY() const {
  return y_;
}

int Bubble::GetSize() const {
  return size_;
}

void Bubble::SetColor(const std::string& color) {
  const int max_channel = 255;
  const int half_channel = 125;

  // Create a map from strings to graphics::Color.
  std::map<std::string, graphics::Color> colors;
  colors["red"] = graphics::Color(max_channel, 0, 0);
  colors["orange"] = graphics::Color(max_channel, half_channel, 0);
  colors["yellow"] = graphics::Color(max_channel, max_channel, 0);
  colors["green"] = graphics::Color(0, max_channel, 0);
  colors["teal"] = graphics::Color(0, max_channel, max_channel);
  colors["blue"] = graphics::Color(0, 0, max_channel);
  colors["purple"] = graphics::Color(half_channel, 0, max_channel);

  if (colors.find(color) == colors.end()) {
    // Invalid color was passed in. Default to black.
    std::cout << "Invalid color: " << color << ". Defaulting to black."
              << std::endl;
    color_ = graphics::Color(0, 0, 0);
  } else {
    color_ = colors[color];
  }
}

std::string Bubble::ToString() const {
  return "Bubble at (" + std::to_string(x_) + ", " + std::to_string(y_) +
         ") with size " + std::to_string(size_);
}
