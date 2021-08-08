#include <iostream>

using namespace std;

void doSomething(int x){

    x = 123;
    cout << x << "\t" << &x << endl;
}

int main(){

    int x = 0;
    // int x(0); 이걸 추가하면 중복 선언이기때문에 문제가 된다.

    cout << x << "\t" << &x << endl;
    {                                       // 영역 분리
        int x(1);                           // 영역 내에서만 사용가능한 식별자
        cout << x << "\t" << &x << endl;    // 영역을 벗어나면 메모리는 반환된다.
    }

    {
        x = 2; // x = 2
        cout << x << "\t" << &x << endl;
    }
    
    cout << x << "\t" << &x << endl;

    doSomething(x);

    cout << x << "\t" << &x << endl;


    return 0;

}