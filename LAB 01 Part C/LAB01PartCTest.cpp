#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter a five-digit integer: ";
	cin >> num;

	cout << '\n' << num % 100000/10000; // returns 1
	cout << '\n' << num % 10000/1000; // returns 2
	cout << '\n' << num % 1000 /100; // returns 3
	cout << '\n' << num % 100/10; // returns 4
	cout << '\n' << num % 10 << '\n'; // returns 5


}