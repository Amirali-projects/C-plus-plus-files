# include<iostream>
using namespace std;
int main()
{
	int i=1;
	int j=2;
	int k;
	  //1+2+1+2+2+3+4=15when post 
	  //increment occurs then add 1 to next value;  
	k=i+ j+ i++ + j++ +i + j+ ++j;
	cout<<k;
	
}
