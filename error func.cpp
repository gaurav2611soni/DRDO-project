#include<iostream>
#include<math.h>
#define pi 3.1415926

using namespace std;

double f(double x,int n_gamma)
{
  return (2/sqrt(pi))*(pow(e,(-1*n*n)));
}

/*Program begins*/
int main()
{
  unsigned int n,i;
  int initial_limit=0,final_limit;
  double b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
  cout<<"\nEnter the n for finding gamma";
  cin>>n_gamma;
  cout<<"\nEnter the no. of sub-intervals: ";
  cin>>n;
  /*cout<<"\nEnter the initial limit: ";
  cin>>a;
  cout<<"\nEnter the final limit: ";
  cin>>b;*/
  /*Begin Simpson's Procedure: */
  h=fabs(final_limit-initial_limit)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*f(x,n_gamma);
    }
    else{
      sum=sum+4*f(x,n_gamma);
    }
  }
  integral=(h/3)*(f(initial_limit,n_gamma)+f(final_limit,n_gamma)+sum);
   /*Print the answer */
  cout<<"\nThe integral is: "<<integral;
}