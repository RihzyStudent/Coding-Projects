#include <iostream>
#include <stdexcept>
using namespace std;

char getLetterGrade(int grade);

int main() {
	try {
		cout<<getLetterGrade(95)<<'\n';
		cout<<getLetterGrade(50)<<'\n';
		cout<<getLetterGrade(101)<<'\n';
	}
	catch(const out_of_range& err)
	{
		cout << err.what() << endl;
	}
}
char getLetterGrade(int grade) {
	if (grade >=0 && grade <101)
	{
		if (grade >=90)
		{
			return 'A';
		}
		else if (grade >=80)
		{
			return 'B';
		}
		else if (grade >=70)
		{
			return 'C';
		}
		else if (grade >=60)
		{
			return 'D';
		}
		else
		{
			return 'F';
		}
	}
	else {
		throw out_of_range("Your percent must be between 0 and 100 inclusive.");
	}
}