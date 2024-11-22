# include <iostream>//check whether number is prime or not
using namespace std;
int main()
{
	int no=0,fac=1;
	cin>>no;
	for(int a=1;a<=no;a++)
	{
		fac=fac*a;
	}
	cout<<fac<<endl;
	return 0;
	
	
}
