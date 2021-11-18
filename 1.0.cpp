#include<bits/stdc++.h>
using namespace std;
int main(){
	char k;
    long n,i=2;
    string a;
    cin>>n>>k;
    i=k-'A';
    a[i]='A'+i;
    n=0;
    n+=i;
    k=n+'A';
    cout<<a[i]<<endl;
    cout<<i<<" "<<n<<" "<<k;
}
