#include <iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    Complex& operator++() { // 전위 증가 연산자
        ++real;
        ++img;
        return *this;
    }

    Complex operator--(int) { // 후위 감소 연산자
        Complex temp = *this;
        --real;
        --img;
        return temp;
    }

    void show() { cout << real << "+" << img << "j" << endl; }
};

int main() {
    Complex x(2, 3);  // 복소수 객체 생성 시 초기 값 출력
    ++x;
    cout << "증가결과: ";
    x.show();
    x--;
    cout << "감소결과: ";
    x.show();
    return 0;
}

