//#include "stdafx.h"
#include <iostream>
//여백은 컴파일시 무시됨
using namespace std;

int add(int a, int b){ return a + b; }   //너무 다닥다닥 붙이지 말것

int multiple(int a, int b){
    return a * b;   //indenting [보편적으로 tab(space 4번)]
}

int main(){

    cout << "Hello, World" << "abcdef" << 
        "Hello, World" << endl;     // 줄바꿈을 예측할 수 있도록 나눌것(예시에서는 오퍼레이터를 둠)

    int my_v        = 1;    //hard 리터럴 수동으로 하나하나 선언해주는 방식
    int x           = 4;    //soft는 다른곳에서 가져오는 방식을 말함
    int num_apple   = 123;

    // 설명 주석은 보통 위에 설정
    int y = add(x, 3);
    return 0;
}