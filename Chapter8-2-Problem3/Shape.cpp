#include <iostream>
using namespace std;

class Shape {
private:
    int x, y; // 위치 좌표

public:
    Shape(int x, int y) : x(x), y(y) {
        cout << "Shape 생성" << endl;
    }

    virtual ~Shape() {
        cout << "Shape 소멸" << endl;
    }

    void showPosition() const {
        cout << "좌표 (" << x << "," << y << ")";
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {
        cout << "Circle 생성" << endl;
    }

    ~Circle() override {
        cout << "Circle 소멸" << endl;
    }

    void show() const {
        showPosition();
        cout << "에 반지름 " << radius << "인 원" << endl;
    }
};

class Rect : public Shape {
private:
    int width, height;

public:
    Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {
        cout << "Rect 생성" << endl;
    }

    ~Rect() override {
        cout << "Rect 소멸" << endl;
    }

    void show() const {
        showPosition();
        cout << "에 폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
    }
};

class Triangle : public Shape {
private:
    int base, height;

public:
    Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {
        cout << "Triangle 생성" << endl;
    }

    ~Triangle() override {
        cout << "Triangle 소멸" << endl;
    }

    void show() const {
        showPosition();
        cout << "에 밑변 " << base << ", 높이 " << height << "인 삼각형" << endl;
    }
};

int main() {
    Circle x(0, 0, 2);
    Rect y(1, 1, 5, 10);
    Triangle z(2, 2, 5, 10);

    x.show();
    y.show();
    z.show();

    return 0;
}

