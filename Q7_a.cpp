#include <iostream>
using namespace std;
int toBinary(int num, int extra);
int main() 
{
	int n,extra=0,a;
	cout<<"Enter The number :"<<endl;
	cin>>n;
	a=toBinary(n,extra);
	cout<<"number to the binary is :"<<a;
	return 0;
}
int toBinary(int num, int extra)
{
	if(num==0)
	return 0;
	else
		{
		int p=num%2;
		num=num/2;
		return toBinary(num,p) * 10 + p;
	}
	
}