#include <iostream>
using namespace std;

// 템플릿 클래스 정의
template <typename T>
class Container {
private:
    T* data;
    int size;

public:
    // 생성자
    Container(int s) : size(s) {
        data = new T[size];
    }

    // 소멸자
    ~Container() {
        delete[] data;
    }

    // 데이터 설정 함수
    void set(int index, T value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    // 데이터 가져오기 함수
    T get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return T(); // 기본값 반환
    }
};

int main() {
    Container<char> c(26); // 26개의 문자 저장 가능한 컨테이너 생성

    for (int i = 0; i < 26; i++) {
        c.set(i, 'a' + i); // 알파벳 소문자 저장
    }

    for (int i = 25; i >= 0; i--) {
        cout << c.get(i); // 저장된 문자를 역순으로 출력
    }

    cout << endl;
    return 0;
}
