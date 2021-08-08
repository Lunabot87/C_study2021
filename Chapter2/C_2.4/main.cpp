#include <iostream>

void my_function(void)
{
    // 엄격하게 할경유 인자에 void를 쓰기도 함
}

int main()
{
    // void my_void;
    // 메모리를 차지하지 않기 때문에 이런식으로 선언은 불가능함
    using namespace std;
    
    int i = 123;
    float f = 123.456f;

    void *my_void;
    // 포인트형으로 선언이 가능
    
    my_void = (void*)&i;
    // int 자료형의 주소
    cout << my_void << endl;
    my_void = (void*)&f;
    // float 자료형의 주소
    cout << my_void << endl;   
    // 첫 주소의이름은 공통이다.
    // 데이터 타입이 다르고 사이즈가 다르더라도,
    // 주소를 표현하는 데이터의 양은 동일하다.
    return 0;
}