#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long N,b;
    cin>>N;
    
    while(N--){
        cin>>b;
        long long c = 0;
        long long count = 0;
        while (b > 0) {
            if (b % 2 == 1) {
                count++;
                for (int i = 0; i < count; i++) {
                    if (i == count - 1) {       
                        c += (long long)pow(2, i);
                    }
                }
                
            } b /= 2;
        }cout << c << endl;
    }
}

