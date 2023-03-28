#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,i,j,k;
cout<<"Enter the number : \n";
cin>>a;
int temp1=a;
vector<int> arr;
int c=2;
while(a>1)
{
if(a%c==0)
{
arr.push_back(c);
a/=c;
}
else c++;
}
sort(arr.begin(),arr.end());
cout<<"Enter k value : \n";
cin>>k;
if(arr[0]>=k)
{
cout<<arr[0]<<"- Jagged -"<<temp1<<endl;
}
else
{
cout<<temp1<<" Not a k jagged number\n";
}
}
