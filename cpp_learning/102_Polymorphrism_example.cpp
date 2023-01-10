#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class cpu
{
public:
	virtual void calculate() = 0;
};

class videocard
{
public:
	virtual void display() = 0;
};

class memory
{
public:
	virtual void storage() = 0;
};


class computer
{
public:
	computer(cpu* cpu, videocard* vc, memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	};

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();

	}

	// provide a destructor to release three parts 

	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		};
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		};
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

	}

private:
	cpu* m_cpu;
	videocard* m_vc;
	memory* m_mem;
};

class intelCPU :public cpu
{
	virtual void calculate()
	{
		cout << "Intel's CPU has begun calculating!!!!!!!!!!" << endl;
	}
};

class intelvideocard : public videocard
{
	virtual void display()
	{
		cout << "Intel's Video card has begun displaying !!!!!!!!!!!!!!" << endl;
	}
};

class intelmemory : public memory
{
	virtual void storage()
	{
		cout << "Intel's memory has begun storaging !!!!!!!!!!!!!!" << endl;
	}
};


class lenovoCPU :public cpu
{
	virtual void calculate()
	{
		cout << "lenovo's CPU has begun calculating!!!!!!!!!!" << endl;
	}
};

class lenovovideocard : public videocard
{
	virtual void display()
	{
		cout << "lenovo's Video card has begun displaying !!!!!!!!!!!!!!" << endl;
	}
};

class lenovomemory : public memory
{
	virtual void storage()
	{
		cout << "lenovo's memory has begun storaging !!!!!!!!!!!!!!" << endl;
	}
};


void test01()
{
	cpu* intelCpu = new intelCPU;
	videocard* intelcard = new intelvideocard;
	memory* intelmem = new intelmemory;

	computer* computer1 = new computer(intelCpu, intelcard, intelmem);

	computer1->work();

	delete computer1;

	cout << "------------------------------------------" << endl;


	// Second computer



	computer* computer2 = new computer(new lenovoCPU, new lenovovideocard, new lenovomemory);

	computer2->work();

	delete computer2;
	cout << "------------------------------------------" << endl;

	// Third computer

	computer* computer3 = new computer(new intelCPU, new lenovovideocard, new lenovomemory);

	computer3->work();

	delete computer3;


}


int main() {
	test01();
	system("pause");
	return 0;

}





