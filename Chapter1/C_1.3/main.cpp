#include <iostream>
int main(){

    int x;      // x는 메모리의 어떤공간의 이름
    x = 123;    // assignment
                // 메모리 공간에 123이라는 값을 저장해 둔다.
                // L-values : x R-values : 123
                // runtime errer : 메모리에 값을 초기화 안해주면 발생함
                // release 모드에서는 초기화를 안시켜줄시 알아서 값을 넣음
                // int x = 123; 이건 initialization
                // int x(123)
                

    std::cout << x << std::endl;    // x위치에 저장된 값을 출력
    std::cout << &x << std::endl;   // x의 위치를 출력

    // int x = 1;
    x = x + 2;
    std::cout << x << std::endl;

    int y = x;
    std::cout << y << std::endl;

    //is (x + y) 1-value or r - value ?
    std::cout << x + y << std::endl;

    std::cout << x << std::endl;

    int z;
    std::cout << z << std::endl;

    return 0;
}