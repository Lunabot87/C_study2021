#include <iostream>
//[연산자와의 첫 만남]
//리터럴 Literal
//피연산자 Operand
//단항 unary, 이항 binary, 삼항 ternary
using namespace std;

int main(){

    int x(2); // x is a variable, 2 is a literal.

    cout << 1 + 2 << endl;      // 단항 연산자 (-)x, 이항 연산자 1 (+) 2

    int y = (x > 0) ? 1 : 2;    // 삼항 연산자 참(True)이면 1(left), 거짓(False)이면 2(right)

    cout << "x " << x << "\ty " <<y << endl;

    x = -1;

    y = (x > 0) ? 1 : 2; 

    cout << "x " << x << "\ty " <<y << endl;

    cout << "Hello, World" << endl;

    return 0;
}