#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(a>b){
		int d=a/b;
		int k=a-(d*b);
		if(k==0){
			return b;
		}else{
			return(gcd(b,k));
		}
	}else{
		int divi=b/a;
		int k=b-(divi*a);
		if(k==0){
			return a;
		}
		return (gcd(b,k));
	}
	
}

int main(){
	int a,b;
	cin>>a>>b;
	int res = gcd(a,b);
	cout<<res;
}
