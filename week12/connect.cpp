#include <iostream>
#using namespace std;
struct Entity//structs are public by default
{
	static int x,y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

class Singleton
{
//private:
//		static Singleton* s_Instance;
public:
		static Singleton& Get() 
		{ 
			static Singleton instance;
			return instance; }
		void Hello() {}
};

//Singleton* Singleton::s_Instance = nullptr;
void Function()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int Entity::x;
int Entity::y;//define and the linker will find it

static void Print(Entity e)
{
	std::cout << e.x << ", " << e.y << std::endl;
}

int main() 
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;/*= {5,8};*/
	e1.x = 5;
	e1.y = 8;
	//acutally we are changing the same variable

	e.Print();
	e1.Print();
	//=================

	Function();
	Function();
	Function();
	Function();
	Function();

	Singleton::Get().Hello();
	std::cin.get();
}