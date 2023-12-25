#include <iostream>
using namespace std;
#include <vector>


class Entity {
    private:
       string m_Name;
    public:
         Entity() : m_Name("Unknown") {}
         Entity(const string& name) : m_Name(name) {}
         const string& GetName() const { return m_Name; }
};

int main() {  
    // Entity entity;
    // cout << entity.GetName() << endl;
//     Entity* e;
//     {
//         Entity* entity = new Entity("Cherno");
//         e = entity;
//         cout << entity->GetName() << endl;
//     }
//    delete e;
    int a = 2;
    int* b = new int[50];
    Entity*e = new Entity();
    Entity* entity = new Entity[50];
    delete[] entity;
    delete e;
   system("pause");
	return 0;
}

