#include<iostream>

using namespace std;

int main ()
{   string a;
string b="hello";
 int p=0,count=0;
cin >>a;
 int len=a.size();

 for (int i=0;i<len;i++){
    if (a[i]==b[p]){
        p++;
        count++;
    }
 }
 if (count==5)cout<<"YES"<<endl;
 else cout <<"NO"<<endl;


    return 0;
}
