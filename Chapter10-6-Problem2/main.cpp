#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 3명의 학생과 각 3과목(국어, 영어, 수학)의 점수를 저장하는 2차원 벡터
    vector<vector<int>> scores(3, vector<int>(3)); 
    vector<double> averages(3); // 각 학생의 평균 점수를 저장할 벡터

    // 학생들의 성적 입력
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; ++j) {
            cin >> scores[i][j]; // 학생별로 3과목의 점수를 입력받아 저장
        }
    }

    // 최우수 학생을 찾기 위한 변수 초기화
    int bestStudent = 0; // 최우수 학생의 인덱스 (0부터 시작)
    double highestAverage = 0.0; // 최고 평균 점수를 저장

    // 각 학생의 평균 점수를 계산하고 최우수 학생 확인
    for (int i = 0; i < 3; ++i) {
        double sum = 0.0; // 학생별 점수 합산을 위한 변수
        for (int j = 0; j < 3; ++j) {
            sum += scores[i][j]; // 각 과목 점수를 더함
        }
        averages[i] = sum / 3.0; // 평균 계산 후 저장

        // 최고 평균 점수를 가진 학생을 갱신
        if (averages[i] > highestAverage) {
            highestAverage = averages[i]; // 최고 평균 점수 업데이트
            bestStudent = i; // 해당 학생의 인덱스 저장
        }
    }

    // 최우수 학생과 그의 평균 점수 출력
    cout << "최우수 학생은 " << bestStudent + 1 << "번째 학생이고 평균점수는 " 
         << highestAverage << "점이다." << endl;

    return 0; // 프로그램 종료
}
