#include<iostream>
#include<random>
#include<ctime>

using namespace std;

int main()
{
	unsigned seed; 
	double random_number[100];
	
	for (int i = 0; i < 100; i++)
	{
		seed = std::time(NULL);
		std::mt19937 generator(std::random_device{}());
		std::uniform_real_distribution<double> distribution(0, 1);
		random_number[i] = distribution(generator);
		cout << random_number[i] << endl;

	}

	system("pause");
	return 0;
}