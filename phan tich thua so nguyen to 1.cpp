#include<iostream>
#include<math.h>
using namespace std;
void phantich(int a,int b[1000],int c[1000],int &h){
	int i=2;
	while(i<=sqrt(a)){
		int k=0;
		while(a%i==0){
			k++;
			a/=i;
		}
		if(k>0)
		{
			b[h]=i;
			c[h]=k;
			h++;
		}
		if(i%2==0) i++;
		else i+=2;
	}
	if(a>1){
		b[h]=a;
		c[h]=1;
	}else h--;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,b[1000],c[1000],h=0;
		cin>>n;
		phantich(n,b,c,h);
		for(i=0;i<=h;i++){
			cout<<b[i]<<" "<<c[i]<<" ";
		}
		cout<<endl;
	}
}
