#include <iostream>
#include "complex.hpp"
using namespace std;

void Complex::show() const {
    cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
}

Complex ComplexManager::ComplexAdd(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() + c2.getReal(), c1.getImg() + c2.getImg());
}

