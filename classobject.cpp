#include <iostream>
using namespace std;

class Room
{
private:
    int length;
    int breadth;

public:
    Room(int l, int b) : length(l), breadth(b) {}

    int calculateArea() const
    {
        return length * breadth;
    }
};

int main()
{
    Room R1(10, 20);
    cout << R1.calculateArea();
    return 0;
}
