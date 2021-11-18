#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
    string masv;
    string name;
    string Class;
    string email;
    SinhVien(){}
    ~SinhVien(){}
    friend istream &operator>>(istream &is,SinhVien &p){
        is>>p.masv;
        scanf("\n");
        getline(is,p.name);
        is>>p.Class;
        is>>p.email;
        return is;
    }
};
int main(){
    SinhVien ds[1000];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    int n;
    string class1[1000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>class1[i];
    i=0;
    while(i!=n){
        cout<<"DANH SACH SINH VIEN LOP "<<class1[i]<<":"<<endl;
        for(auto ss:ds){
            if(ss.Class==class1[i]){
            cout<<ss.masv<<" "<<ss.name<<" "<<ss.Class<<" "<<ss.email<<endl;  
            }
        }
        i++;
    }
    return 0;
}
