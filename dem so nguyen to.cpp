#include<bits/stdc++.h>
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
int demsont(long a,long b){
	long i,k=0;
	for(i=a;i<=b;i++){
		if(sont(i)==1) k++;
	}
    return k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a,b;
		cin>>a>>b;
		cout<<demsont(a,b)<<endl;
	}
}
