#include <iostream>
using namespace std;

int main()
{
	double N;
	cin >> N;
	int dif = N;
	double sty = N - dif ;

	if ((N - dif) <= 0) {
		cout << "int " << dif;
	}
	else
		cout << "float " << dif << " " << sty;
}

