#include <iostream>
using namespace std;
int toOctal(int num, int extra);
int main() 
{
	int n,extra=0,a;
	cout<<"Enter The number :"<<endl;
	cin>>n;
	a=toOctal(n,extra);
	cout<<"number to the octal is :"<<a;
	return 0;
}
int toOctal(int num, int extra)
{
	if(num==0)
	return 0;
	else
		{
		int p=num%8;
		num=num/8;
		return toOctal(num,p) * 10 + p;
	}
	
}

