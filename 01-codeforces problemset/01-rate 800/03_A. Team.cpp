#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        long long arr[3];
        for (int j = 0; j < 3; j++) {
            cin >> arr[j];
        }long long sum = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[j] == 1) {
                sum += arr[j];
            }
        }
        if (sum >= 2) {
            result += 1;
        }
       
    } cout << result;
}