class Rectangle {
 public:
  // Setter functions of the Rectangle class.
  void SetLength(unsigned int length) {
    length_ = length;
  }
  void SetWidth(unsigned int width) {
    width_ = width;
  }

  // Getter functions of the Rectangle class.
  unsigned int GetLength() const {
    return length_;
  }
  unsigned int GetWidth() const {
    return width_;
  }

  // Other member functions of the Rectangle class.
  unsigned int Area() const;
  unsigned int Perimeter() const;

 private:
  // Member variables of the Rectangle class.
  unsigned int length_;
  unsigned int width_;
};

Rectangle LargestRectangleByArea(Rectangle &r1, Rectangle &r2);
