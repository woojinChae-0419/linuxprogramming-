#include <iostream>
#include <vector>
#include <algorithm>  // sort 함수 사용을 위한 헤더
using namespace std;

int main() {
    vector<string> v;  // 문자열을 저장할 벡터 v 생성
    string input;  // 사용자로부터 입력받을 문자열 변수

    // 5개의 문자열을 입력받아 벡터에 저장
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";  // 문자열 입력을 안내
        cin >> input;  // 사용자로부터 문자열 입력받기
        v.push_back(input);  // 입력받은 문자열을 벡터 v에 추가
    }

    // 벡터를 사전순으로 오름차순 정렬
    sort(v.begin(), v.end());  // 벡터 v의 처음부터 끝까지 오름차순으로 정렬

    // 정렬된 문자열을 한 줄씩 출력
    cout << "사전에서 나오는 순서" << endl;  // 출력 메시지
    for (const string& str : v) {  // 벡터 v의 각 문자열을 순차적으로 출력
        cout << str << endl;  // 정렬된 각 문자열을 출력
    }

    return 0;  // 프로그램 종료
}
