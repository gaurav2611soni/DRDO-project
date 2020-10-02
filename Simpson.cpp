
#include<iostream>
#include<math.h>

#define e 2.718281828

using namespace std;

/* Define the function to be integrated here: */
double f(double x,int n)
{
  return pow(x,n-1)*pow(e,(-1*x));
}

/*Function definition to perform integration by Simpson's 1/3rd Rule */
double simpsons(double f(double x),double a,double b,int n)
{
  double h,integral,x,sum=0;
  int i;
  h=fabs(b-a)/n;                  //fabs() for finding absolute value
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*f(x);
    }
    else{
      sum=sum+4*f(x);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  return integral;
}

/*Program begins*/
int main()
{
  int n,i=2;
  double a,b,h,x,sum=0,integral,eps,integral_new;

  /*Ask the user for necessary input */
  cout<<"\nEnter the initial limit: ";
  cin>>a;
  cout<<"\nEnter the final limit: ";
  cin>>b;
  cout<<"\nEnter the desired accuracy: ";
  cin>>eps;
  integral_new=simpsons(f,a,b,i);

  /* Perform integration by simpson's 1/3rd for different number of sub-intervals until they converge to the given accuracy:*/
  do{
    integral=integral_new;
    i=i+2;
    integral_new=simpsons(f,a,b,i);
  }while(fabs(integral_new-integral)>=eps);

  /*Print the answer */
  cout<<"\nThe integral is: "<< integral_new <<" for " <<i <<" sub-intervals.\n";
  return 0;
}
