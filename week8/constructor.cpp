#include <iostream>
using namespace std;


class Entity
{
public:
    int x, y;

   void Print()
    {
        cout << x << ", " << y << endl;
    }

    // void Init()
    // {
    //     x = 0;
    //     y = 0;
    // }



    Entity()
    {
        x = 0;
        y = 0;
       cout << "Created Entity!" << endl;
    }

    // Entity(int x, int y)
    // {
    //     this->x = x;
    //     this->y = y;
    // }

    ~Entity()
    {
        cout << "Destroyed Entity!" << endl;
    }

    
};


class log
{
    public:
        log() = delete;
        static void Write()
        {
            cout << "Hello!" << endl;
        }
};


void Function()
{
    Entity e;
    e.Print();
}

int main() {

   log::Write();
  // log l;

    Function();
//     Entity e;
//     // Entity e(10, 5);
//    // e.Init();
//     e.Print();



    system("pause");
    return 0;
}

