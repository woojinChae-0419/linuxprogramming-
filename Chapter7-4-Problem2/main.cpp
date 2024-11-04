#include <iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}
    friend Complex& operator++(Complex& c);  // 전위 연산자 프렌드 함수
    friend Complex operator--(Complex& c, int); // 후위 연산자 프렌드 함수
    void show() { cout << real << "+" << img << "j" << endl; }
};

Complex& operator++(Complex& c) { // 전위 연산자
    ++c.real;
    ++c.img;
    return c;
}

Complex operator--(Complex& c, int) { // 후위 연산자
    Complex temp = c;
    --c.real;
    --c.img;
    return temp;
}

int main() {
    Complex x(2, 3);
    cout << "생성된 복소수: ";
    x.show(); // 생성된 복소수 출력

    ++x;
    cout << "증가결과: ";
    x.show();
    
    x--;
    cout << "감소결과: ";
    x.show();
    
    return 0;
}
 
