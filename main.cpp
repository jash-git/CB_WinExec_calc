#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{

    WinExec("calc.exe ",SW_HIDE);//cout << "Hello world!" << endl;
    return 0;
}
