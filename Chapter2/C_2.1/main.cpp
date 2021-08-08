#include <iostream>

using namespace std;

// 자료형으로 변수를 선언하면 변수의 주소가 임의적으로 할당됨
// String은 기본 자료형(Fundermental)이 아니다.
// char의 경우 1byte
// 문자열의 저장은 아스키코드표를 통해 데이터로 치환되어 저장
// char로 저장할경우cout 시 문자로 출력됨
// 컴파일러에 따라서 메모리의 사이즈가 달라진다.(최소 크기만 정의되어 있음)


// int의 경우 4byte(1byte는 8bits)
// 
void e_first()
{
    int j = 3;
    int i = -1;
    int k = 123;
    char a = 'H';

    cout << (uintptr_t)static_cast<void*>(&a) << endl;
    cout << (uintptr_t)static_cast<void*>(&i) << endl;
}

void e_bool()
{
    bool bValue = false;
    cout << (bValue ? 1 : 0) << endl;
}

void e_char()
{
    //char chValue = 'A';
    char chValue = 65;
    cout << chValue << endl;
}

void e_float()
{
    float fValue = 3.141592f; 
    // f를 안붙일 경우 double로 인식함
    // double이 더 정밀하기 때문에 경고문이 발생
    // 왔다갔다 하다가 오류가 발생할 가능성이 생김
    cout << fValue << endl;
}

void e_double()
{
    float dValue = 3.141592;
    cout << dValue << endl;
}

void e_auto()
{
    auto aValue = 3.141592;
    // 이것은 모던 C++에 추가된 자료형으로
    // 알아서 값을 보고 자료형을 선택함
    cout << aValue << endl;
}

void e_sizeof()
{
    // 변수의 크기를 출력하는 함수
    auto size = 3.25425f;
    cout << sizeof(size) << endl;
}

// C++에서 변수를 초기화 하는 방법이 3개가 있다.
// copy initializtion            int a = 123;
// direct initialization         int a(123);
// uniform initialization        int a{ 123 };

// int i = 3.1415; 이건 워닝
// int a(3.14)  이건 워닝
// int b{ 4.5 } 이건 애러
// uniform initialization 이 더 엄격함

// 캐스팅(형 변환 예시) int i = (int)3.1415
// 이러면 i는 3이 저장됨

// 같은 데이터 형식만 복수의 변수를 선언해줄 수 있음
// int k. l, m 단 int k. l, m = 123 이러한 마지막만
// 초기화하는 방식은 권장하지 않음


// 옛날 컴파일러는 사용하는 변수를 맨 위에 선언하게 되어있었음
// 요즘에는 사용하는 변수는 사용하기 직전에 선언하는 걸 선호함
// 이는 debuging 하기 좋고, 묶여있어야 리팩토링 하기 편하다.
int main()
{
    e_bool();
    e_char();
    e_float();
    e_double();
    e_auto();
    e_sizeof();
    return 0;
}