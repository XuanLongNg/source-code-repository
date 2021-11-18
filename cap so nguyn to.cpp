#include<iostream>
#include<math.h>
using namespace std;
int sont(int n){
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
		for(int i=2;i<=a;i++)
		if(sont(i)==1){
			int m=a-i;
			if(sont(m)==1)
			{
				cout<<i<<" "<<m<<endl;
				break;
			}
		}
	}
}
