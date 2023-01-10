#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// example: Making beverage

class abstractdrink
{
public:
	// boil the water
	virtual void boil() = 0;

	// put materials inside
	virtual void brew() = 0;

	// pour into the cub
	virtual void pour() = 0;

	// add some sugar
	virtual void addside() = 0;

	// make drink
	void makedrink()
	{
		boil();
		brew();
		pour();
		addside();
	}
};

class coffee: public abstractdrink
{
public:
	void boil()
	{
		cout << "Boil the purified water" << endl;
	}

	void brew()
	{
		cout << "Brew the coffee" << endl;
	}

	void pour()
	{
		cout << "Pour into the cup" << endl;
	}

	void addside()
	{
		cout << "add some sugar and milk" << endl;
	}
};


class tea : public abstractdrink
{
public:
	void boil()
	{
		cout << "Boil the spring water" << endl;
	}

	void brew()
	{
		cout << "Brew the tea" << endl;
	}

	void pour()
	{
		cout << "Pour into the glass cup" << endl;
	}

	void addside()
	{
		cout << "Add some lemon" << endl;
	}
};


void dowork(abstractdrink * abs)
{
	// make the beverage
	abs->makedrink();
}

void test01()
{
	dowork(new coffee);

	cout << "-----------------------------" << endl;

	dowork(new tea);
}
int main() {
	test01();
	system("pause");
	return 0;

}





