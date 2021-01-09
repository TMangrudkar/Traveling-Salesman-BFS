//60-Tilak Mangrudkar
#include<bits/stdc++.h>
using namespace std;
#define max 100
int main()
{
  int n;
  cout<<"Enter the number of nodes\n";
  cin>>n;
  int arr[n][n];
  int i,j;
  cout<<"Enter the distance matrix\n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  int flag=0;
  int a;
  int visited[max]={0};
  cout<<"Enter the starting node\n";
  cin>>a;
  int s;
  int min=9999;
  int sum=0;
  int t;
  int m=0;
  int q=a;
  while(flag!=1)
  {
    s=a;
    visited[s]=1;
    cout<<s<<" ";
   // cout<<"\n"<<min;
    if(s==q)
    {
      min=0;
    }
    sum=sum+min;
    min=9999;
    for(j=0;j<n;j++)
    {
      if(visited[j]!=1)
      {
        m=1;
      }
    }
    if(m!=1)
    {
      flag=1;
    }
    m=0;
    for(i=0;i<n;i++)
    {
      if(arr[s][i]!=0 && visited[i]!=1)
      {
        if(min>arr[s][i])
        {
          min=arr[s][i];
          a=i;
        }
      }
    }
  }
  cout<<"\nsum "<<sum + arr[a][q];
}

/*
8

0 2 4 6 8 12 5 6
2 0 7 5 6 2 1 2
4 7 0 6 5 9 4 15
6 5 6 0 5 8 10 5
8 6 5 5 0 2 3 2
12 2 9 8 2 0 1 2
5 1 4 10 3 1 0 9
6 2 15 5 2 2 9 0

*/
