#include<iostream>
using namespace std;
int tach(int a){
	int k=0;
	while(a)
	{
		if(a%10==0||a%10==6||a%10==8){
			k=0;
		}else{
			k=1;
			break;
		}
		a/=10;
	}
	return k;
}
int main(){
	int n,i;
	long a[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	if(tach(a[i])==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
