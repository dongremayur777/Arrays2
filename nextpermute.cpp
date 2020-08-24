#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int l,int n)
{
int i=l;
int j=n-1;
while(i<j)
{
swap(a[i],a[j]);
i++;
j--;
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int i=n-1;
while(i>=0 && a[i]<a[i-1])
{
i--;
} 
if(i>=0)
{
int j=i;
while(j>=i && a[j]<a[i-1] && j<=n-1)
{
j++;
}
swap(a[i-1],a[j]);
reverse(a,i,n);
}
for(int i=0;i<n;i++)
{
cout<<a[i];
}
}
}
