#include<iostream>

using namespace std;

 int main(){
	long n;
	while(cin>>n){
		long sum=0,x,y,z;
		for(int i=0;i<n;i++){
			cin>>x>>y>>z;
			if(x+y+z>=2)sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
