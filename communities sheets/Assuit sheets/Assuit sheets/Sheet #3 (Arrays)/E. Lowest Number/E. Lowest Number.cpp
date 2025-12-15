
#include <iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	long long arr[100000];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	long long mn = arr[0];
	int index = 0;
	for (int i = 0; i < N; i++) {
		if (mn>arr[i]) {
			mn = arr[i];
			index = i ;
		}
	}cout << mn << " " << index+1;
}

