#include <bits/stdc++.h>
using namespace std;
long FacA(long long n){
	long long k=1,g=10;
	for(long long i=1;i<=n;i++){
		k*=i;
		if(k%g==0) g*=10;
		k%=g;
	}
	return k;
}
int lastDigitDiffZero(long n)
{
    long k=FacA(n);
    while(k%10==0)
    k/=10;
    return k%10;

}
int main(){
	long long a;
	cin>>a;
	for(int i=1;i<=a;i++)
	cout<<lastDigitDiffZero(i)<<endl;
}
