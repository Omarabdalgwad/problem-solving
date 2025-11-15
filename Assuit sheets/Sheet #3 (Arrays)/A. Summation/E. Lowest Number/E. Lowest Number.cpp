#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int>arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int low = arr[0];
    int p = 1;

    for (int i = 0; i < N; i++) {
        if (arr[i] < low) {
            low = arr[i];
            p = i + 1;
        }

    }cout << low << " " << p;

}

