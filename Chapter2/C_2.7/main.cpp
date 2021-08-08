#include <iostream>
#include <limits>
int main()
{
    using namespace std;

    char c1(65);
    char c2('A'); // 하나의 단어만 사용할경우 '' 두개이상의 단어(문자열)을 사용할 경우 ""
    // 

    cout << c1 << " " << c2 << " " << " " << int(c1) << " " << int(c2) << endl;

    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // cpp style
    cout << char(65) << endl;
    cout << int('A') << endl;

    // fundermatal type을 변환 할때 컴파일러에게 문제가 있는지를 확인하는 작업이 수행됨
    cout << static_cast<char>(65) << endl;
    cout << static_cast<char>('A') << endl;

    char ch(97);
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;
    cout << ch << endl;

    // char는 한개의 인자만 가져올수 있기 때문에
    // 여러개의 데이터를 입력시켜 줄 경우
    // 버퍼에 저장되어 남아 있는다.

    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;

    cout << (int)std::numeric_limits<unsigned char>::max() << endl;
    cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
    // 터미널에 문자가 나오지 않지만 의미를 가지는 값이 존재함
    // 그걸 이스케이프 값이라고 부름

    cout << int('\n') << endl;
    cout << "This is first line \nsecond line\n";
    cout << "This is first line " << endl; // << std::flsuh 줄바꿈을 하지 말고 버퍼에 있느 것을 다 쏟아내라
    cout << "\"를 사용하고 싶으면 앞에 \\를 입력해야 한다. "<< endl;
    cout << "\a  이것은 사운드여" << endl;

    wchar_t c;
    // 윈도우 전용으로 사용되며 사용 안하는것을 권장
    char16_t c16;
    char32_t c32;
    // 이러한 종류는 유니코드에 사용되는 문자를 사용하기 위해서 크기가
    // 큰 자료형을 사용할 수 있다.
    cout << "Hello, \u0404" << endl;
    return 0;
}