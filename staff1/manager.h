#include <fstream>
#include   <iostream>
#include "worker.h"
using namespace std;
#pragma once//防止头文件重复包含

class manager:public worker
{
  public:
//构造函数
     manager(int id,string name,int did);
//显示用户信息
     virtual void show()=0;
//获取职工岗位名称
     virtual string getdeptname()=0;



};