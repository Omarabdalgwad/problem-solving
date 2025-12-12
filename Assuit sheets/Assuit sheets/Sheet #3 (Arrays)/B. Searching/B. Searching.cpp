#include <iostream>
using namespace std;

int main()
{
	long long N,A;
	cin >> N;
	long long arr[100000];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> A;
	bool f = false;
	int n=0;
	for (int i = 0; i < N; i++) {
		if (A == arr[i]) {
			f = true;
			n = i;
			break;
		}
	} 
	if (f == true) {
		cout << n;
	}else cout << -1;
	
}
