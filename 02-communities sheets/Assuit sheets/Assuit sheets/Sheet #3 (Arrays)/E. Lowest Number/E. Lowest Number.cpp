#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  int min = *min_element(arr+0,arr+N);

  for(int i=0;i<N;i++){
    if(arr[i]==min){
        cout<<min<<" "<<i+1; return 0;
    }
  }
  
