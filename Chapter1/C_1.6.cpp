#include <iostream>
//[키워드와 식별자 이름짓기]

void MyFunction(){
    //함수는 보통 대문자로 시작
    //동사 명사 순으로 하는 경우가 많음
}

class MyClass{
    public:
        int m_variable; //맴버 변수르 나타내는 경우가 많았음 또는 _를 이용 
};

int main(){

    int value;  // 너무 길지 않으면서 의미를 담을수있는 이름을 정하는게 좋음
    int VALUE;  // 관습적으로 변수를 전부 대문자로 사용하지 않는다.

    int _apples; // Lowlevel의 경우 _를 붙이는 경우가 많았다.
}
