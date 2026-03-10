#include <iostream>
using namespace std;

int main()
{
   long long N;
   cin>>N;
   long long arr[N];
   for(int i=1;i<=N;i++){
     cin>>arr[i];
   }
   long long sum=LLONG_MIN;
   for(int j=2;j<=N;j++){
      for(int i=1;i<j;i++){
          long long sum2=0;
          sum2+=((arr[i]*i)-(arr[j]*j));
          if(sum2>sum){
             sum=sum2;
            }
        }
      
    }cout<<sum;
   
}

