#include<iostream>
using namespace std;
bool fun(int set[], int n,int sum)
{
  bool subset[n+1][sum+1];
  for(int i=0;i<=n;i++)//put true in all the first column as it says to make zero

  {
    subset[i][0]=true;
  }
  cout<<"The value of n is"<<n<<endl;
  for(int i=1;i<sum;i++)//for first colum as except 1st everythingis false

  {
    subset[0][i]=false;
  }
  //fill the table
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=sum;j++)
    {
      if(j<set[i-1])//sice first value start with zero
      {
        subset[i][j]=subset[i-1][j];
      }
      if(j>=set[i-1])
      {
        subset[i][j]=subset[i-1][j] || subset[i-1][j-set[i-1]];
        //cout<<"set i-1 is"<<set[i-1]<<endl;
      //  cout<<"And the value of j is"<<j<<endl;
      }
    }
  }

    return subset[n][sum];
}
int main() {
  int set[]={0,1,2,5,7};
  int sum=8;
  int n=sizeof(set)/sizeof(set[0]);
  if (fun(set, n, sum) == true)
      printf("Found a subset with given sum");
  else
      printf("No subset with given sum");
  return 0;
}
