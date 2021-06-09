#include<iostream>
using namespace std;

int main ()


{   int a;

  int polash[]={4,7,47,74,44,444,447,474,477,777,774,744};
     int p=0;
  cin >>a;

  for (int i=0;i<12;i++){
    if (a%polash[i]==0){
        p=1;
    }
  }
  if (p==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

    return 0;
}
