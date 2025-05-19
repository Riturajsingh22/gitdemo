#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j>0;j--)
{
if(arr[j]<arr[j-1])
{
int t=arr[j];
arr[j]=arr[j-1];
arr[j-1]=t;
}
else
break;
}
}

cout<<"Sorted array....";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
