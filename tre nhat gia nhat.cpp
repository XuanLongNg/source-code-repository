#include<iostream>
#include<algorithm>
using namespace std;
struct human{
    string name;
    string date;
};
void nhapds(human &p){
    cin>>p.name;
    cin>>p.date;
}
string chiatuoi(string a){
    string b;
    for(int i=6;i<10;i++)
    b+=a[i];
    b+=a[3];
    b+=a[4];
    b+=a[0];
    b+=a[1];
    return b;
}
bool tre_gia(human p,human q){
    return chiatuoi(p.date)>chiatuoi(q.date);
}
int main(){
    human ds[50];
	int n;
    cin>>n;
    for(int i=0;i<n;i++)
    nhapds(ds[i]);
    sort(ds,ds+n,tre_gia);
    cout<<ds[0].name<<endl;
    cout<<ds[n-1].name<<endl;
}
