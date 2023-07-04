#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return sqrt(1-x * x);
}
int main(){
    double t;
    double res = 0;
    double x = f(0);
    t = 0.0000001;
    for(double i = 0; i < 1; i+=t){
        //printf("i is %f, the function is %f\n", i, f(i));
        printf("i is %f, the function is %f\n", i, f(i));
        res+=f(i);
    }
    printf("Pi is %f\n", res*4);
}
