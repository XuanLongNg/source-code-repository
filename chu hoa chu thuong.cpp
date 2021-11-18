#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--)
	{
		char h;
		cin>>h;
		if(h>='A'&&h<='Z') h+=32;
		else if(h>='a'&&h<='z') h-=32;
		cout<<h<<endl;
	}
}
