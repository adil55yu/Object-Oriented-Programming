#include <iostream>
using namespace std;

class box{
	public:
	int l;
	int*w;
	
	box(){
		w=new int;
	}
	void display(){
		cout<<*w<<endl<<l<<endl<<endl;
	}
};
int main()
{
	box b1;
	*b1.w=4;
	b1.l=5;
	box b2=b1;
	b1.display();
	b2.display();
	*b1.w=25;
	b1.l=60;
	b1.display();
	b2.display();
}