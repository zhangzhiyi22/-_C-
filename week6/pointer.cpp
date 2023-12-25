//指针是一个整数（地址），一个用于存储内存地址的数字   1 byte
#include <iostream>
using namespace std;
#include <cstring>


int  main(){
    
    char* buffer =new char[8];
    memset(buffer,0,8);



    //double pointer

    char** ptr1 = &buffer;

    int var = 20;
  //  void* ptr = &var;
 //  double *ptr = (double*)&var;
   int* ptr = &var;
   *ptr = 30;
  
    cout << "var的地址是" << ptr << endl;


        delete[] buffer;

    system("pause");
    return 0;



}
