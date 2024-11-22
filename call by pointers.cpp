# include <iostream>//call by pointers or pass by address
using namespace std;
void Amir(int *x,int *y){

int z=*x;
*x=*y;
*y=z;
}
int main()
{
	int a;
	int b;
	cin>>a>>b;

	Amir(&a,&b);
    cout<<a<<b;


 } 
 
