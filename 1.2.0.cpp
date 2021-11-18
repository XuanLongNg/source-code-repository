#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void ptr(int &a){
	a++;
}
int main()
{
	int a,b;
	b=a;
	cin>>a;
	ptr(a);
	cout<<&a<<" "<<&b<<endl;
	cout<<*(&a)<<" "<<*(&b)<<endl;
	system("pause");
	getch();
	return 0;
}
