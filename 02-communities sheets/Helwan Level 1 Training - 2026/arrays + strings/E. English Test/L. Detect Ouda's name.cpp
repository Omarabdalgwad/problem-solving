#include <iostream>
using namespace std;

int main()
{
   string S;
   cin>>S;
   for(int i=0;i<S.size();i++){
    string c="";
    if(S[i]=='O'){
        c+=S[i+1];
        c+=S[i+2];
        c+=S[i+3];
        if(c=="uda"){
           cout<<"YES"; return 0;
        }
    }
   }cout<<"NO";
   
}

