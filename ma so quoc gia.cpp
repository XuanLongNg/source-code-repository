#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		char a[20];
		cin>>a;
		int i;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='0'&&a[i+1]=='8'&&a[i+2]=='4')
			i+=2;
			else cout<<a[i];
		}
		cout<<endl;	
	}
}
