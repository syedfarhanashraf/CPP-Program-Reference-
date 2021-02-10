#include <cassert>

class Point{
    public:
        Point(int x  = 0, int y = 0): x(x), y(y){}
        Point operator+(const Point &op){
            Point sum;
            sum.x = this->x + op.x;
            sum.y = this->y + op.y;
            return sum;        
            }
        int x;
        int y;
};

// Test in main()
int main() {
  Point p1(10, 5), p2(2, 4);
  Point p3 = p1 + p2; // An example call to "operator +";
  assert(p3.x == p1.x + p2.x);
  assert(p3.y == p1.y + p2.y);
}