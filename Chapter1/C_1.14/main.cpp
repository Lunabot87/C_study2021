#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9 
// 매크로는 대부분 대문자로 사용
// 같은 이름이 선언될경우 교체함 값을 바꿀경우 빌드를 다시해야 함
// 실제 프로그램에서는 잘 사용하지 않음
// String 구문도 가능함
#define MAX(a, b) ((a>b) ? a : b)
// 하드코딩을 할때 사용하였으나, 컴퓨터가 '달라지면서' 잘 안씀
// 달라졌다는건 컴퓨터가 좋아졌다는 개념이 아님

#define LIKE_APPLE
//매크로는 정의된 파일 안에서만 효과를 발휘 한다.

void doSomthing();

int main()
{
    cout << MY_NUMBER << endl;
    cout << MAX(1, 4) << endl;
    cout << std::max(1, 4) << endl; //

    // 매크로를 이런식으로도 사용이 가능하다.
    #ifdef LIKE_APPLE
        cout << "Apple" << endl;
    #endif

    #ifndef LIKE_APPLE
        cout << "Orange" << endl;
    #endif
    doSomthing();
    
    return 0;
}