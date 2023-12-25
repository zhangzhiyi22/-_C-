#include   <iostream>
using namespace std;
#include <string>


class makedrink{
   public:
     void  water(){
        cout << "煮水" <<endl;
     }
     
     virtual void chongpao()=0;

     void  daoru(){
        cout <<"倒入杯中" <<endl;

     }
     virtual   void  jia()=0;

};

class coffee:public makedrink
{
    public:
  void chongpao(){
    cout <<"冲泡咖啡" <<endl;
  }
  void jia(){

  cout << "加糖和牛奶" <<endl;
  }

};

class tea:public makedrink
{
    public:
  void chongpao(){
    cout <<"冲泡茶叶" <<endl;
  }
  void jia(){

  cout << "加柠檬" <<endl;
  }

};

void test01(){
    tea t1;
    t1.water(); 
    t1.chongpao();  
    t1.daoru(); 
    t1.jia();
}


int main(){

   

   test01( );
   system("pause");
    return 0;
}