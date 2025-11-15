#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long>arr(N);

	for (long long i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	vector<long long> f(N);
	vector<long long> l(N);
	if (N % 2 != 0) {
		for (long long i = 0; i < N / 2; i++) {
			f[i] = arr[i];

		} long long x = 0;
		for (long long i = N - 1; i > N / 2; i--) {
			l[x] = arr[i];
			x++;
		}
	} 
	if (N % 2 == 0) {
		  for (long long i = 0; i < N / 2; i++) {
			 f[i] = arr[i];

	      } long long x = 0;
	       for (long long i = N - 1; i >= N / 2; i--) {
	     	l[x] = arr[i];
			x++;
	       }
	}  bool ok = true;
	for (long long i = 0; i < N / 2; i++) {
		if (f[i] != l[i]) {
			ok = false;
			break;
		}
	}
	if (ok) cout << "YES";
	else cout << "NO";
}

