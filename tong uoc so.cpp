#include<bits/stdc++.h>
using namespace std;
long uoc(long n){
	long i=2,sum=1,a=n;
    while(i<=sqrt(a)){
		int k=0,h=0;
		while(a%i==0){
			k++;
			a/=i;
		}
		for(int j=0;j<=k;j++) h+=pow(i,j);
		sum*=h;
		if(i%2==0) i++;
		else i+=2;
	}
	if(a>1) sum*=a+1;
	sum-=n;
	return sum;
}
int main(){
    long a,b,sum=0;
    cin>>a>>b;
    for(long i=a;i<=b;i++){
        if(uoc(i)>i) sum++;
    }
    cout<<sum;
}
