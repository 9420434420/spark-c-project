#include<iostream>
using namespace std;
class maximum
{
	private:
		int a,b;
		public:
			maximum();
			maximum(int x,int y);
			void display();
			
};
maximum::maximum()
{
	a=10;
	b=5;
}
maximum::maximum(int x,int y)
{
	a=x;
	b=y;
	
}
void maximum::display()
{
	if(a>b)
	{
		cout<<"\n a is greater and value of a is"<<a;
		
	}
	else
	{
		cout<<"\n b is greater and value of b is"<<b;
	}
}
main()
{
	maximum m1;
	cout<<"\n maximum m1";
	m1.display();
	maximum m2(32,54);
	cout<<"\n maximum m2";
	m2.display();
	
}
