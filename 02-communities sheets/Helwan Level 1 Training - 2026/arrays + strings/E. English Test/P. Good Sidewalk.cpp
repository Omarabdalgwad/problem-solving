#include <iostream>
using namespace std;

int main()
{
   long long T;
   cin>>T;
   while(T--){
        string S;
        cin>>S;
        bool f=false;
        for(int i=1;i<S.size();i++){
            if(S[i]!='0' && S[i]!='1'){
               f=true;
               break;
            }
            else if(S[i-1]==S[i]){
                f=true;
                break;
            }
        } if(f==false){
            cout<<"Good\n";
        }else if(f==true){
            cout<<"Bad\n";
        }
    }
}