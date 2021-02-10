#include <assert.h>
#include <cmath>

// TODO: Define PI
#define PI 3.14159

// TODO: Declare abstract class VehicleModel
  // TODO: Declare virtual function Move()
class VehicleModel{
    public:
        virtual void Move(double, double) = 0;
};
// TODO: Derive class ParticleModel from VehicleModel
  // TODO: Override the Move() function
  // TODO: Define x, y, and theta
class ParticleModel: public VehicleModel{
    public:
        void Move(double v,double theta) override{
            theta += PI;
            x += v * cos(theta);
            y += v * cos(theta);
        }
        float x;
        float y;
        float theta;
};
// TODO: Derive class BicycleModel from ParticleModel
  // TODO: Override the Move() function
  // TODO: Define L
class BicycleModel: public ParticleModel{
    public:
        void Move(double v, double theta) override{
            theta += v / L * tan(PI);
            x += v * cos(theta);
            y += v * cos(theta);
        }
        double L;
};

// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}