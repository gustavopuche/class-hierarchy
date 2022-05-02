#include "shapes.h"

using namespace std;

void rotate_all(vector<unique_ptr<Shape>> &v,
                int angle) // rotate v's elements by angle degrees.
{
  for (auto& p : v) // Needed & to avoid copy operation with unique_ptr that are deleted.
    p->rotate(angle);
}

////////////////////////////////////////////////////////////////////////////////
//
// MAIN FUNCTION
//
////////////////////////////////////////////////////////////////////////////////
int main()
{
  vector<unique_ptr<Shape>> v;
  
  v.push_back(make_unique<Circle>(Point(0,0),1));
  v.push_back(make_unique<Triangle>(Point(2,10),2));
  v.push_back(make_unique<Smiley>(Point(10,25),5));

  rotate_all(v,50);
  
  return 0;
}
