/*------CPP------*/
#include <bits/stdc++.h>
using namespace std;
/* C1:sử dụng reverse của algorithm*/
int main(){
    string a;
    getline(cin,a);
    reverse(a.begin(),a.end());
    cout<<a;
}
/* C2: đảo ngược vòng for */
int main(){
    string a;
    getline(cin,a);
    for(int i=a.size()-1;i>=0;i--) cout<<a[i];
}
//hoặc
int main(){
    string a,b;
    getline(cin,a);
    for(int i=a.size()-1;i>=0;i--) b+=a[i];
    cout<<b;
}
/* C3: sử dụng stack như đề*/