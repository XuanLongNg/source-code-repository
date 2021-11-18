#include<bits/stdc++.h>
using namespace std;
struct ThoiGian{
    int hour;
    int minute;
    int second;
    int sumofsecond;
};
void nhapThoiGian(ThoiGian &p){
    cin>>p.hour;   
    cin>>p.minute;
    cin>>p.second;
    p.sumofsecond=p.hour*60*60+p.minute*60+p.second;
}
bool comp(ThoiGian p,ThoiGian q){
	return p.sumofsecond<q.sumofsecond;
}
int main(){
    struct ThoiGian a[10000];
    long n;
    cin>>n; 
    for(int i=0;i<n;i++) nhapThoiGian(a[i]);  
    sort(a,a+n,comp);   
    for(int i=0;i<n;i++) cout<<a[i].hour<<" "<<a[i].minute<<" "<<a[i].second<<endl;
    return 0;
}
