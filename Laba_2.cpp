#include <iostream>
#include <cmath>

using namespace std;

bool func1(int a)
{
    return a<9&&a%3==0;
}

bool func2(int x, int y, int z)
{
    return x==100&&y==100&&z==100;
}

double func3(double x, double y)
{
    double a = cos(x-y);
    double b = cos(x+y);
    double d = tan(x)+tan(y);
    double ctgx = cos(x)/sin(x);
    double ctgy = cos(y)/sin(y);
    double result1 = ((a+b)/(a-b))*((ctgx+ctgy)/d);
    return result1;
}

int main()
{
    cout<<"2.3.21_1 - "<<func1(3)<<endl;
    cout<<"2.3.21_2 - "<<func2(100,100,100)<<endl;
    cout<<"2.3.21_3 - "<<func3(15,28)<<endl;
    return 0;
}


