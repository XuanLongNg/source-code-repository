#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
#define rev(c) reverse(c.begin(),c.end())
#define ll long long
using namespace std;
ll Fac(int a){
	if(a==0) return 1;
	return a*Fac(a-1);
}
void Next_permutation(int *a,int n){
	int i=n-2;
	while(a[i]>a[i+1]) i--;
	int k=n-1;
	while(a[i]>a[k]) k--;
	swap(a[i],a[k]);
	int r=n-1,j=i+1;
	while(r>j){
	    swap(a[r],a[j]);
		r--;
		j++;
	}          
}
void Display(int a[20],int k){
	For(i,0,k) cout<<a[i];
	cout<<" ";
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;	
		cin>>n;
		int a[20];
		ll h=Fac(n);
		For(i,0,n) a[i]=i+1;
		For(i,0,h){
			Display(a,n);
			Next_permutation(a,n);
		}
		cout<<endl;	
	}
}
