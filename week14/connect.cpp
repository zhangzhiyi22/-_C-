// operators are just functions
// operator overloading is just function overloading
#include <iostream>
#include <string>

//=======41=========
struct Vector2
{
	float x, y;

	Vector2(float x, float y)
		: x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
		//return *this + other;
	}
	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
	// operator overloading
	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}
	bool operator!=(const Vector2& other) const
	{
		return !(*this == other);
	}
};
//overload the << operator
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}
//========43========
class Entity
{
public:
	Entity() 
	{
		std::cout << "Created Entity!" << std::endl;	
	}

	~Entity() 
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

int* CreateArray()
{
	int array[50];
	return array; 
	//do this :
	// int* array = new int[50];
	// return array;
}//would fail since array is destroyed when out of scope

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
		ScopedPtr(Entity* ptr)
			: m_Ptr(ptr)
		{
		}
		~ScopedPtr()
		{
			delete m_Ptr;
		}
};
//

struct Vector3 
{
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		/*for ( int i = 0; i < m_Size; i++)
			m_Buffer[i] = string[i];*/
		memcpy(m_Buffer, string, m_Size+1);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
		std::cout << "Copied String!" << std::endl;
	}
	
	~String()
	{
		delete[] m_Buffer;
	}
	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
	
};
void PrintString(const String& string)
{
	std::cout << string << std::endl;
}


std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}
int main() 
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);
	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;
	if (result1 == result2)
		std::cout << "Both results are equal" << std::endl;
	std::cout << result2 << std::endl;

//=======================================================
	{
		Entity e;
	}//stack allocated, destroyed when out of scope
	{
		Entity* e = new Entity();
	}//heap allocated, must be deleted manually
	{
		ScopedPtr e = new Entity();
	}//destroid when out of scope
//=======================================================
	Vector3* a = new Vector3();
	Vector3* b = a;//copying the pointer
	b->x = 2;//not affecting the pointer, but the object it points to
	String string = "Cherno";
	String second = string;
	/*std::cout << string << std::endl;
	std::cout << second << std::endl;*/
	PrintString(string);
	PrintString(second);
	std::cin.get();
}