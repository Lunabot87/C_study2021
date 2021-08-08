#include <iostream>



void doSomthing()
{
    using namespace std; 
    //다른곳도 사용될 수 있기때문에 가능하면 중괄호 안에 넣는 것이 좋다.

    #ifdef LIKE_APPLE
        cout << "Apple" << endl;
    #endif

    #ifndef LIKE_APPLE
        cout << "Orange" << endl;
    #endif

}