#include <iostream>
using namespace std;

int main()
{
   long long t;
   cin>>t;
   while(t--){
    int q;
    cin>>q;
    int arr[10];
    for(int i=0;i<10;i++){
       cin>>arr[i];
    }
    int result=arr[0];
    while(q>1){
      result = arr[result];
      q--;
    }
   cout<<result<<"\n";
   }
   

}
