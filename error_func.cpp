#include<iostream>
#include<math.h>
#define e 2.718281828

using namespace std;

double erf(int x)
{
	double a1 =  0.254829592;		//Constants
    double a2 = -0.284496736;
    double a3 =  1.421413741;
    double a4 = -1.453152027;
    double a5 =  1.061405429;
    double p  =  0.3275911;

    float sign = 1;
    if (x < 0)
        sign = -1;
    x = abs(x);
    double t = 1.0/(1.0 + p*x);
    double y = 1.0 - (((((a5*t + a4)*t) + a3)*t + a2)*t + a1)*t*pow(e,(-1*x*x));

    return sign*y;
}

double erfc(int x)
{
    return 1-erf(x);
}

int main()
{
	double x;
	cout<<"Enter the number to find its error: ";
	cin>>x;
	cout<<"Result= "<<erf(x)<<endl;
	cout<<"Result= "<<erfc(x);
}
