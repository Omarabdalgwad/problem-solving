#include <iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	long long X;
	long long even = 0;
	long long odd = 1e9 + 1;
	while (N--) {
		cin >> X;
		if (X % 2 == 0) {
			if (X > even) {
				even = X;
			}
		}
		else
			if (X < odd) {
				odd = X;
			}
	} cout << even << " " << odd;
}
