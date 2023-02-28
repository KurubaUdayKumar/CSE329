#include<iostream>
using namespace std;

int exp(int x,int n,int t){
	if(n==0)
	{
	    return 1;	
	}
	if(n==1)
	{
		return x;
	}else{
    	t=exp(x,n/2);
	    t=(t*t)%n;	
	}
	
}

int main()
{
	int x=4;
	int n=200;
}
