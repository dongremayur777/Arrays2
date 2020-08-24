//https://leetcode.com/problems/set-matrix-zeroes/solution/
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>m;
cin>>n;
int a[m][n];
bool isCol=false;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
for(int i=0;i<m;i++)
     {
     if (a[i][0] == 0) {
        isCol = true;
      }
       for(int j=0;j<n;j++)
         {
            if(a[i][j]==0)
              {
	        a[i][0]=0;
		a[0][j]=0;
	      }
          }
      }
   for(int i=1;i<m;i++)
     {
       for(int j=1;j<n;j++)
         {
            if(a[0][j]==0 || a[i][0]==0)
              {
	        a[i][j]=0;
	      }
          }
      }
      if (isCol) {
      for (int i = 0; i < m; i++) {
        a[i][0] = 0;
      }
      }
      if (a[0][0]==0) {
      for (int j = 0; j < n; j++) {
        a[0][j] = 0;
      }
      }
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
}
