#include   <iostream>
using namespace std;
#include <string>

//多态实现电脑组装具体实现

class computer{
    public:
        virtual void cpu()=0;
        virtual void yingpan()=0;
        virtual void xianka()=0;
}

class computer1:public computer{
    public:
        void cpu(){
            cout << "组装cpu" <<endl;
        }
        void yingpan(){
            cout << "组装硬盘" <<endl;
        }
        void xianka(){
            cout << "组装显卡" <<endl;
        }
}

class computer2:public computer{
    public:
        void cpu(){
            cout << "组装cpu" <<endl;
        }
        void yingpan(){
            cout << "组装硬盘" <<endl;
        }
        void xianka(){
            cout << "组装显卡" <<endl;
        }
}

    
     

int main(){

    

  system("pause");
    return 0;

}