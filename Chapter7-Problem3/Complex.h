#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real; // 실수부
    double img;  // 허수부

public:
    Complex(double r = 0, double i = 0) : real(r), img(i) {} // 생성자
    void show(); // 복소수 출력 함수
    friend Complex operator+(const Complex& a, const Complex& b); // 복소수 합 연산자
    friend Complex operator-(const Complex& a, const Complex& b); // 복소수 차 연산자
};

#endif

