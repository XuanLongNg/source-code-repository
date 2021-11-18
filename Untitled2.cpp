#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int N,P;
		cin>>N;
		cin>>P;
		int x=0;
		for(int i=P;i<=N;i++){
			if(i%P==0){
				x+=1;
			}
		}
		int y = 0;
		for(int j=1;j<=P;j++){
			if(pow(P,j)<=N){
				y = j;
			}
			else{
				break;
			}
		}
		for(int j=0;j<y;j++){
			x += j;
		}
		cout<<x<<endl;
	}
}
