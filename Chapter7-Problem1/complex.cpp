#include <iostream>
using namespace std;

class Complex {
private:
    double real; // 실수부
    double img;  // 허수부

public:
    // 생성자
    Complex(double r = 0, double i = 0) : real(r), img(i) {}

    // show 함수
    void show() const {
        cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
    }

    // 전역함수: 복소수 합
    friend Complex ComplexAdd(const Complex& c1, const Complex& c2) {
        return Complex(c1.real + c2.real, c1.img + c2.img);
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = ComplexAdd(x, y);
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}

