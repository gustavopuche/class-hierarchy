#include "shapes.h"

Circle::Circle(Point p, int rad) : p(p), r(rad) {}

void Circle::move(Point to) {
  cout << "Move circle from (" << p.x << "," << p.y << ")"
       << " to (" << to.x << "," << to.y << ")" << endl;
}

void Circle::draw() const {
  cout << "Draw circle at (" << p.x << "," << p.y << ")" << endl;
}

void Circle::rotate(int r) {
  cout << "Rotate circle at (" << p.x << "," << p.y << ") angle:" << r << endl;
}

Circle::~Circle() {
  cout << "Destroying Circle..." << endl;
}

Triangle::Triangle(Point p, int side) : p(p), s(side) {}

void Triangle::move(Point to) {
  cout << "Move triangle from (" << p.x << "," << p.y << ")"
       << " to (" << to.x << "," << to.y << ")" << endl;
}

void Triangle::draw() const {
  cout << "Draw triangle at (" << p.x << "," << p.y << ")" << endl;
}

void Triangle::rotate(int r) {
  cout << "Rotate triangle at (" << p.x << "," << p.y << ") angle:" << r << endl;
}

Triangle::~Triangle() {
  cout << "Destroying Triangle..." << endl;
}

Smiley::Smiley(Point p, int rad) : Circle(p,rad) {}

Smiley::~Smiley() {
  cout << "Destroying Smiley..." << endl;
}

void Smiley::move(Point to) {
  cout << "Move Smiley from (" << p.x << "," << p.y << ")"
       << " to (" << to.x << "," << to.y << ")" << endl;
}

void Smiley::draw() const {
  cout << "Draw Smiley at (" << p.x << "," << p.y << ")" << endl;
}

void Smiley::rotate(int r) {
  cout << "Rotate Smiley at (" << p.x << "," << p.y << ") angle:" << r << endl;
}

