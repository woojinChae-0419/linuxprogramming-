#include <iostream>
using namespace std;

class Power {
    int kick, punch;
public:
    Power(int k = 0, int p = 0) : kick(k), punch(p) {}
    friend Power operator*(int n, Power p); // 곱셈 연산자 프렌드 함수
    void show() { cout << "kick=" << kick << ", punch=" << punch << endl; }
};

Power operator*(int n, Power p) {
    p.kick *= n;
    p.punch *= n;
    return p;
}

int main() {
    Power a(3, 5), b; // b는 기본값으로 초기화됨 (kick=0, punch=0)
    a.show(); // a의 현재 상태 출력 (kick=3, punch=5)
    b.show(); // b의 현재 상태 출력 (kick=0, punch=0)
    b = 2 * a; // b를 2배로 초기화
    a.show(); // a의 상태 출력 (kick=3, punch=5)
    b.show(); // b의 상태 출력 (kick=6, punch=10)
    
    return 0;
}

