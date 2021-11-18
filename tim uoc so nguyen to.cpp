#include<iostream>
#include<math.h>
using namespace std;
int sont(int n){
	if(n<2) return 0;
	else if(n==2) return 1;
	else
	{
		if(n%2==0) return 1;
		else
	    for(int i=3;i<=sqrt(n);i+=2)
	        if(n%i==0) return 0;
	        return 1;
	}
}
long tim_uoc(long a)
{
	long i=2,m=a;
	if(sont(a)==1) cout<<a;
	else{
	while (i<=a)
    {
        if (a%i==0)
        {
            cout<<i<<" ";
            a=a/i;  
        }
        else
        if (i%2==0) i++;
        else i+=2;  
    }
}
}
int main(){
	int n,i;
	long a[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		tim_uoc(a[i]);
		cout<<endl;
	}
}
