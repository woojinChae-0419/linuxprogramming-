#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
private:
    double real; // 실수부
    double img;  // 허수부

public:
    Complex(double r = 0, double i = 0) : real(r), img(i) {}

    void show() const;

    double getReal() const { return real; }
    double getImg() const { return img; }
};

class ComplexManager {
public:
    Complex ComplexAdd(const Complex& c1, const Complex& c2);
};

#endif

