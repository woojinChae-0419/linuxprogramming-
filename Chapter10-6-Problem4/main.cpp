#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> data; // 2차원 벡터로 행렬 데이터를 저장

public:
    // 생성자: 행렬 크기 설정 및 초기화
    // 주어진 rows와 cols 값을 바탕으로 행렬 크기를 설정하고, 각 원소를 0으로 초기화
    Matrix(int rows, int cols) {
        data.resize(rows, vector<int>(cols, 0)); // rows x cols 크기의 행렬 생성
    }

    // 값 설정 함수: 행렬의 특정 위치(row, col)에 값을 설정
    void setValue(int row, int col, int value) {
        if (row >= 0 && row < data.size() && col >= 0 && col < data[0].size()) {
            data[row][col] = value;  // 주어진 위치에 value를 설정
        } else {
            cout << "Index out of bounds!" << endl;  // 인덱스 범위가 벗어나면 오류 출력
        }
    }

    // 행렬 값을 수정하는 함수: 음수는 0으로, 양수는 255로 수정
    void modifyValues() {
        // 행렬의 모든 원소에 대해 검사
        for (int i = 0; i < data.size(); ++i) {
            for (int j = 0; j < data[i].size(); ++j) {
                if (data[i][j] < 0) {
                    data[i][j] = 0;  // 음수는 0으로 수정
                } else if (data[i][j] > 0) {
                    data[i][j] = 255; // 양수는 255로 수정
                }
                // 0은 그대로 둠
            }
        }
    }

    // 행렬 출력 함수: 행렬의 모든 원소를 출력
    void print() const {
        for (const auto& row : data) {  // 각 행을 순회
            for (const auto& val : row) {  // 각 원소를 출력
                cout << val << " ";
            }
            cout << endl;  // 한 행 출력 후 줄 바꿈
        }
    }
};

int main() {
    // 3x3 행렬 초기화 (크기 3x3으로 설정)
    Matrix mat(3, 3);
    
    // 첫 번째 행에 값 설정 (첫 번째 원소는 음수, 나머지 양수로 설정)
    mat.setValue(0, 0, -2);  // (0, 0) 위치에 -2 설정 (결과적으로 0)
    mat.setValue(0, 1, 3);   // (0, 1) 위치에 3 설정 (결과적으로 255)
    mat.setValue(0, 2, 6);   // (0, 2) 위치에 6 설정 (결과적으로 255)
    
    // 두 번째 행에 값 설정
    mat.setValue(1, 0, -5);  // (1, 0) 위치에 -5 설정 (결과적으로 0)
    mat.setValue(1, 1, 3);   // (1, 1) 위치에 3 설정 (결과적으로 255)
    mat.setValue(1, 2, 6);   // (1, 2) 위치에 6 설정 (결과적으로 255)
    
    // 세 번째 행에 값 설정
    mat.setValue(2, 0, -7);  // (2, 0) 위치에 -7 설정 (결과적으로 0)
    mat.setValue(2, 1, 2);   // (2, 1) 위치에 2 설정 (결과적으로 255)
    mat.setValue(2, 2, -9);  // (2, 2) 위치에 -9 설정 (결과적으로 0)

    // 행렬 값 수정
    mat.modifyValues(); // 행렬의 모든 원소 수정: 음수는 0으로, 양수는 255로 수정

    // 수정된 행렬 출력
    cout << "수정된 행렬:" << endl;
    mat.print(); // 수정된 행렬 출력

    return 0; // 프로그램 종료
}
