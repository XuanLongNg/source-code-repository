#include<iostream>
#include<math.h>
using namespace std;
float sont(int n){
	if(n<2) return 0;
	else
	{
	    for(int i=2;i<=sqrt(n);i++)
	        if(n%i==0) return 0;
	        return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		for(int i=4;i<=a;i++)
		{
			float k=i;
			if(sqrt(k)==(int)sqrt(k)&&sont(sqrt(k))==1)
		    cout<<i<<" ";
		}
		cout<<endl;
	}
}
