#include <iostream>
using namespace std;
#include <vector>



int main() {
    int i = 0;
   vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    for (int i = 0; i< v.size(); i++){
        cout << v[i] << endl;
    }

   
   system("pause");
	return 0;
}

