#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int stop=false;
int giaithua(int a){
    if(a==1) return 1;
    return giaithua(a-1)*a;
}
void Next_permutation(int *a, int n){
    int j,k,r,s,temp;
    j=n-2;
    while(a[j] < a[j+1] && j >= 0) j--;
    if(j<0){ stop=true;}
    else{ 
        k=n-1;
        while (a[j] < a[k]) {
            k--;  
	    }
	    swap(a[j],a[k]);
        r=j+1; s=n-1;
        while(r<s){
	        swap(a[r],a[s]);
            r++;
		    s--;
	    }
    }
}
void xuat(int a[1000], int n){
    int i;
    f(i,n) cout<<a[i];
    cout<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[1000],b[1000];
        for(int i=n-1;i>=0;i--) a[n-i-1]=i+1;
        f(i,giaithua(n)){
            xuat(a,n);
            Next_permutation(a,n);
        }	
        cout<<endl;
    }
}
