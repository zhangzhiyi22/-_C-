#include <iostream>
using namespace std;
#include <vector>
#include "log.h"

void Log(const char* message);

int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}

int main(){
    Multiply(5, 8);


    system("pause");
    return 0;
}