/*
Implement a class Complex which represents the Complex Number data
type. Implement the following 1. Constructor (including a default constructor which creates the
complex number 0+0i). 2. Overload operator+ to add two complex numbers. 3. Overload
operator* to multiply two complex numbers. 4. Overload operators << and >> to print and read
Complex Numbers.
*/

#include<iostream>
using namespace std;

class complex
{

	public:
		float x,y;
		complex()
		{
			x=0;
			y=0;
		}
		complex operator +(complex c);
		complex operator *(complex c);

		friend istream& operator >>(istream &in, complex &t)
		{
			cout<<"enter the real part"<<endl;
			in>>t.x;
			cout<<"enter the img part"<<endl;
			in>>t.y;
		}
		friend ostream& operator <<(ostream &out, complex &t)
		{
			out<<t.x<<"+"<<t.y<<"i";

		}

};

complex complex::operator +(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return (temp);
}

complex complex::operator *(complex c)
{
	complex temp2;
	temp2.x=(c.x*x)-(c.y*y);
	temp2.y=(c.y*x)+(c.x*y);
	return (temp2);
}

int main()
{
	complex c1,c2,c3,c4;
	cout<<"enter the first no. "<<endl;
	cin>>c1;

	cout<<"enter the second no. "<<endl;
	cin>>c2;

	cout<<c1<<endl;
	cout<<c2<<endl;

	c3=c1+c2;
	cout<<"addition is "<<c3<<endl;

	c4=c1*c2;
	cout<<"multition is "<<c4<<endl;

	return 0;
}
