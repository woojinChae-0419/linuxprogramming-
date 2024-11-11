#include <iostream>
#include <string>
using namespace std;

class TV {
    int size; // 스크린 크기
public:
    TV() {
        size = 20;
        cout << "TV 생성" << endl;
    }
    TV(int size) {
        this->size = size;
        cout << "TV 생성" << endl;
    }
    int getSize() { return size; }
    void setSize(int size) { this->size = size; }
};

class WideTV : public TV { // TV를 상속받는 WideTV
    bool videoIn;
public:
    WideTV(int size, bool videoIn) : TV(size) {
        this->videoIn = videoIn;
        cout << "WideTV 생성" << endl;
    }
    bool getVideoIn() { return videoIn; }
    void setVideoIn(bool videoIn) { this->videoIn = videoIn; }
};

class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
    string ipAddr; // 인터넷 주소
public:
    SmartTV(string ipAddr, int size, bool videoIn) : WideTV(size, videoIn) {
        this->ipAddr = ipAddr;
        cout << "SmartTV 생성" << endl;
    }

    // setSmartTV 함수 추가
    void setSmartTV(int size, bool videoIn, string ipAddr) {
        setSize(size); // TV 클래스의 setSize 호출
        setVideoIn(videoIn); // WideTV 클래스의 setVideoIn 호출
        this->ipAddr = ipAddr;
    }

    string getIpAddr() { return ipAddr; }
};

int main() {
    SmartTV htv("192.0.0.2", 50, false);
    cout << "size = " << htv.getSize() << endl;
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
    cout << "IP = " << htv.getIpAddr() << endl;
}

