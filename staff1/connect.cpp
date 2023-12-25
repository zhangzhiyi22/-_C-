#include   <iostream>
using namespace std;
#include <string>
#include "workmanager.h"

//教职工管理系统

int main(){
     while(true){

        WorkermNger wm;
        wm.menu();
        cout << "请输入您的选择" << endl;
        int choice;
        cin >> choice;

        switch(choice){
           case 1:

              break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
            cout << "输入错误" << endl;
                    break;




        }



     }
    
}