#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	cout<<" Por favor ingrese dos enteros: ";
	cin>>a>>b;
	if(a<b)
	{
		cout<<"max("<<a<<","<<b<<") is "<<b<<endl;
	}
	else
		cout<<"max("<<a<<","<<b<<") is "<<a<<endl;
	return 0;
}
