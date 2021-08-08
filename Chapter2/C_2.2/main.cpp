#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// 문자 | char        1바이트
// --------------------------------------------
// 정수 | short       2바이트
//      | int         2바이트     대부분이 4바이트
//      | long        4바이트
//      | long long   8바이트     C99/C++11 type

// int i = 1;
// |------------------------------------------|
// | 00000000 | 00000000 | 00000000 | 00000001|
// |------------------------------------------|
// int i = -1;
// |------------------------------------------|
// | 10000000 | 00000000 | 00000000 | 00000001|
// |------------------------------------------|
// 맨앞 비트는 부호로 사용

int main()
{
    short       s = 1; // 2 bytes = 2 * 8 bits = 16 bits
    int         i = 1;
    long        l = 1;
    long long   ll = 1;

    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    // 괄호 안의 -1은 부호를 나타내는 것을 빼고, 밖의 -1은 0을 뺌
    // short에서 나타낼수 있는 가장 큰 수는 32767 이다.
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    s = 32767;
    s = s + 1;
    cout << "32768 ?" << s << endl;
    // 이러한 상황을 overflow(오버플로우)라고 함

    s = std::numeric_limits<short>::min();
    cout << "min()" << s << endl;
    s = s - 1;
    cout << "     "<< s << endl; //overflow

    unsigned int ui = -1;
    cout << ui << endl;
    // 이러한 가장 큰 문제가 C++에서 알아서 바꿔주는데
    // 때문에 에러를 발생시키지 않음

    int di = 22/4;
    cout << "int : " << di << "\n22/4 : " << 22/4 << "\n22.0/4.0 : " << 22.0/4.0 << endl;
    // int 값으로 사용된 것은 int값으로 저장되기 때문에 값이 다르게 나옴
    // 보통 버림으로 사용됨 소수점을 사용해야 하는경우
    // float이나 double 을 써야함

    return 0;
}