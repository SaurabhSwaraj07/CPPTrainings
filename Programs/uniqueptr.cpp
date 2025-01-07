#include <iostream>
using namespace std;

#include <memory>

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area() { return length * breadth; }
};

int main()
{
    // Create a unique_ptr P1 that points to a Rectangle object
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << "Area of P1: " << P1->area() << endl; // This will print 50

    // Transfer ownership from P1 to P2 using move
    unique_ptr<Rectangle> P2 = move(P1);

    // Check if P1 is null (after move, P1 should no longer own the memory)
    if (P1 == nullptr) {
        cout << "P1 is now null. Ownership has been transferred." << endl;
    } else {
        cout << "P1 still holds the memory." << endl;
    }

    // P2 should now own the memory and you can use it
    cout << "Area of P2: " << P2->area() << endl; // This will print 50

    // P1 is now null, so accessing P1 would lead to undefined behavior:
    // cout << P1->area() << endl;  // This would be a problem!

    return 0;
}
