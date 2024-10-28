# Makefile

# 컴파일러 및 플래그
CXX = g++
CXXFLAGS = -Wall -g

# 소스 파일 및 실행 파일
SRCS = complex.cpp
TARGET = complex

# 기본 타겟: 컴파일
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 실행 명령
run: $(TARGET)
	./$(TARGET)

# 청소
clean:
	rm -f $(TARGET)

