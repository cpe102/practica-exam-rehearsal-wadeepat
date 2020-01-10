#include <iostream>
#include<cmath>
using namespace std;


double sumSqrt(int N){
    int i=1;
    double sum=0;
    while (i<=N)
    {
        sum=sum+(1/sqrt(i));
        i++;
    }
return sum;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n"<< h << "\n"<< i << "\n";

    return 0;
}
