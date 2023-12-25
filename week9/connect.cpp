#include <iostream>
using namespace std;
#include <vector>
#include <string>



class Entity {
    public:
    static const int size = 5;
       
     int example[size];

        Entity() {
            for (int i = 0; i < 5; i++) {
                example[i] = 2;
            }
        }
};

int main() {
    // int example[5];
    // example[0] = 1;
    // example[1] = 2;
    // cout << example[0] << endl;
    // cout << example[1] << endl;
    // cout << example << endl;

    // int *p = example;
    // *(p+1) = 3;
    // cout << example[1] << endl;

//    Entity e;

//     int* another=new int[5];


//     delete [] another;

    // for (int i = 0; i < 5; i++) {
    //    example[i] = i;
    // }


    char* name = "Cherno";
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o','\0'};

    cout << name << endl;
    cout << name2 << endl;

    string name3 = "Cherno";
    cout << name3 << endl;
   
   system("pause");
	return 0;
}

