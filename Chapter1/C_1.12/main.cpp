#include <iostream>
#include "header/mywork.h"
#include "header/add.h"

//전처리를 안할경우 같은 함수가 두번 정의가 되기 때문에 문제가 된다.
//따라서 헤더파일을 만들경우 헤더가드(#pragma once)를 통해
//한번만 선언하도록 구성한다.
//정석적인것은 ifdef로 구성된거지만 헤더가드로 퉁친다.

using namespace std;

int main(){
    doSomething();
    return 0;
}
//헤더의 cpp 파일이 없을 경우 링킹애러가 발생할 수도 있다.
//add함수가 선언이 되어있기 때문에 빌드는 한다.
//하지만 이 함수에 대한 정의가 없을경우 애러가 발생한다.

