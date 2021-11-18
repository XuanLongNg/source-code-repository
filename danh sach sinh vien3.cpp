#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string masv;
	string name;
    string class1;
    string date;
    float gpa;
};
void nhap(SinhVien *p,int n){
    scanf("\n");
    for(int i=0;i<n;i++){
        scanf("\n");
        getline(cin,p[i].name);
        cin>>p[i].class1;
        cin>>p[i].date;
        cin>>p[i].gpa;
        if(i<9){
            p[i].masv+="B20DCCN00";
            p[i].masv+=((i+1)+'0');
        }
        else{
            p[i].masv+="B20DCCN0";
            int n=i;
            ++n;
            char a[2];
            int j=0;
            while(n){
                a[j]=n%10+'0';
                n/=10;
                j++;
            }
            p[i].masv.push_back(a[1]);
            p[i].masv.push_back(a[0]);
        }  
        cin.ignore();
    }  
}
void chuanhoa(SinhVien &p){
    if(p.date[2]!='/') p.date.insert(0,"0");
    if(p.date[5]!='/') p.date.insert(3,"0");
    stringstream ss(p.name);
    string token,name;
    while(ss>>token){
        name+=token;
        name+=" ";
    }
    p.name=name;
    for(int i=0;i<p.name.size();i++){
        if(p.name[i]>='A'&&p.name[i]<='Z') p.name[i]+=32;
    }
    p.name[0]-=32;
    for(int i=0;i<p.name.size();i++){
        if(p.name[i]==' '&&p.name[i+1]!='\0') p.name[i+1]-=32;
    }
}
void sapxep(SinhVien *p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        if(p[i].gpa<p[j].gpa)
        swap(p[i],p[j]);
    }
}
void in(SinhVien *p,int n){ 
    for(int i=0;i<n;i++){
        chuanhoa(p[i]);         
        cout<<p[i].masv<<" "<<p[i].name<<p[i].class1<<" "<<p[i].date<<" ";
        cout<<fixed<<setprecision(2)<<p[i].gpa;
        cout<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}