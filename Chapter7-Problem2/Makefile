# Makefile for Complex Number Project

# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -g

# 타겟
TARGET = main

# 객체 파일
OBJECTS = main.o complex.o

# 기본 타겟
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# 각 소스 파일에 대한 규칙
main.o: main.cpp complex.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

complex.o: complex.cpp complex.hpp
	$(CXX) $(CXXFLAGS) -c complex.cpp

# 클린 명령어
clean:
	rm -f $(OBJECTS) $(TARGET)

# .PHONY는 가상 타겟을 정의
.PHONY: all clean

