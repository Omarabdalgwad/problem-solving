#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while (T--) {
		long long N;
		cin >> N;
		long long M = 1;
		long long b = 1;
		long long C;
		for (long long i = 1; i < N; i++) {
			long long C = M * b;
			M = C;
			b++;
		} cout << M * b << endl;
	}
}

