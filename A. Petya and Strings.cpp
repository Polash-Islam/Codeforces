#include<iostream>
#include<cstring>

using namespace std;

int main ()

{  string a,b;

    cin>>a>>b;

    int len=a.length();


   /* if (len<len2) cout<<"-1"<<endl;
     else if (len>len2) cout<<"1"<<endl;

     else cout<<"0"<<endl;

*/ for (int i=0;i<len;i++){

     a[i]=tolower(a[i]);
     b[i]=tolower(b[i]);
}
if(a==b)
        cout << "0" << endl;
     else{
        for(int i=0;i<len;i++){
            if(a[i]<b[i]){
                cout << "-1" << endl;
                break;
            }
            if(a[i]>b[i]){
                cout << "1" << endl;
                break;
            }
        }
     }



    return 0;
}
