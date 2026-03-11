#include <iostream>
using namespace std;

int main()
{
   long long N;
   cin>>N;

   long long f1=0;
   long long f2=1;
    if(N==1){
      cout<<3;
    }else if(N==2){ 
        cout<<4;
    }else{
        long long sum=2;
        for(int i=0;i<=N;i++){
           long long f3=f1+f2;
           f1=f2;
           f2=f3;
           if(f3>N){
           break;
           }
           sum++;
     
        }cout<<sum;
   
    }
}