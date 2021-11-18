#include<bits/stdc++.h>
using namespace std;
int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
	int cs=0;
    for(int i=0;i<numerators.size();i++){
    	if(numerators[i]*denominators[cs]>numerators[cs]*denominators[i]){
    		cs=i;
		}
	}
    return cs;
}
int main(){
	vector<int> numerators={1,2,3};
    vector<int> denominators={3,4,7};
	cout<<maxFraction(numerators,denominators);
}
