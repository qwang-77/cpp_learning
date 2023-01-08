#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// Polymorphism

class animal
{
public:
	void virtual speak()
	{
		cout << "Animals are talking" << endl;
	}
};

class cat : public animal
{
public:
	void speak()
	{
		cout << "Cats are talking" << endl;
	}
};

class dog : public animal
{
public:
	void speak()
	{
		cout << "Dogs are talking" << endl;
	}
};

// the address are fixed early, the address of the function is fixed when the function is compiling.
// If we want to let cat speaking, we cannot fix the address early
void dospeak(animal& animal) // animal& animal = cat;
{
	animal.speak();
}
// dynamic polymorthism
// 1. Write a virtual function in base class
// 2. Rewrite: Derived class should rewrite the function : Same return type, same function name, same parameter list. Completely same.
void test01()
{
	cat cat;
	dog dog;
	dospeak(cat);
	dospeak(dog);
}
int main() {
	test01();
	system("pause");
	return 0;

}





