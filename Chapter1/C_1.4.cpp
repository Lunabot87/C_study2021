#include <iostream> // cout, cin, endl ...
#include <cstdio>   // printf

// cin  [console in]
// cout [console out]
// endl [end line]
int main(){

    using namespace std;    //사용시 std를 지우고 cout & endl 사용 가능 

    int x = 1024;
    double pi = 3.141592;

    std::cout << "I love this lecture!" << std::endl;   // std : namespace
    std::cout << "I love this lecture!";                // 줄바꿈이 없음
    std::cout << "x is" << x << "pi is " << pi << std::endl;

    std::cout << "abc" << "\t" << "def" << endl;   // \t : tab \n : 줄바꿈
    cout << "ab" << "\t" << "cdef\n";   // 백슬래쉬가 설정된 단어는 한단어로 처리되고 기능이 있는것으로 사용

    cout << "\a";   // \a : audio sound 출력

    //printf("I love this lecture") c에서 사용되는 출력
    int y = 1;

    cout << "Before your input y was " << y <<endl;

    cin >> y;   // 엄청나게 큰 숫자를 넣을경우 자료형이 최대로 저장가능한 값이 출력됨

    cout << "Your input is " << y << endl;

    return 0;
}