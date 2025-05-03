#include <iostream>
using namespace std;


class Shape {
public:
    virtual void draw() = 0; 
    virtual ~Shape() {} 
};


class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};


class Rectangle : public Shape {
public:
    void draw()  {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Circle CIRCLE;
    Shape* shape1 =  &CIRCLE;
    Shape* shape2 =  new Rectangle(); // Create a new Rectangle object same as writing: Rectangle RECTANGLE; Shape* shape2 = &RECTANGLE;

    shape1->draw();
    shape2->draw();

    delete shape2;

    return 0;
}
