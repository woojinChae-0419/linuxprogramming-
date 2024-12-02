#include <iostream>
#include <vector>

using namespace std;

// 행렬을 나타내는 클래스
class Matrix {
private:
    vector<vector<int>> data; // 2차원 벡터로 행렬 데이터를 저장

public:
    // 생성자: 주어진 행(row)과 열(column) 크기에 맞는 행렬 초기화
    Matrix(int rows, int cols) {
        data.resize(rows, vector<int>(cols, 0)); // 모든 원소를 0으로 초기화
    }

    // 특정 위치(row, col)에 값을 설정하는 함수
    void setValue(int row, int col, int value) {
        // 유효한 인덱스 범위인지 확인
        if (row >= 0 && row < data.size() && col >= 0 && col < data[0].size()) {
            data[row][col] = value; // 값 설정
        } else {
            cout << "Index out of bounds!" << endl; // 인덱스 초과 시 에러 메시지 출력
        }
    }

    // 행렬 덧셈 연산을 정의하는 함수
    Matrix operator+(const Matrix& other) const {
        int rows = data.size();      // 현재 행렬의 행(row) 크기
        int cols = data[0].size();   // 현재 행렬의 열(column) 크기

        // 두 행렬의 크기가 동일한지 확인
        if (rows != other.data.size() || cols != other.data[0].size()) {
            throw invalid_argument("행렬 크기가 일치하지 않습니다!"); // 크기 불일치 시 예외 발생
        }

        Matrix result(rows, cols); // 결과 행렬 초기화
        for (int i = 0; i < rows; ++i) { // 각 행 반복
            for (int j = 0; j < cols; ++j) { // 각 열 반복
                result.data[i][j] = data[i][j] + other.data[i][j]; // 요소별 덧셈 수행
            }
        }
        return result; // 결과 행렬 반환
    }

    // 행렬의 내용을 출력하는 함수
    void print() const {
        for (const auto& row : data) {    // 각 행에 대해
            for (const auto& val : row) { // 각 열의 값을 출력
                cout << val << " ";
            }
            cout << endl; // 행이 끝나면 개행
        }
    }
};

int main() {
    // 첫 번째 행렬(mat1) 초기화
    Matrix mat1(2, 2); // 2x2 크기의 행렬 생성
    mat1.setValue(0, 0, 2);  // (0, 0) 위치에 2 설정
    mat1.setValue(0, 1, 4);  // (0, 1) 위치에 4 설정
    mat1.setValue(1, 0, 5);  // (1, 0) 위치에 5 설정
    mat1.setValue(1, 1, -5); // (1, 1) 위치에 -5 설정

    // 두 번째 행렬(mat2) 초기화
    Matrix mat2(2, 2); // 2x2 크기의 행렬 생성
    mat2.setValue(0, 0, -2); // (0, 0) 위치에 -2 설정
    mat2.setValue(0, 1, 3);  // (0, 1) 위치에 3 설정
    mat2.setValue(1, 0, 0);  // (1, 0) 위치에 0 설정
    mat2.setValue(1, 1, -5); // (1, 1) 위치에 -5 설정

    // 두 행렬(mat1, mat2)의 덧셈 연산
    Matrix result = mat1 + mat2; // 결과를 result에 저장

    // 결과 행렬 출력
    cout << "결과 행렬:" << endl;
    result.print(); // 결과 행렬 내용 출력

    return 0; // 프로그램 정상 종료
}
