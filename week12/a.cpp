#include <iostream>
using namespace std;
#include <string>


class Entity{
    private:
        string m_Name;
        int m_Age;
    public:
      
     explicit   Entity(const string& name) : m_Name(name), m_Age(-1) {}
     explicit  Entity(int age) : m_Name("Unknown"), m_Age(age) {}
}

void PrintEntity(const Entity& entity){
    //print entity
}

int main(){

    PrintEntity(string("Cherno"));
    PrintEntity(22);


    Entity a("Cherno");
    Entity b(22);
    
    
    
    system ("pause");
    return 0;
}