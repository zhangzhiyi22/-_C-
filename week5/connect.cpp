#include <iostream>
using namespace std;


static int s_level = 1;
static int s_speed = 2;

int main() {
    int a = 10;
    
    // bool compare = a == 10;
    // if(compare){
    //     cout << "a is 10" << endl;
    // }

  //   if(a == 10) cout << "a is 10" << endl;

     const char* name = nullptr;
     if(!name)  cout << "hello" << endl;   

  
  
     if(a) 
        cout<< "11"<<endl;
    else if(a == 10)
        cout<< "10"<<endl;
    else
        cout<< "else"<<endl;

 
    if(s_level>5)
       s_speed = 10;
    else
        s_speed = 5;

    s_speed = s_level>5 ? s_speed>10 ? 15:10:5;
     



   
   system("pause");
	return 0;
}

