#include<iostream>
#include<math.h>
using namespace std;

int kiemTraSoNguyenTo(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if (x%j==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=2; i<n; i++)
		{
			if(kiemTraSoNguyenTo(i))
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
