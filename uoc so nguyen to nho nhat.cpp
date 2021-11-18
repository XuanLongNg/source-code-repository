#include<iostream>
#include<math.h>
using namespace std;
long sont(long n){
	if(n<2) return 0;
	else
	{
	    for(long i=2;i<=sqrt(n);i++)
	        if(n%i==0) return 0;
	        return 1;
	}
}
int timuoc(int a){
	for(int i=2;i<=a;i++){
		if(sont(i)==1&&a%i==0)
		{
			return i;
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<"1 ";
		for(int i=2;i<=a;i++){
			if(sont(i)==1) cout<<i<<" ";
			else
				cout<<timuoc(i)<<" ";
		}
		cout<<endl;
    }
}

