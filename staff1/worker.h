#include <fstream>
#include   <iostream>
using namespace std;
#pragma once//防止头文件重复包含

class worker
{
    public:
        string name;
        int id;
        int  did;
        virtual void showInfo()=0;
        virtual string getDeptName()=0;
        virtual ~worker(){};
};

