#include<iostream>
using namespace std;
static int ans=0;
class convert//abstract class
{
protected:
	int val1,val2;
public:
	void getinit()
{
	cin>>val1>>val2;
}
	void getconvert()
	{
	cout<<"the converted value is "<<ans<<endl;
	}
	virtual void compute()=0;//pure virtual function
};
class length_into_area:public convert
{
public:
	virtual void compute()
	{
		cout<<"Enter the height and breath of triangle"<<endl;
		convert::getinit();
		ans=0.5*val1*val2;
		convert::getconvert();
        }
};
class length:public convert
{
public:
	virtual void compute()
	{	
		cout<<"Enter the length and breadth of rectangle"<<endl;
		convert::getinit();
		ans=val1*val2;
		convert::getconvert();
	}
};
int main()
{
length_into_area t;
t.compute();
length l;
l.compute();
//t.getdata();
}
