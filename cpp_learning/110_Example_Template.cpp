#include<iostream>
#include<string>
using namespace std;

// sort function, a decreasing order, using the selection sort.

template<class T>

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
};

template<class T>
void mysort(T& arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max] < arr[j]) 
			{
				max = j;
			}
		}

		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}

	}
}


void test01()
{
	// test char array
	char chararr[] = "badcfe";
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr,num);
}

int main() {


	system("pause");
	return 0;
}