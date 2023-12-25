#include <iostream>
using namespace std;
#include <vector>

//mutable,第一种用法，用于修饰类的成员变量，表示该成员变量在const函数中也可以被修改
class Entity{
    private:
       string m_Name;
       mutable int m_DebugCount = 0;
       int m_Score;
    public:
    Entity() : m_Name("Unknown"), m_Score(0)
    {
       // m_Name = "Unknown";
    }
    Entity(const string& name)
    {
        m_Name = name;
    }
        const string& GetName() const{
            m_DebugCount++;
            return m_Name;
        }
};


int main(){
    const Entity e;
    e.GetName();

    Entity e1("Cherno");
    cout << e1.GetName() << endl;

    Entity e0;
    cout << e0.GetName() << endl;



    //mutable,第二种用法，用于修饰lambda表达式，表示该lambda表达式中的变量可以被修改
/***    int x = 8;
    auto f = [=]() mutable{
        x++;
        cout<<x<<endl;
    };
**/


    system ("pause");
    return 0;
}