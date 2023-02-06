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

// Print template
template<class T>
void printarray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void test01()
{
	// test char array
	char chararr[] = "badcfe";
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr,num);
	printarray(chararr, num);
	
}

void test02()
{
	int intarr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intarr) / sizeof(int);
	mysort(intarr, num);
	printarray(intarr, num);
}

int main() {

	test01();
	test02();
	system("pause");
	return 0;
}