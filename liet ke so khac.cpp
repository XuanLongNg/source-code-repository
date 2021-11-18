#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[1000], int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int term=a[i];
				a[i]=a[j];
				a[j]=term;
			}
		}
	}
}
int main(){
	int n,a[1000];
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	cin>>a[i];
	sapxep(a,n);
	for(i=0;i<n;i++){
		if(a[i]!=a[i+1])
		cout<<a[i]<<" ";
	}
}

