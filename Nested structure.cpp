# include<iostream>
using namespace std;
struct hello{
	int a;
	int b;
	float c;
}h1;
struct classe{
	float f;
	hello h2;//used to connect it with hello structure
};
int main()
{
	classe c1;
	c1.f=45;
	c1.h2.a=56;
	{
		cout<<c1.f;
		cout<<c1.h2.a;
	}
}
