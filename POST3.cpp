#include <iostream>
using namespace std;
class tong{
	int a,b;
	public:
		tong(int a1,int b1){
			a=a1;
			b=b1;
		}
		void in(){
			cout<<this->a+this->b<<endl;
		}
};
int main(){
	int a;
	int b;
	cout<<"Nhap 2 so A va B:"<<endl;
	cin>>a>>b;
	tong x(a,b);
	x.in();
}
