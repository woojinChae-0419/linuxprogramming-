#include <iostream>  // 표준 입출력 사용
#include <vector>    // 벡터 자료구조 사용
#include <algorithm> // 정렬과 최대/최소값 탐색 함수 사용

using namespace std; // std 네임스페이스를 사용하여 std:: 생략

int main() {
    // 정수를 저장할 벡터 생성 (크기 4로 초기화)
    vector<int> numbers(4);

    cout << "정수 4개를 입력하시오: ";

    // 사용자로부터 정수 입력 받기
    for (int i = 0; i < 4; ++i) {
        cin >> numbers[i];
    }

    // 벡터에서 최대값과 최소값 찾기
    // max_element: 벡터의 최대값이 위치한 반복자 반환
    // min_element: 벡터의 최소값이 위치한 반복자 반환
    auto max_it = max_element(numbers.begin(), numbers.end());
    auto min_it = min_element(numbers.begin(), numbers.end());

    // 최대값과 최소값 출력
    // max_it - numbers.begin(): 최대값의 인덱스 계산 (0-based)
    // +1: 1-based 인덱스 출력
    cout << "최대값은 " << (max_it - numbers.begin() + 1) << "번째 값 " << *max_it << endl;
    cout << "최소값은 " << (min_it - numbers.begin() + 1) << "번째 값 " << *min_it << endl;

    // 벡터를 오름차순으로 정렬
    sort(numbers.begin(), numbers.end());

    // 오름차순 결과 출력
    cout << "오름차순 결과는 ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i != numbers.size() - 1) cout << ", "; // 마지막 원소 뒤에는 쉼표 생략
    }
    cout << endl;

    // 벡터를 내림차순으로 정렬
    // rbegin(): 벡터의 역순 반복자 시작점
    // rend(): 벡터의 역순 반복자 끝점
    sort(numbers.rbegin(), numbers.rend());

    // 내림차순 결과 출력
    cout << "내림차순 결과는 ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i != numbers.size() - 1) cout << ", "; // 마지막 원소 뒤에는 쉼표 생략
    }
    cout << endl;

    return 0; // 프로그램 정상 종료
}
