#include <iostream>
#include <vector>
#include <list>
#include <memory>

using namespace std;

class Point{
public:
  Point(int x, int y) : x(x), y(y) {}
  int x;
  int y;
};

class Shape {
public:
  virtual Point center() const = 0; // pure virtual.
  virtual void move(Point to) = 0;
  virtual void draw() const = 0; // draw on current "Canvas".
  virtual void rotate(int angle) = 0;  
  virtual ~Shape() {} // destructor.
};

class Circle : public Shape {
public:
  Circle(Point p, int rad); // constructor.

  ~Circle();
  
  Point center() const override {
    return p;
  }

  void move(Point to) override;

  void draw() const override;
  void rotate(int) override; // nice simple algorithm.
protected:
  Point p; // center
  int r;   // radius
};

class Triangle : public Shape {
public:
  Triangle(Point p, int side); // constructor.

  ~Triangle();
  
  Point center() const override {
    return p;
  }

  void move(Point to) override;

  void draw() const override;
  void rotate(int) override; // nice simple algorithm.
private:
  Point p; // center
  int s;   // side
};

class Smiley : public Circle {
public:
  Smiley(Point p, int rad);       // constructor.
  
  ~Smiley();                      // destructor
  
  void move(Point to) override;

  void draw() const override;
  void rotate(int) override;
private:
  unique_ptr<Shape> mouth;
};
