#include<iostream> 
using namespace std; 
int main() { 
    int t ; 
	cin >> t; 
	while(t--) { 
	    long long a[1000], n,b[1000]; 
		cin >> n; 
		for(int i = 0; i <n; i++){
		cin>>a[i];
		b[i]=a[i];
	    }
		for(int i = 0; i <n; i++)
		{
			if(a[i]>=0&&a[i]<=n-1)
			{
				int j;
				j=a[i];
				b[j]=j;
			}
		}
		for(int i = 0; i <n; i++)
		if(b[i]>=0&&b[i]<=n-1&&b[i]==i)
		cout <<b[i]<<" ";
		else cout<<"-1 ";
		cout<<endl;
	} 
}
