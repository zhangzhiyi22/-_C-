#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

template<typename T>//define a template
void Print(T value)
{
	std::cout << value << std::endl;
}
/*void Print(std::string value)
{
	std::cout << value << std::endl;
}
void Print(float value)
{
	std::cout << value << std::endl;
}*///too many similar functions, we need to simplify it by templates
template<int N>//define a template
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

//};

//char* GetName()
//{
//	return "Cherno";
//}

class Device {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
	{
		return m_Devices;
	}
};


void HelloWorld()
{
	std::cout << "Hello World!" << std::endl;
}

void HelloWorld2(int a)
{
	std::cout << "Hello World!" << a << std::endl;
}

int main()
{

   auto function = HelloWorld;
   typedef void(*HelloWorldFunction)();
   HelloWorldFunction function2 = HelloWorld;
   function();
   function2();

   typedef void(*HelloWorldFunction2)(int);
   HelloWorldFunction2 function3 = HelloWorld2;
   function3(8);
   


	Print<int>(5);
	Print("Hello");
	Print(5.5f);
	Array<5> array;
	int a = 5;
	auto b = a;
	std::cout << b << std::endl;
	//std::string name = GetName();
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");
	for (/*std::vector<std::string>::iterator*/auto it = strings.begin();
		it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	DeviceManager dm;
	const DeviceMap& 
		devices = dm.GetDevices();
	std::cout << array.GetSize() << std::endl;
	std::cin.get();
}