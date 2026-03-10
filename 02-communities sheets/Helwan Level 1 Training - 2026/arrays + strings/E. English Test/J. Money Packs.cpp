#include <iostream>
using namespace std;

int main()
{
   long long N,M;
   cin>>N>>M;
    int arr[M];
    long long sum=0;
    for(int i=0;i<M;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
   while((N-1)>0){
    long long sum2=0;
    int ss[M];
    for(int i=0;i<M;i++){
        cin>>ss[i];
        sum2+=ss[i];
    }
    if(sum2>sum){
        sum=sum2;
    }
    N--;

   }cout<<sum;
}

