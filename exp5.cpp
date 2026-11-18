#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;

public:
    Circle(double r) : r(r) {}

    void area() override {
        cout << "Area Circle = "
             << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    double l, w;

public:
    Rectangle(double l, double w)
        : l(l), w(w) {}

    void area() override {
        cout << "Area Rectangle = "
             << l * w << endl;
    }
};

class Triangle : public Shape {
    double b, h;

public:
    Triangle(double b, double h)
        : b(b), h(h) {}

    void area() override {
        cout << "Area Triangle = "
             << 0.5 * b * h << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4,6);
    Shape* s3 = new Triangle(10,8);

    s1->area();
    s2->area();
    s3->area();

    delete s1;
    delete s2;
    delete s3;
}
