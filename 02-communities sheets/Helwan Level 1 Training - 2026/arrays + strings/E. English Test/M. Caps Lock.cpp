#include <iostream>
using namespace std;

int main()
{
   string S;
   getline(cin, S);
   for(int i=0;i<S.size();i++){
      if(isupper(S[i])){
        S[i]=tolower(S[i]);
      }else S[i]=toupper(S[i]);
   }cout<<S;
   
}

