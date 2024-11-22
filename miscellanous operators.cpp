# include <iostream>
using namespace std;
int main()

{
	
	int r=(7,8,9);// operator 3in comma operator only ending value will printed 
	int  a=436;int b=5;
	int *d=&a;
	char ch='b';
cout<<sizeof(a)<<"\t"; //operator 1
int c=a>b?a-b:b-a;// operator2 conditional or ternary operator. 
cout<<c<<endl;
cout<<float(ch)<<endl;//operator4 cast operator is used to convert one datatype to other.
cout<<r<<endl;
cout<<&a<<endl;//operator 4
cout<<*d;//operator 4;
}
