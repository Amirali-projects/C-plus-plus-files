# include <iostream>
using namespace std;
int main()
{
	int n,j;
	cout<<"Enter the value of n and j";
	cin>>n;
	for(j=1;j<=10;++j)
	{
     if(n%j==0)
     cout<<j;
	}
 } 
