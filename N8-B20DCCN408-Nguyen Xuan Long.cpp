#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
#define vec(c) vector<c>

using namespace std;
class hang{
	protected:
		int mahang;
		string tenhang;
		int gia;
	public:
    void nhap()
    {
        cin >> mahang>> tenhang>> gia;
    }
    void xem()
    {
        cout << "ma ";
        cout << mahang << endl;
        cout << "ten hang ";
        cout << tenhang << endl;
        cout << "gia ";
        cout << gia << endl;
    }
    int timma(){
    	return mahang;
	}
	int timgia(){
		return gia;
	}
	string timten(){
		return tenhang;
	}
	void ganma(){
		mahang=0;
	}
	void ganten(string k){
		tenhang=k;
	}
};
class banggia{
	private:
		vec(hang) dshang;
	public:	
	    void nhapbp(){
		    int n;
		    cin>>n;
		    hang x;
		    For(i,0,n){
			    x.nhap();
			    dshang.push_back(x);
		    }
	    }
	    void xemmh(){
	        For(i,0,dshang.size()){
			    dshang[i].xem();
		    }
	    }
	    hang timhang(int m)
        {
        	hang a;
        	For(i,0,dshang.size()){
        		if(m==dshang[i].timma())
        		return dshang[i];
			}
            hang x;
            x.ganma();
            return x;
        }
};
class hangdat: public hang{
	public:
	    int soluongdat;
        int thanhtien;
	    void nhapbp(banggia d){
            cin>>mahang;
			cin>>soluongdat;
			hang a=d.timhang(mahang);
			tenhang=a.timten();
			gia=a.timgia();
			thanhtien=soluongdat*a.timgia();
		}
		void xemmh(){
			cout<<mahang<<" "<<tenhang<<" "<<gia<<" "<<soluongdat<<" "<<thanhtien<<endl;
		}
};
class giohang{
	public:
		string khachhang;
		vec(hangdat) dshangdat;
		int tongtien=0;
		giohang(string k){
			khachhang=k;
		}
		void themhangdat(hangdat b){
			dshangdat.push_back(b);
			tongtien+=b.thanhtien;	
		}
		void xemmh(){
			cout<<khachhang<<" "<<tongtien<<endl;
			For(i,0,dshangdat.size()){
				dshangdat[i].xemmh();
				cout<<endl;
			}
		}
};

int main(){	
    banggia a; a.nhapbp(); a.xemmh(); 
    hangdat b,c;b.nhapbp(a); c.nhapbp(a); c.xemmh();
    char kh[30];fflush(stdin);cout<<"\n Khach hang:";cin.getline(kh,30);fflush(stdin);
    giohang d(kh); d.themhangdat(b); d.themhangdat(c); d.xemmh(); 
   
}

