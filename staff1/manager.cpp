#include "manager.h"


 manager::manager(int id,string name,int did){
       this->id=id;
       this->name=name;
       this->did=did;
  }

  void manager::show(){
     cout<< "职工编号" <<this->id <<endl;
       cout<< "职工姓名" <<this->name <<endl;
         cout<< "职工岗位" <<this->did <<endl;
           cout<< "岗位职责：将老板的任务下发给员工"  <<endl;
        
  }

  string getdeptname(){

    return "管理者";
  }