// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/21/23
// Alton77@csu.fullerton.edu
// Alton7759
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "rectangle.h"

#include <iostream>

unsigned int Rectangle::Area() const {
  return length_ * width_;
}

unsigned int Rectangle::Perimeter() const {
  return 2 * (length_ + width_);
}

Rectangle LargestRectangleByArea(Rectangle &r1, Rectangle &r2) {
  if (r1.Area() > r2.Area()) {
    return r1;
  }
    return r2;
  
}
