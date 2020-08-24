#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
int max=INT_MAX;
int profit=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
if(a[i]<max)
{
max=a[i];
}
else if(a[i]-max>profit)
{
profit=a[i]-max;
}
}
cout<<profit<<endl;
}
}
