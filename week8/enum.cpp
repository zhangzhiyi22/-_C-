#include <iostream>
using namespace std;

//必须是一个整数
enum Example : unsigned char
{
    A, B, C
};

int a   = 0;
int b   = 1;
int c   = 2;

int main() {

    Example value = B;

    if (value == 1)
    {
        // Do something
    }

  

 
   system("pause");
    return 0;
}