#include <iostream>
#include <vector>
#include <limits> // numeric_limits를 사용하여 최소값 설정

using namespace std;

int main() {
    // 주어진 3x3 행렬을 2차원 벡터로 선언
    // 행렬의 크기는 3x3이고 각 원소는 이미 주어진 값을 사용
    vector<vector<int>> matrix = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    // 최대값을 구할 변수, 초기값은 int형에서 가능한 가장 작은 값으로 설정
    // 이 값을 사용하여 첫 번째 원소부터 비교하면서 최대값을 찾아냄
    int maxVal = numeric_limits<int>::min(); // int형에서 가능한 가장 작은 값으로 초기화
    int maxRow = 0, maxCol = 0; // 최대값의 위치를 저장할 변수 (행, 열)

    // 행렬을 순회하며 최대값을 찾고 그 위치를 기록
    // matrix.size()는 행렬의 행 수(3), matrix[i].size()는 각 행의 열 수(3)이다.
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            // 현재 원소가 maxVal보다 크다면, 새로운 최대값으로 갱신
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];  // 최대값 갱신
                maxRow = i;             // 최대값의 행 인덱스 저장
                maxCol = j;             // 최대값의 열 인덱스 저장
            }
        }
    }

    // 최대값과 그 위치를 출력
    // 출력시 1-based index로 변환하기 위해 +1을 추가
    cout << "최대값은 " << maxVal << endl; // 최대값 출력
    cout << "위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열입니다." << endl; // 1-based index로 위치 출력

    return 0; // 프로그램 종료
}
