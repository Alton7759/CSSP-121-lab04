// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/21/23
// Alton77@csu.fullerton.edu
// Alton7759
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "rectangle.h"

int main() {
  Rectangle rone{};
  Rectangle rtwo{};
  int holder_l = 0;
  int holder_w = 0;
  std::cout << "====== Rectangle 1 ======" << std::endl;
  std::cout << "please enter the length: ";
  std::cin >> holder_l;
  rone.SetLength(holder_l);
  std::cout << "please enter the width: ";
  std::cin >> holder_w;
  rone.SetWidth(holder_w);
  std::cout << "Rectangle 1 created with length " << rone.GetLength()
            << " and width " << rone.GetWidth() << std::endl;
  std::cout << "The area of Rectangle 1 is: " << rone.Area() << std::endl;
  std::cout << "The perimeter of Rectangle 1 is: " << rone.Perimeter()
            << std::endl;
  holder_l = 0;
  holder_w = 0;
  std::cout << "====== Rectangle 2 ======" << std::endl;
  std::cout << "please enter the length: ";
  std::cin >> holder_l;
  rtwo.SetLength(holder_l);
  std::cout << "please enter the width: ";
  std::cin >> holder_w;
  rtwo.SetWidth(holder_w);
  std::cout << "Rectangle 2 created with length " << rtwo.GetLength()
            << " and width " << rtwo.GetWidth() << std::endl;
  std::cout << "The area of Rectangle 2 is: " << rtwo.Area() << std::endl;
  std::cout << "The perimeter of Rectangle 2 is: " << rtwo.Perimeter()
            << std::endl;

  Rectangle big = LargestRectangleByArea(rone, rtwo);
  std::cout << "The largest rectangle has a length of " << big.GetLength()
            << ", a width of " << big.GetWidth() << ", and an area of "
            << big.Area() << "." << std::endl;
  return 0;
}
