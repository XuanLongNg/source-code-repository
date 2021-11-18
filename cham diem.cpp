#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	char A='A',B='B',C='C',D='D';
	char a[15]={A,B,B,A,D,C,C,A,B,D,C,C,A,B,D},b[15]={A,C,C,A,B,C,D,D,B,B,C,D,D,B,B};
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		int x;
		float k=0,r=2,t=3;
		char g[15];
		cin>>x;
		int i;
		for(i=0;i<=14;i++)
		cin>>g[i];
		if(x==101)
		{
		    for(i=0;i<=14;i++)
		    {
			    if(g[i]==a[i]) k++;
		    }
		    cout<<setprecision (2)<<fixed<<k*r/t<<endl;
			}
		else{
		    for(i=0;i<=14;i++)
		    {  
			    if(g[i]==b[i]) k++;
		    }
		    cout<<setprecision (2)<<fixed<<k*r/t<<endl;
		}
	}
}
