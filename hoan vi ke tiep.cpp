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
    while(a[j] > a[j+1] && j >= 0) j--;
    if(j<0){ stop=true;}
    else{ 
        k=n-1;
        while (a[j] > a[k]) {
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
    f(i,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,r=0;
        cin>>n;
        int a[1000],b[1000];
        f(i,n) cin>>a[i];
        f(i,n) b[i]=n-i;
        f(i,n) if(a[i]!=b[i]) r=1;
        if(r==1){
            Next_permutation(a,n);
		    xuat(a,n);
        }
        else{
            f(i,n) a[i]=i+1;
            xuat(a,n);
        }
        
    }
}
