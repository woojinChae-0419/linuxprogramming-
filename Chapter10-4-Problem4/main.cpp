#include <iostream>
#include <vector>
#include <algorithm>  // max_element 함수 사용을 위한 헤더
using namespace std;

// Student 클래스 정의
class Student {
private:
    string name;  // 학생의 이름
    int score;    // 학생의 점수

public:
    // 생성자: 이름과 점수를 초기화
    Student(string n, int s) : name(n), score(s) {}

    // 이름과 점수를 반환하는 getter 함수
    string getName() const { return name; }
    int getScore() const { return score; }

    // < 연산자 오버로드: 점수 비교
    bool operator<(const Student& other) const {
        return score < other.score;  // 점수가 더 작은 경우 true 반환
    }
};

// 주어진 벡터에서 점수가 가장 높은 학생을 찾는 함수
void findMaxScoreStudent(const vector<Student>& students) {
    // max_element를 이용하여 벡터에서 최대 점수를 가진 학생을 찾음
    auto maxStudent = *max_element(students.begin(), students.end());

    // 결과 출력
    cout << "최우수학생은" << endl;
    cout << "이름: " << maxStudent.getName() << endl;
    cout << "성적: " << maxStudent.getScore() << "점" << endl;
}

int main() {
    vector<Student> students;  // 학생 정보를 저장할 벡터
    string name;
    int score;

    // 학생 정보를 입력받아 벡터에 추가
    for (int i = 0; i < 3; i++) {
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;  // 이름과 성적을 입력받음
        students.push_back(Student(name, score));  // 학생 정보를 벡터에 추가
    }

    // 최고 점수를 받은 학생 찾기
    findMaxScoreStudent(students);

    return 0;
}
