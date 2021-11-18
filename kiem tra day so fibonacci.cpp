#include<iostream>
#include<math.h>
using namespace std;
int fibonacci(int a){
	int x0=0,x1=1,x2=1,i,h=0;
	if(a==0) return 1;
	else{
	for(i=0;x2<=a;i++)
	{
		x0=x1;
		x1=x2;
		x2=x0+x1;
		if(x2==a||x0==a||x1==a)
		{
			return 1;
			h++;
			break;
		}
	} 
	if(h==0) return 0;
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000];
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		for(int i=1;i<=n;i++)
		if(fibonacci(a[i])==1) cout<<a[i]<<" ";
		cout<<endl;
	}
}
