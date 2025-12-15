#include <iostream>
using namespace std;

int main()
{
	long long X;
	cin >> X;
	long long N = X / 1000;

	if (N % 2 == 0) {
		cout << "EVEN";
	}
	else
		cout << "ODD";
}

