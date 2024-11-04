#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int cost, numPages;  // 변수 이름을 변경했습니다.
public:
    Book(string title = "", int cost = 0, int numPages = 0) {  // 생성자 매개변수 변경
        this->title = title; 
        this->cost = cost; 
        this->numPages = numPages;  // 변수 이름 변경
    }

    void display() {  // show()를 display()로 이름 변경
        cout << title << ' ' << cost << "원 " << numPages << " 페이지" << endl;  // 출력 형식 유지
    }

    string getTitle() { return title; }
    
    // 연산자 오버로딩
    friend bool operator==(const Book& op1, int cost);  // 매개변수 타입 변경
    friend bool operator==(const Book& op1, const string& title);  // 매개변수 타입 변경
    friend bool operator==(const Book& op1, const Book& op2);  // 매개변수 타입 변경
};

bool operator==(const Book& op1, int cost) {
    return op1.cost == cost;  // 가격 비교
}

bool operator==(const Book& op1, const string& title) {
    return op1.title == title;  // 제목 비교
}

bool operator==(const Book& op1, const Book& op2) {
    return (op1.title == op2.title && op1.cost == op2.cost && op1.numPages == op2.numPages);  // 모든 속성 비교
}

int main() {
    Book book1("명품 C++", 30000, 300), book2("고품 C++", 30000, 500);  // 변수 이름 변경
    
    if (book1 == 30000) cout << "정가 30000원" << endl;  // 조건문 유지
    if (book1 == "명품 C++") cout << "명품 C++ 입니다." << endl;  // 조건문 유지
    if (book1 == book2) cout << "두 책이 같은 책입니다." << endl;  // 조건문 유지
    
    return 0;
}

