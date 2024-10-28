#include <iostream>
#include "Complex.h"

using namespace std;

void Complex::show() {
    cout << real << (img >= 0 ? "+" : "") << img << "j" << endl; // 복소수 출력
}

// 복소수 합 연산자 정의
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.img + b.img);
}

// 복소수 차 연산자 정의
Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.img - b.img);
}

