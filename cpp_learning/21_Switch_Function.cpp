#include<iostream>
#include<string>
using namespace std;

int main() {
	// switch sentence
	// Movie grading
	// 10-9: Excellent 8-7: Good 6-5: Okay smaller than 5: Bad
	// Evaluate a movie by marks, and output the result of the evaluation
	cout << "Evaluate the movie" << endl;
	int score = 0;
	cin >> score;
	cout << "You marked " << score << endl;

	switch (score) {

	case 10: 
		cout << "Excellent Movie" << endl;
		break; // Exit the branch
	case 9:
		cout << "Excellent Movie" << endl;
		break;
	case 8:
		cout << "Good Movie" << endl;
		break;
	case 7:
		cout << "Good Movie" << endl;
		break;
	case 6:
		cout << "Okay Movie" << endl;
		break;
	case 5:
		cout << "Okay Movie" << endl;
		break;
	default:
		cout << "Bad Movie" << endl;
		break;
	}
	// switch can only judge integers or characters, if do not use break, then it will run all the rest 
	// but this function is clear and faster
	system("pause");
	return 0;
}

