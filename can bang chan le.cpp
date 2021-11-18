#include<iostream>
#include<math.h>
using namespace std;
int chanle(long n){
	long k=n, chan=0,le=0;
	while(n){
		if(n%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan==le){
	return 0;
    }else return 1;
}
int main(){
	int n;
	cin>>n;
	long i;
	int b=0;
	if(n%2==0)
	for(i=pow(10,n-1);i<=pow(10,n)-1;i++)
	{
	    if(chanle(i)==0)
	    {
	    	cout<<i<<" ";
	    	b++;
		}
	    if(b==10){
	    	cout<<endl;
	    	b=0;
		}
    }
}
