#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, M;
		while (cin >> N >> M) {
			long long mn = min(N, M);
			long long mx = max(N, M);
			if (N <= 0 or M <= 0) {
				return 0;
			}
			else {
				int sum = 0;
				for (int i = mn; i <= mx; i++) {
					sum += i;
					cout << i << " ";
				}cout << "sum =" << sum<<endl;
			}
		}
	


}