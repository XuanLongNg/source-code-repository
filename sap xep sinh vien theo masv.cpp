#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
    string masv;
    string name;
    string Class;
    string email;
    SinhVien* next; 
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
bool sort_by_studentcode(SinhVien a,SinhVien b){
    return a.masv<b.masv;
}
int main(){
    vector<SinhVien> ds;
    SinhVien a;
    int i=0;
    while(cin>>a){
    	ds.push_back(a);
    	i++;
	}
    sort(ds.begin(),ds.end(),sort_by_studentcode);
    vector<SinhVien>::iterator j;
    for(j=ds.begin();j<ds.end();j++)
    cout<<j->masv<<" "<<j->name<<" "<<j->Class<<" "<<j->email<<endl;
}

