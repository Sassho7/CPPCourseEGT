#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;

	if (n % 2 == 0)
	{
		cout << n << " <- you number is even." << endl;
	}

	else
	{
		cout << n << " <- you number is odd." << endl;
	}
	return 0;
}