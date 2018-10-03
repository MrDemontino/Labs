#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

void func1(){
    cout<<"1.2.21_1 - "<<"100 "<<"1000 "<<"4000"<<endl;
}

double func2(double D){
    double S = PI*(pow(D,2)/4);
    cout<<"1.2.21_2 - "<<S<<endl;
}

double func3(double x){
    double resf3 = pow(x,3)*abs(x-10);
    cout<<"1.2.21_3 - "<<resf3<<endl;
}

double func4(double x, double y){

    double resf4 = (1+pow(x,2))/2 + log10(y);
    cout<<"1.2.21_4 - "<<resf4<<endl;

}

bool func5(double x, double y){
    double func5_1 = pow(x,3)*abs(x-10);
    double func5_2 = sqrt(pow(y,2)/abs(x));
    return func5_1>func5_2;
}

int resf5(){   // Perfectionizm
    cout<<"1.2.21_5 - "<<func5<<endl;
}

int main()
{
    func1();
    func2(15);
    func3(5);
    func4(5,15);
    func5(1,9);
    resf5();
    return 0;
}
