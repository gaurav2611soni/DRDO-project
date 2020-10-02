#include<iostream>
#include<math.h>
#define pi 3.141592653
#define e 2.718281828

using namespace std;

float fact_stirling(float n);
float euler_correct(float n);
float percenterror(float m, float n);

float fact_stirling(float n)
{
	n=(sqrt(2*pi*n))*(pow(n,n))*(pow(e,(-1*n)));
	return n;
}

float euler_correct(float n)
{
    n=(sqrt(2*pi*n))*(pow(n,n))*(pow(e,(-1*n)));
    n=n*(1+(1/(12*n))+(1/(288*n*n))-(139/(51840*n*n*n))-(571/(2488320*n*n*n*n)));
    return n;
}

float percenterror(float obt, float abs)
{
    float error;
	if(m>n)
        error=(obt/abs)*100;
	else
        error=-1*((obt/abs)*100;)
    return error;

}

int main()
{
	float n;
	cout<<"Enter the number to find factorrial using \"stirlings\" approximation: ";
	cin>>n;
	cout<<"Factorial= "<<fact_stirling(n);
	cout<<"\nFactorial after applying correction= "<<euler_correct(n);
	return 0;
}
