#include<iostream>
#include<math.h>
#define e 2.718281828


using namespace std;

/* Define the function to be integrated here: */
double f(double x,int n_gamma,int m_gamma)
{
  return pow(x,m_gamma-1)*pow(1-x,(n_gamma-1));
}

/*Program begins*/
int main()
{
  unsigned int n,i,n_gamma,m_gamma;
  int initial_limit=0,final_limit=1;
  double b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
  cout<<"Enter the m for finding beta: ";
  cin>>m_gamma;
  cout<<"\nEnter the n for finding beta: ";
  cin>>n_gamma;
  cout<<"\nEnter the no. of sub-intervals: ";
  cin>>n;
  /*std::cout<<"\nEnter the initial limit: ";
  std::cin>>a;
  std::cout<<"\nEnter the final limit: ";
  std::cin>>b;*/
  /*Begin Simpson's Procedure: */
  h=fabs(final_limit-initial_limit)/n;
  for(i=1;i<n;i++){
    x=initial_limit+i*h;
    if(i%2==0){
      sum=sum+2*f(x,n_gamma,m_gamma);
    }
    else{
      sum=sum+4*f(x,n_gamma,m_gamma);
    }
  }
  integral=(h/3)*(f(initial_limit,n_gamma,m_gamma)+f(final_limit,n_gamma,m_gamma)+sum);
   /*Print the answer */
  cout<<"\nThe integral is: "<<integral;
}
