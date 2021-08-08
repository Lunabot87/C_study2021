#include <iostream>
// #include <cstdint>
// iostream에서 include 하고 있기 때문에 두번 할 필요 없음

int main()
{
    using namespace std;

    std::int16_t i(5);
    std::int8_t myint = 65;
    // char type으로 변환됨 사용을 지양함 

    cout << myint << endl;

    std::int_fast8_t fi(5);
    // int 8bit 중에 가장 빠른것
    std::int_least64_t fl(5);
    // int 적어도 64bit 인 int
    
    return 0;
}
