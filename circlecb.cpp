#include <iostream>
using namespace std;

class Circle
{
    private:
             double radius;

    public:
            Circle(double r) : radius(r) {}

    double calculateArea() const{
        return 3.14159 * radius * radius;
    }

    double getRadius() const{
        return radius;
    }

    void setRadius(double r)
    {
        radius= r;
    }
};

int main(){

    Circle c1(9);

    cout << "Radius of the circle: "<<c1.getRadius() << endl;
    cout << "Area of Circle: "<<c1.calculateArea() << endl;

    c1.setRadius(6);
    cout << "Updated Radius of Circle: " << c1.getRadius() <<endl;
    cout << "Updated Area of Circle: " << c1.calculateArea() <<endl;

    return 0;
}