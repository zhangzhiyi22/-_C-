#include <iostream>
using namespace std;
#include <vector>


// void Increment(int* value) {
//    (*value)++;
// }

void Increment(int& value) {
   value++;
}


int main() {
   int a = 5;
   int b =8;
//    int*b = &a;
//    int &c = a;
    int& ref = a;
    ref = b;
    Increment(a);
    cout << a << endl;

   
   system("pause");
	return 0;
}

