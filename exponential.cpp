#include<iostream>
using namespace std;

int main()
{
	long long exponent;
	int base;
	long long double result=1;
	
	cout<<"Enter the base: ";
	cin>>base;
	cout<<"Enter the exponent: ";
	cin>>exponent;
	
	cout << base << " ^ " << exponent << " = ";
	
	while(exponent!=0){
		result *= base;
		--exponent;
	}
	cout<<result;
	
	return 0;
}
