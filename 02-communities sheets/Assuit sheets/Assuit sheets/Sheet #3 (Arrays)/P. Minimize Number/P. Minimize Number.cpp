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
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 != 0) {
            cout << 0;
            return 0;
        }
        else {
            
                arr[i] /= 2;
                sum++;

            
        }
    }
    
    cout << sum;
}


