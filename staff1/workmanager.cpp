#include "workmanager.h"

WorkermNger::WorkermNger()
{
}

WorkermNger::~WorkermNger()
{
    
}

void WorkermNger::menu(){
    cout << "****************************" << endl;
    cout << "*****  欢迎使用教职工管理系统 *******" << endl;
    cout << "*****  0.退出管理系统  *******" << endl;
    cout << "*****  1.增加联系人  *******" << endl;
     cout << "*****  2.显示联系人  *******" << endl;
      cout << "*****  3.删除联系人  *******" << endl;
       cout << "*****  4查找联系人  *******" << endl;
    cout << "*****  5修改联系人 *****" << endl;
    cout << "*****  6.按照编号排序  ******" << endl;
     cout << "*****  7.清空所有文档  *******" << endl;
    cout << "****************************" << endl;
}