
#include<iostream>

using namespace std;

int main ()
{   long long int  n,k;
 long long int  rem,sum;
  cin>>n>>k;
  for(int i=0;i<k;i++){
    rem=n%10;

    if (rem==0){
        sum=n/10;
    }
    else {
        sum=n-1;
    }
    n=sum;
    //cout<<rem;
  }cout<<sum<<endl;;


    return 0;
}
