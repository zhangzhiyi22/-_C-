#include <iostream>
using namespace std;
#include <vector>


//30
/**class Entity 
{
protected:
    int X,Y;

public:
    Entity()
    {
        X=0;
    }

};

class Player : public Entity
{
public:
    Player()
    {
        X=2;
    }
};**/

//34
class Entity
{
    private:
        int X,Y;
    public:
         int GetX() const
        {
            //X=2;不被允许,因为是const，只能读取，不能修改
            return X;
        }
        //
        void SetX(int x)
        {
            X=x;
        }
};

void PrintEntity(const Entity& e)
{
    cout<<e.GetX()<<endl;
}

int main() {
    const int size = 5;

    const int* a = new int;
    int* const b = new int;
    const int* const c = new int;

    int const* d = new int;

    int e = 5;
    d=&e;

    

   
   system("pause");
	return 0;
}

