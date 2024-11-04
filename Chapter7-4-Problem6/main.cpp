#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;  // 책 제목
    int price;     // 책 가격
    int pages;     // 책 페이지 수
public:
    // 생성자: 기본값을 설정하여 책 제목, 가격 및 페이지 수를 초기화
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; 
        this->price = price; 
        this->pages = pages;
    }

    // 책 정보를 출력하는 메서드
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    // 책 제목을 반환하는 메서드
    string getTitle() {
        return title;
    }

    // 책 제목과 Book 객체를 비교하는 친구 함수 선언
    friend bool operator < (string title, Book op2);
};

// 책 제목과 Book 객체의 제목을 비교하는 연산자 오버로딩
bool operator < (string title, Book op2) {
    // 입력된 제목이 Book 객체의 제목보다 앞서는지 비교
    return title < op2.title; 
}

int main() {
    // 책 객체 생성 (제목: "청춘", 가격: 20000, 페이지 수: 300)
    Book a("청춘", 20000, 300);
    string b;  // 사용자 입력을 받을 문자열 변수
    
    // 사용자에게 책 이름을 입력하도록 요청
    cout << "책 이름을 입력하세요>>";
    getline(cin, b);  // 한 줄 입력 받기

    // 입력된 제목이 책 제목보다 앞서는 경우 출력
    if (b < a)
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;

    return 0; // 프로그램 종료
}

