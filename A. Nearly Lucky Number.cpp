 #include<iostream>
using namespace std;

int main ()
{   string a;

cin>>a;
int len=a.size();
int count =0;
for (int i=0;i<len;i++){
    if (a[i]=='4' || a[i]=='7'){
        count++;
    }
}
if (count==7 || count ==4){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;



    return 0;
}
