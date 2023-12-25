#include "employee.h"


 employee::employee(int id,string name,int did){
       this->id=id;
       this->name=name;
       this->did=did;
  }

  void employee::show(){
     cout<< "职工编号" <<this->id <<endl;
       cout<< "职工姓名" <<this->name <<endl;
         cout<< "职工岗位" <<this->did <<endl;
           cout<< "做任务"  <<endl;
        
  }

  string getdeptname(){

    return "员工";
  }