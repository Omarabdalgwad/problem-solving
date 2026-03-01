
#include <iostream>
using namespace std;

int main()
{
   int N;
   cin>>N;
   int a[100000];
   bool p=true;
   for(int i=0;i<N;i++){
    cin>>a[i];
   }
   for(int i=0;i<N/2;i++){
    if(a[i]!=a[N-1-i]){
        p=false;
        break;
    }
   }

   if(p)cout<< "YES"; else cout<< "NO";

}

