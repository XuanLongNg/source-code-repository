#include<iostream>
#include<math.h>
using namespace std;
int sont(int a){
	int i;
	if(a<2) return 0;
	else{
		int k=0;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0){
			   k++;
			   break;
		    }	
			else k=0;
		}
		if(k==0) return 1;
		else return 0;
	}
}
int  uoc(int a,int b)
{
	if (b == 0) return a;
    return uoc(b, a % b);
}
int ngto(int a){
	int k=0;
	k+=a-1;
	for(int i=2;i<a;i++){
		for(int j=i+1;j<=a;j++)
		{
			if(uoc(i,j)==1)
			k++;
		}
	}
	if(sont(k)==1) cout<<"1"<<endl;
	else cout<<"0"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,k=0,i;
		cin>>a;
		ngto(a);
	}
}
