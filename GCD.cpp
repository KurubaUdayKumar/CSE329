#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int k;
	int res;
	if(a<b){
		k=a;
	}else{
		k=b;
		}
		for(int i=1;i<k;i++){
			if(a%i==0 & b%i==0){
				res=i;
			}
		}
		cout<<res;
		return 0;
	
}
