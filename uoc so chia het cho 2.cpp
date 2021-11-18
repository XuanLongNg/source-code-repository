#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,k=0;
		cin>>a;
		if(a%2!=0) cout<<k<<endl;
		else
		for(int i=2;i<=a;i++){
			if(a%i==0&&i%2==0)
			k++;
		}
		cout<<k<<endl;
	}
}
