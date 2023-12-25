#include <iostream>
using namespace std;
#include <vector>



int main()
{
	int i = 10;
	int* p = &i;
	int& r = i;
	cout << "sizeofo(p) = " << sizeof(p) << endl;
	cout << "sizeofo(r) = " << sizeof(r) << endl;
    system("pause");
	return 0;
}
