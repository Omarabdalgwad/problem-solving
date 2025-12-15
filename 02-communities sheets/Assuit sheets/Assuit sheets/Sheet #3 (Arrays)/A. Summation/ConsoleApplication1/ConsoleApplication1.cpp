#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long arr[100000];
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << llabs(sum);
}
