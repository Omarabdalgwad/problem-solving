#include <iostream>
using namespace std;

int main()
{
   string S;
   cin>>S;
   int c=0;
   char AA='A';
   char aa='a';
   for(int i=0;i<S.size();i++){
    if(S[i]==AA || S[i]==aa){
        c++;
    }
   }cout<<c;

}

