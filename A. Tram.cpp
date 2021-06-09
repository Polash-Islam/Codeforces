#include<iostream>
using namespace std;

int main ()
{

    int t;
    int a,b,sum=0,k=0;
    cin>>t;
    while (t--){
        cin>>a>>b;
        sum=(a+k)-b;
        if (sum<0){
            k=0;
        }
        else k=sum;
    }
    cout<<sum;
}
