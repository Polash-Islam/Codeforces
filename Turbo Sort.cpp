#include<iostream>

using namespace std;

int main ()
{
    int arr[1000001]={0},i,j,a,n;

    while(cin>>n){


    for (i=0; i<n; i++)
    {
        cin>>a;
        arr[a]++;
    }



    for (i=0; i<=n; i++)
    {
        a=arr[i];
        for (j=1; j<=a; j++)
        {
            cout<<i<<endl;
        }
    }
    }




    return 0;
}
