#include <iostream>
using namespace std;

int main()
{
	long long T;
	cin >>T;
	while (T--) {
		long long N;
		cin >> N;
		if (N == 0) {
			cout << 0 << endl;
		}
		else {
			while (N > 0) {
				long long nn = N % 10;
				cout << nn << " ";
				N = N / 10;
			}cout << endl;
		}
	}
	
}