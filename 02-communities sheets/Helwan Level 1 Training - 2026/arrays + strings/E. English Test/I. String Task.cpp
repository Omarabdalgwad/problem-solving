#include <iostream>
using namespace std;

int main()
{
   string X,Y;
   cin >> X>>Y;
   sort(X.begin(), X.end());
   sort(Y.begin(), Y.end());
   if(X>Y){
     cout<<Y;
   }else cout<<X;
   

}

