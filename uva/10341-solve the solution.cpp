#include <bits/stdc++.h>

using namespace std;

double p, q, r, s, t, u, xr, xl, xu;



double f(double x)
{
    return p*exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;

}

void bisection_method()
{
    xl = 0;
    xu = 1;


    if(f(xl) * f(xu) > 0)
    {
           cout << "No solution" << endl;
           return;
    }


    while(xl + (1e-7) < xu)
    {
        //cout << "In bisection" << endl;
        xr = (xl + xu)/2.0;
        if(f(xr) * f(xl) <= 0)
            xu = xr;
        else if(f(xr) * f(xl) > 0)
            xl  = xr;
        //cout << xr << " ";

    }
    printf("%.4lf\n", xr);

}

void read()
{
    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u) != EOF )
    {
        bisection_method();
        //cout << f(0) << endl;
    }
}




int main()
{

    read();

    return 0;
}
