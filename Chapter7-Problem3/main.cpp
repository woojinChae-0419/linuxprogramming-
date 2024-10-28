#include <iostream>
#include "Complex.h"
#include "ComplexManager.h"

using namespace std;

int main() {
    Complex x(5, 5), y(2, 2), sum, sub; // 복소수 생성
    ComplexManager man; // ComplexManager 객체 생성
    sum = man.ComplexAdd(x, y); // 두 복소수의 합
    cout << "두 복소수의 합은 ";
    sum.show(); // 합 출력
    sub = man.ComplexSub(x, y); // 두 복소수의 차
    cout << "두 복소수의 차는 ";
    sub.show(); // 차 출력
    return 0;
}
