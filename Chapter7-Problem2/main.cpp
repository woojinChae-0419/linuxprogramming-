#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
    Complex x(2, 3), y(-5, 10), sum; // 복소수 객체 생성
    ComplexManager man; // 매니저 객체 생성
    sum = man.ComplexAdd(x, y); // 복소수 합산
    cout << "두 복소수의 합은 ";
    sum.show(); // 결과 출력
    return 0;
}

