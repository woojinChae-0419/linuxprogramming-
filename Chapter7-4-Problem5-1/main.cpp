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

    // 가격이 0 이하인지 확인하는 연산자 오버로딩
    bool operator ! () {
        // 가격이 0 이하이면 true를 반환, 그렇지 않으면 false
        return this->price <= 0; 
    }
};

int main() {
    // 책 객체 생성 (제목: "벼룩시장", 가격: 0, 페이지 수: 50)
    Book book("벼룩시장", 0, 50);
    
    // 책 가격이 0 이하인 경우 "공짜다" 출력
    if (!book) cout << "공짜다" << endl;

    return 0; // 프로그램 종료
}

