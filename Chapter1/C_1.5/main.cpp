#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b){

    int sum = num_a + num_b;

    return sum; //함수의 자료형과 return 되는 변수의 자료형이 같아야 한다.
}

int multiplyTwoNumbers(int num_a, int num_b){

    int sum = num_a * num_b;

    return sum;
}

void print(){

    cout << "hello" << endl;
}

void printHelloWorld(){ //실행을 하는 함수이기에 반환이 없다.
    
    cout << "Hello World " << endl; 

    print();    // 선언 함수가 위에 있어야함.

    return; //선택 사항

    cout << "Hello World 2 " << endl;   // return 이후로는 실행이 되지 않음 

    //  void print(){
    //      cout << "hello" << endl;
    //  }
    // 함수안에 함수는 사용 불가

}



int main(){
    
    cout << addTwoNumbers(1, 2) << endl;
    cout << multiplyTwoNumbers(3, 4) << endl;
    cout << addTwoNumbers(8, 13) << endl;

    cout << printHelloWorld << endl;

}