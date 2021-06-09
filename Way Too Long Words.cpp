#include<iostream>
#include<string.h>

using namespace std;
int main ()
{   int t;
 char a[100];

 cin>>t;
 while (t--){

     cin>>a;
     int len=strlen(a);

         if (len>10){
            int p=len-2;

            cout<<a[0]<<p<<a[len-1]<<endl;
                    }
                    else {
                        cout<<a<<endl;
                    }
 }





    return 0;
}
