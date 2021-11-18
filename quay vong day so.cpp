#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		long a,b,i;
		cin>>a>>b;
		long c[a];
	    for(i=1;i<=a;i++)
	    cin>>c[i];
	    for(i=b+1;i<=a;i++)
	    cout<<c[i]<<" ";
	    for(i=1;i<=b;i++)
	    cout<<c[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
