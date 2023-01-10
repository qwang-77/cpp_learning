#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// pure virtual destructor and virtual destructor

class animal
{
public:
	animal()
	{
		cout << "Constructor of animal" << endl;
	}
	//virtual ~animal()
	//{
	//	cout << "Destructor of animal" << endl;
	//}
	virtual ~animal() = 0;


	virtual void speak() = 0;

};

animal::~animal()
{
	cout << "Pure destructor of animal" << endl;
}


class cat :public animal
{
public:

	cat(string name)
	{
		m_name = new string(name);
		cout << "Constructor of cats" << endl;
	}

	virtual void speak()
	{
		cout << *m_name << " cats are speaking." << endl;
	}

	string* m_name;
	~cat()
	{
		if (m_name != NULL)
		{
			cout << "Destructor of cat" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
};
void test01()
{
	// base class will not call the destructor of derived class if base class [pointer points to the derived class.
	// will lead to memory leaking
	// we can use virtual destructor to release the ram.
	animal* animal = new cat("Tom");
	animal->speak();
	delete animal;
}
int main() {
	test01();
	system("pause");
	return 0;

}





