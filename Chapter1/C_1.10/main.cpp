#include <iostream>

using namespace std;
// main에서 사용하는 함수가 main보다 뒤에 있을 경우 빌드가 애러가 발생한다.
// 따라서 이를 하기 위해서는 만들어지는 함수를 '선언'을 해주면 된다.

int add(int a, int b);  // forward declaration(전방 선언)
                        // 이러한 최소한의 정보만을 가진것을 프로토타입 이라고 함
int multiply(int a, int b);
int subtaract(int a, int b);

int main(){
    cout << add(1, 2) << endl;
    cout << multiply(1, 2) << endl;
    return 0;
}

// definition(정의)
int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a - b;
}

int subtaract(int a, int b){
    return a - b;
}

