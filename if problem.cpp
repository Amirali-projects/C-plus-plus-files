# include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,marks,percentage;
	cout<<"Enter the value of marks"<<endl;
	cin>>a>>b>>c>>d>>e;
	percentage=a+b+c+d+e/5;
	cout<<percentage;
	if(percentage>=60)
	{
		cout<<"First devision";
	}
	if((percentage>=50)&&(percentage>=59))
	{
		cout<<"second devision";
	}
	else
	{
		cout<<"failed";
	}
}
