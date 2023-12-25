#include   <iostream>
using namespace std;
#include <string>

//写一个通讯录的菜单函数
void menu(){
    cout << "****************************" << endl;
    cout << "*****  1.添加联系人 *******" << endl;
     cout << "*****  2.显示联系人  *******" << endl;
      cout << "*****  3.删除联系人  *******" << endl;
       cout << "*****  4查找联系人  *******" << endl;
    cout << "*****  5修改联系人 *****" << endl;
    cout << "*****  6.清空联系人  ******" << endl;
     cout << "*****  0.退出通讯录  *******" << endl;
    cout << "****************************" << endl;
}


//联系人的结构体
struct Person{
    string name;
    int age;
    long long phone;
    string addr;
};

//通讯录结构体
struct AddressBook{
    int size;
    Person p[1000];
};


//添加联系人
void addPerson(AddressBook * ab){
    if(ab->size==1000){
        cout << "通讯录已满" << endl;
        return;
    }
    cout << "请输入姓名" << endl;
    cin >>ab->p[ab->size].name;
    cout << "请输入年龄" << endl;
    cin >>ab->p[ab->size].age;
    cout << "请输入电话" << endl;
    cin >>ab->p[ab->size].phone;
    cout << "请输入地址" << endl;
    cin >>ab->p[ab->size].addr;
    ab->size++;//通讯录人数加一
    cout << "添加成功" << endl;
}

//显示联系人
void showPerson(AddressBook * ab){
     if(ab->size==0){
        cout << "记录为空" <<endl;

     }


    for(int i=0;i < ab->size;i++){
        cout <<ab->p[i].name << "  "<<ab->p[i].age  <<  "   "  <<ab->p[i].phone <<   "   "  <<ab->p[i].addr  <<endl;
    }
}

//删除联系人
void delPerson(AddressBook * ab){
   
   
  
    //判断是否有联系人
    if(ab->size==0){
        cout << "没有要删除的联系人呢" <<endl;
     
    }else{
    cout <<"请选择你要删除的联系人姓名："<<endl;
     string nn;
     cin >> nn;
    int have=0;

    for(int i=0; i<ab->size;i++){
        if(ab->p[i].name==nn){
           for(int j=i;j<ab->size;j++){
               ab->p[j]=ab->p[j+1];
                ab->size--;
                cout << "删除成功！"<<endl;
           }


            have++;
            
        }
    }  

    if(have==0){
        cout << " 不存在该联系人" <<endl;
    }

    }
}


//查找联系人
void findPerson(AddressBook * ab){
    if(ab->size==0){
        cout <<"记录为空" << endl;
        return;
    }

    cout <<"请输入你要查找的联系人" <<endl;
    string find;
    cin >> find;
    int find1 =0;
    for(int i=0; i<ab->size;i++){
        if(ab->p[i].name==find){
           cout <<ab->p[i].name << "  "<<ab->p[i].age  <<  "   "  <<ab->p[i].phone <<   "   "  <<ab->p[i].addr  <<endl;
           find1++;
    }

        }

        if(find1==0){
            cout <<"查无此人"<<endl;
        }
    }


//清空联系人
void  cleanPerson (AddressBook * ab){
    ab->size=0;
    cout <<"清空成功"<<endl;
}


int main(){

    int select=0;//创建用户的选择

     AddressBook ab;//创建通讯录
     ab.size=0;//通讯录初始化
     
    Person p[1000];//创建通讯录

     while(true){

       menu();//菜单调用

        cout << "请输入您的选择" << endl;
        cin >> select;
        switch(select){
            case 1:
             addPerson(&ab);//利用地址传递
                break;
            case 2:
            showPerson(&ab);
                break;
            case 3:
            delPerson(&ab);
                break;
            case 4:
            findPerson(&ab);
                break;
            case 5:
                break;
            case 6:
            cleanPerson(&ab);
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                 system("pause");
                 return 0;
                break;
            default:
                cout << "输入错误，请重新输入" << endl; 
        }
    
  
}

}