#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}

int main()
{
    using namespace std;

    cout << std::boolalpha;
    cout << isEqual(1, 1) << endl;
    cout << isEqual(0, 1) << endl;

    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "Your input : " << b << endl;

    if(5) //0 이 아닌 모든 값을 True로 처리
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;

    bool bl = true; //copy initialization
    bool b2(false); // direct initialization
    bool b3{ true }; // uniform initializtion 
    b3 = false;

    cout << std::boolalpha; //true, false 로 나타낼 때
    cout << b3 << endl;
    cout << bl << endl;

    cout << !true << endl;
    cout << !false << endl; // "!"는 not operate를 의미

    // 논리 연산자
    cout << (true && true) << endl; // "&&" 는 and operate는 양쪽을 고려하여 하나를 선택  
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl; // "||" 는 or operate는 양쪽을 고려하여 하나를 선택  
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    if(true)// 조건에 따라서 실행을 시킬지를 판단하는 역할을함
        cout << "This is true" << endl;

    if(false)
        cout << "This is false" << endl;
    else
        cout << "This is true" << endl;

    return 0;
}