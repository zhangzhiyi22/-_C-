#include   <iostream>
using namespace std;
#include <string>


//多态实现计算器
class Calculator{
    public:
        virtual int getResult()=0;
          
        
        int num1;
        int num2;
};

class AddCalculator:public Calculator{
    public:
        int getResult(){
            return num1 + num2;
        }
};

class SubCalculator:public Calculator{
    public:
        int getResult(){
            return num1 - num2;
        }
};

class MulCalculator:public Calculator{
    public:
        int getResult(){
            return num1 * num2;
        }
};

class DivCalculator:public Calculator{
    public:
        int getResult(){
            return num1 / num2;
        }
};


void test01(){
    Calculator * cal = new AddCalculator();
    cal->num1 = 10;
    cal->num2 = 20;
    cout << cal->getResult() << endl;
    delete cal;
    cal = NULL;
}
 

int main(){

   test01( );
   system("pause");
    return 0;

}