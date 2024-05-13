//Ex5 Q5
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter an integer (0 to terminate) : ";
	cin >> num;
	for (int i = 1; i <= 10; i++)
			cout << num << " x " << i << " = " << num * i << endl;
}