#include <iostream>

using namespace std;
//같은 이름이 두개가 존재할 경우 namespace를 통해 구분을 할 수 있다.

namespace MySpace1
{
    namespace InnerSpace //스페이스 안에 또 선언이 가능하다.
    {
        int my_function()
        {
            return 0;
        }
    }
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

namespace MySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
} // namespace MySpace2


int main()
{
    // using namespace를 안 쓸경우
    // cout << MySpace1::doSomething(3, 4) << endl;
    // cout << MySpace1::doSomething(3, 4) << endl;
    // cout << MySpace1::InnerSpace::my_function() << endl;

    // using namespace를 쓸 경우
    using namespace  MySpace1;
    cout << doSomething(3, 4) << endl;
    cout << MySpace1::doSomething(3, 4) << endl;
    cout << InnerSpace::my_function() << endl;

    return 0;
}