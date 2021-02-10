
    // Create a class: Pyramid.
    // Create 3 attributes: length, width, and height.
    // Create a constructor to initialize all the attributes.
    // Create accessor and mutator functions for all attributes.
    // Think about the appropriate invariants and enforce them by throwing exceptions.
    // Create a member function to calculate the volume of the pyramid.
    // Optional: create a member function to calculate the surface area of the pyramid.


#include <cassert>
#include <stdexcept>

class Pyramid{
    private:
        int length_{};
        int width_{};
        int height_{};
    
    public:
        Pyramid(int l, int w, int h){
            Length(l);
            Width(w);
            Height(h);
        }

        void Length(int l){
            if(l >= 0) length_ = l;
            else
                throw std::invalid_argument("Invalid \n");
        }
        void Width(int w){
            if(w >= 0) width_ = w;
            else
               throw std::invalid_argument("Invalid \n");
        }
        void Height(int h){
            if(h >= 0) height_ = h;
            else
            {
                throw std::invalid_argument("Invalid \n");
            }
            
        }

        int Length() const {return length_;}
        int Width() const {return width_;}
        int Height() const {return height_;}

        double Volume(){
            return (Length() * Width() * Height()) / 3;
        }
};


int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}