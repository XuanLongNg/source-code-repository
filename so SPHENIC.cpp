#include<bits/stdc++.h>
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
long tim_uoc(long a)
{
	long i=2;
	if(sont(a)==1) return 0;
	else{
	int k=0,m=0;
	while (i<=a)
    {
        if (a%i==0)
        {
            k++;
            a=a/i; 
			m++; 
        }
        else{
			if(m==2){
		    return 0;
			break;
		    }else m=0;
            if (i%2==0) i++;
            else i+=2;  
	    }
		
    }
    if(k==3&&m<2) return 1;
    else return 0;
}
}
int main(){
	int n,i;
	long a[100];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		cout<<tim_uoc(a[i]);
		cout<<endl;
	}
}
