#include <iostream>
using namespace std;

int main()
{
	long long l1, r1;
	long long l2, r2;

	cin >> l1 >> r1 >> l2 >> r2;

	if (r2 >= r1) {
		if (l2 >= l1) {
			if (l2 <= r1) {
				cout << l2 << " " << r1;
			} else 
                 cout << "-1";
		}
		else if (l2 <= l1) {
			cout << l1 << " " << r1;
		}

	} else if (r2 <= r1) {
		if (l2 >= l1) {
			cout << l2 << " " << r2;
		}
		else if (l2 <= l1 && r2 >= l1) {
			cout << l1 << " " << r2;
		}
		else
			cout << "-1";
	}
}
