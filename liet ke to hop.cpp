#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
#define rev(c) reverse(c.begin(),c.end())
#define ll long long
using namespace std;
ll Fac(int a){
	if(a==0) return 1;
	return a*Fac(a-1);
}
void Next_combination(int *a,int k,int n){
	int i=k-1;
	while(a[i]==n-k+i+1) i--;
	a[i]++;
	for(int j=i+1;j<k;j++){
		a[j]=a[i]-i+j;
	}
}
void Display(int a[20],int k){
	For(i,0,k) cout<<a[i];
	cout<<" ";
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;	
		cin>>n>>k;
		int a[20];
		ll h=Fac(n)/(Fac(k)*Fac(n-k));
		For(i,0,k) a[i]=i+1;
		For(i,0,h){
			Display(a,k);
			Next_combination(a,k,n);
		}
		cout<<endl;	
	}
}
