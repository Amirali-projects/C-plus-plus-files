# include<iostream>
using namespace std;
int main()
{
	float quantity,rate,discount=0,total;
	cout<<"enter quantity and rate";
	cin>>quantity>>rate;
	if(quantity>1000)
	discount=10;
    total=(quantity*rate)-(quantity*rate*discount)/100;
	cout<<total<<endl;
	if(quantity<1000)
	{
		cout<<"no discount available";
	}
	
	
}

