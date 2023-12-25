#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "log.h"




int Multiply(int a, int b) {
    return a * b;
}

void Multiplylog(int a, int b) {
    cout << a << " * " << b << " = " << Multiply(a, b) << endl;
}



int main() {
    InitLog();
  
    
    
    system("pause");
    return 0;
}