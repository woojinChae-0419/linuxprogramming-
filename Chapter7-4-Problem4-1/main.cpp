#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int cost, pageCount;  // 변수 이름을 변경했습니다.
public:
    Book(string title = "", int cost = 0, int pageCount = 0) {  // 생성자 매개변수 변경
        this->title = title; 
        this->cost = cost; 
        this->pageCount = pageCount;  // 변수 이름 변경
    }

    void show() {
        cout << title << ' ' << cost << "원 " << pageCount << " 페이지" << endl;  // 출력 형식 유지
    }

    string getTitle() { return title; }
    
    // 연산자 오버로딩
    bool operator==(int cost);
    bool operator==(string title);
    bool operator==(Book op2);
};

bool Book::operator==(int cost) {
    return this->cost == cost;  // 가격 비교
}

bool Book::operator==(string title) {
    return this->title == title;  // 제목 비교
}

bool Book::operator==(Book op2) {
    return (this->title == op2.title && this->cost == op2.cost && this->pageCount == op2.pageCount);  // 모든 속성 비교
}

int main() {
    Book a("명품 C++", 30000, 300), b("고품 C++", 30000, 500);
    
    if (a == 30000) cout << "정가 30000원" << endl;
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    if (a == b) cout << "두 책이 같은 책입니다." << endl;

    return 0;
}

