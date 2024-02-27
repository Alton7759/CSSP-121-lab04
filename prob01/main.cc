// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/21/23
// Alton77@csu.fullerton.edu
// Alton7759
//
// Lab 4-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
#include <iostream>

#include "bubble.h"
#include "cpputils/graphics/image.h"

int main() {
  // Prompts the user for input to create the Bubble image.
  std::cout << "Tell me about your bubble.\n"
            << "Valid x, y and size are between 0 and 500.\n"
            << "Valid colors are red, orange, yellow, green, "
            << "teal, blue, and purple." << std::endl;

  std::string color;
  std::cout << "What color? ";
  std::cin >> color;

  int size = 0;
  std::cout << "What size? ";
  std::cin >> size;

  int x = 0;
  std::cout << "What x? ";
  std::cin >> x;

  int y = 0;
  std::cout << "What y? ";
  std::cin >> y;

  // ========================== YOUR CODE HERE =============================
  // Instantiate a `Bubble` object into a variable called `my_bubble`.
  // Then, use the member functions to set color, size, and x, y coordinates
  // based on the user provided input retrieved above.
  Bubble my_bubble;
  my_bubble.SetColor(color);
  my_bubble.SetSize(size);
  my_bubble.SetX(x);
  my_bubble.SetY(y);
  // =======================================================================

  // Don't delete this!
  // This prints out your bubble to the terminal and also
  // draws it into an image you can view in "bubble.bmp".
  const int image_size = 500;
  graphics::Image image(image_size, image_size);
  if (image.DrawCircle(my_bubble.GetX(), my_bubble.GetY(), my_bubble.GetSize(),
                       my_bubble.GetColor()) &&
      image.SaveImageBmp("bubble.bmp")) {
    std::cout << my_bubble.ToString() << std::endl;
    std::cout << "Your bubble was saved to bubble.bmp" << std::endl;
  }
  return 0;
}
