#include <iostream>
using namespace std;
class circle
{
private :
	double * radius;
	double area;
	const double pi;
public :
	circle() :pi(3.14)
	{
		cout << " DEFAULT   constructor called    ";
		radius = new double;
		*radius = 0.0;
	
		cout << radius;
		area = 0.0;
		cout << endl;
	}
	circle( double r,double a ) :pi(3.14)
	{
		cout << "parmaterized constructor called    ";
	
		radius = new double;
		*radius = r;
	
		cout << radius;
		area = a;
		cout << endl;
	}
	void setvalues(int r, int a)
	{
		*radius = r;
		area = a;
	}
	double getvalue()
	{
		return *radius;
	}

	~circle()
	{
		cout << " i m descructor    ";
	
		cout << radius;
		
		delete radius;
		
		radius = nullptr;
		cout << endl;
	 }
 };
int main()
{
	int x;
	int y;
	circle c[4];
	circle c2[3] = { circle{ 4.2, 7} };
	circle* ptr = new circle[3];
	cout << endl;
	cout << ptr;
	for (int i = 0; i < 3; i++)
	{
		x = 2;
		y = 4;
		ptr[i].setvalues(x, y);
	}
	for (int i = 0; i < 3; i++)
	{
		cout<<ptr[i].getvalue();
	}
	delete[]ptr;
	
}