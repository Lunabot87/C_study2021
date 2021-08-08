#include <iostream>
#include <iomanip> // 숫자를 몇자리 까지 나타낼건지 선언 가능
#include <limits>
#include <cmath> // isnan 을 쓰기 위해서 사용

// 컴퓨터에서는 소수를 부동소수점 이라는 것을 사용함
// |-----------------------------------------------------------------|
// |    영역 Category     |   형 Type   | 최소 크기 | 전형적인 크기    |
// |    부동소수점        |    float    |  4 바이트 |  4바이트         |
// |    (Floating point) |    double   |  8 바이트 |  8바이트         |
// |                     | Long double |  8 바이트 | 8,12 or 16 바이트|
// |-----------------------------------------------------------------|
// 요즘 컴파일러에서는 double을 기본으로 사용하는 경우가 많은나,
// 아직은 float이 컴퓨터에 부담을 덜 준다.

// |------------------------------------------------------|
// | 부호 |    지수      |              가수               |
// | sign |  exponent   |            mantissa             |
// |------------------------------------------------------|
// |   0  |  00000111   |     1100000000000000000000      |
// |------------------------------------------------------|
// |   +  | 2^0+2^1+2^2 |     2^-1+2^-2 = 0.5 + 0.25      |
// |      | = 7         |     = 0.75                      |
// |------------------------------------------------------|
// +(1+0.75) X 2^(7-127) = +1.346554 X 10^-36

int main()
{
    using namespace std;

    // float f(3.141592f); //3.14 = 31.4 * 0.1
    // f를 안 붙이면 double로 인식할 수 있기때문에 f 를 붙이는 것이 좋다.
    // cout << 3.14 << endl;
    // cout << 31.4e-1 << endl;
    // cout << 31.4e-2 << endl;
    // cout << 31.4e1 << endl;
    // cout << 31.4e2 << endl;

    // double d(3.141592);
    // long double ld(3.141592);

    // cout << sizeof(f) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(ld) << endl;

    // cout << numeric_limits<float>::max() << endl;
    // cout << numeric_limits<double>::max() << endl;
    // cout << numeric_limits<long double>::max() << endl;

    // cout << numeric_limits<float>::min() << endl;
    // cout << numeric_limits<double>::min() << endl;
    // cout << numeric_limits<long double>::min() << endl;

    // // 표현할 수 있는 가장 작은 숫자를 볼때는 lowst를 사용
    // cout << numeric_limits<float>::lowest() << endl;
    // cout << numeric_limits<double>::lowest() << endl;
    // cout << numeric_limits<long double>::lowest() << endl;

    // float f(123456789.0f); // 10 significant digits
    // double d(0.1);
    // double d1(1.0);
    // double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);

    // cout << d << endl;
    // cout << std::setprecision(9) << endl;
    // cout << f << endl;
    // cout << std::setprecision(17) << endl;
    // cout << d << endl;
    // cout << setprecision(17);
    // cout << d1 << endl;

    // cout << d2 << endl;
    // // 오차가 누적이 됨

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl;
    cout << neginf << " " << std::isnan(neginf) <<endl;
    cout << nan << " " << std::isnan(nan) <<endl;
    cout << 1.0 << " " << std::isnan(1.0) <<endl;

    // 이러한 값(inf, -inf, nan)가 나오면 안됨.
    // 이러한 값이 나오는 걸 확인하는 것이 중요한데 이것이 어려움
    // isnan 이라는 함수로 확인이 가능.

    return 0;
}