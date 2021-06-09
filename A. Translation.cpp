#include<iostream>
#include<cstring>
using namespace std;

 int main()
{

    char a[101],b[101];
    int r;
    cin>>a>>b;
    {

        r=strcmp(a,strrev(b));
        if(r==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
