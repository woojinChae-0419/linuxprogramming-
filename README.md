# linuxprogramming-
## 과제 목록

### Chapter7-Problem1
- 설명: 이 과제에서는 실수부(real)와 허수부(img)를 멤버변수로 갖는 복소수(Complex) 클래스를 아래 결과가 나오도록 구현.

### Chapter7-Problem2
- 설명: 전역함수 ComplexAdd를 ComplexManager 클래스의 멤버함수로 선언하고 다음코드가 실행되도록 작성

### Chapter7-Problem3
- 설명: ComplexManager 클래스의 멤버함수로 ComplexAdd, ComplexSub를 선언하고 다음코드가 실행되도록 작성.

### Chapter7-Problem4

- 함수 중복을 설명하시오.
:함수 중복은 같은 이름을 가진 여러 개의 함수가 서로 다른 매개변수 목록을 가지는 경우를 의미합니다.

- 연산자 중복을 설명하시오.
:연산자 중복은 기존의 연산자를 사용자 정의 데이터 타입(예: 클래스)에 대해 특별한 의미를 부여하는 기능입니다.

- 연산자 함수란 무엇인가?
:연산자 함수는 특정 연산자를 오버로딩하는 함수로, 연산자와 관련된 작업을 수행합니다.

- 객체 지향형 언어의 특징 중의 하나인 다형성의 의미를 설명하시오.
:다형성은 객체 지향 프로그래밍의 중요한 특징 중 하나로, 동일한 이름의 메서드나 연산자가 다양한 방식으로 동작할 수 있도록 하는 능력을 말합니다.

### Chapter7-4-Problem1
![image](https://github.com/user-attachments/assets/0f404d2e-f5e1-40e6-933c-b744237aa403)

### Chapter7-4-Problem2
![image](https://github.com/user-attachments/assets/b59d6087-5b7e-4506-b080-610ec14fd025)

### Chapter7-4-Problem3
![image](https://github.com/user-attachments/assets/b20804ce-c2a1-475e-934a-ad16ae44a026)

### Chapter7-4-Problem4
![image](https://github.com/user-attachments/assets/cdd36815-c4da-4acc-b8f7-7dacd4763d35)

### Chapter7-4-Problem5
![image](https://github.com/user-attachments/assets/6f1fb529-6f90-456c-8d46-d431ca5e6f30)

### Chapter7-4-Problem6
![image](https://github.com/user-attachments/assets/1e89fac9-a0a8-4d9d-97da-7eca651ddb21)

### chapter8-2-Problem1
SmartTV htv("192.0.0.1", 32);
위 코드에서 htv 객체는 SmartTV 클래스의 생성자를 호출하여 생성됩니다. SmartTV는 WideTV로부터 상속받고, WideTV는 TV로부터 상속받는 구조를 가지므로 생성자가 호출되는 순서는 다음과 같습니다.

생성자 호출 순서와 인수 전달 과정
TV 생성자 호출:

TV 클래스는 WideTV의 부모 클래스이므로 TV의 생성자가 제일 먼저 호출됩니다.
SmartTV 생성자에서 WideTV(size, true)를 호출하는데, 여기서 size가 전달됩니다.
WideTV의 생성자는 TV(size)를 통해 TV의 생성자를 호출하고, 이때 size 값(32)이 TV 생성자의 인수로 전달됩니다.
결과적으로, TV(int size) 생성자가 호출되며 size가 32로 설정됩니다.

WideTV 생성자 호출:

TV 생성자가 완료된 후, WideTV 생성자가 호출됩니다.
WideTV 생성자는 bool videoIn이라는 인수를 받는데, SmartTV 생성자에서 WideTV(size, true)로 호출했으므로 videoIn에는 true가 전달됩니다.
결과적으로, WideTV(int size, bool videoIn) 생성자가 호출되어 videoIn 값이 true로 설정됩니다.

SmartTV 생성자 호출:

마지막으로 SmartTV 생성자가 호출됩니다.
SmartTV 생성자는 string ipAddr와 int size라는 두 개의 인수를 받습니다. 여기서 "192.0.0.1"이 ipAddr에 전달되고 32가 size에 전달됩니다.
SmartTV 생성자는 WideTV(size, true)를 호출하여 size와 true 값을 부모 클래스 생성자로 전달한 후, ipAddr 값을 "192.0.0.1"로 설정합니다.


### Chapter8-2-Problem2
![image](https://github.com/user-attachments/assets/d8443eaa-f777-4bbe-bbcb-c63f984ee277)

### Chapter8-2-Problem3
![image](https://github.com/user-attachments/assets/ff7d8ecf-a379-48d3-aa3a-a2389761c8f9)

### Chapter8-2-Problem4
![image](https://github.com/user-attachments/assets/b1c1f7f9-aead-43a2-80a6-bd13ef83d286)

### Chapter8-2-Problem5
![image](https://github.com/user-attachments/assets/abdb6fb5-c559-4205-9ee9-c4ab9e8a7ce4)

### Chapter10-2-Problem1
![image](https://github.com/user-attachments/assets/8282f0b0-615c-4ce8-b07b-684d2acd6982)

### Chapter10-2-Problem2
![image](https://github.com/user-attachments/assets/592b5c51-3b17-44da-9744-7fa972e924ce)

