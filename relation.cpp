#include<iostream>

using namespace std;

int gamma_rel(int gama);
float beta_rel(int m, int n);

int main()
{
	int gama,m,n;
	cout<<"Enter the number to find it Gamma: ";
	cin>>gama;
	gama=gama-1;
	cout<<"Gamma of number is: "<<gamma_rel(gama);
	cout<<"Enter the \"m\" for beta calculation: ";
	cin>>m;
	cout<<"Enter the \"n\" for beta calculation: ";
	cin>>n;
	cout<<"Beta of given \"m&n\" is: "<<beta_rel(m,n);
	return 0;
}

float beta_rel (int m,int n)
{
    int gm,gn,gmn;
    float s;
    gmn=m+n;
    m=m-1;
    n=n-1;
    gm=gamma_rel(m);
    gn=gamma_rel(n);
    gmn=gamma_rel(gmn);
    s=gm*gn;
    cout<<s;
    s=s/gmn;
    return s;
}

int gamma_rel(int gama)
{
    if(gama>1)
	{
		return gama*gamma_rel(gama-1);
	}
	else
		return 1;
}
