#include<iostream>
#include<math.h>
using namespace std;
long long uoc(long long a,long long b){
	if(b==0) return a;
	return uoc(b,a%b);
} 
int main(){
	int t;
	cin>>t;
	while(t--){
	int i;
	long long a,x,y;
	cin>>a>>x>>y;
	long long p=a,q=a;
	for(i=1;i<=uoc(x,y);i++)
	cout<<a;
	cout<<endl;
    }
}
