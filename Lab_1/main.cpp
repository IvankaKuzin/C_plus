#include <iostream>
#include "math.h"

double vurazA(double x,double y,double z);
double vurazB(double x,double y,double z);

int main() {
    double x=4.32,y=4.23,z=-11.88,f,k=-1.0,l=1.0,m=0.2;
    std::cout << "Data:\nx="<<x; std::cout<<" y="<<y;std::cout<<" z="<< z;
    std::cout << "\nResult:\na="<<vurazA(x,y,z) << "\nb=" << vurazB(x,y,z);
    std::cout<<"\n\nTabuliacia vurazyB:";
    f!=0;
    for(f=k;f<=l;f+=m){
        double b1,b2,b3,b4;
        b1=pow((abs(f)),0.3)/(z+y);
        b2=pow(tan(((f+z*z)/(2*f-1.4))),2);
        b3=y*pow(abs(b1+b2),1/3);
        b4=b3-z*exp(f*f-y);
        std::cout<<"\nf="<<f<<" b="<<b4;
    }
    std::cout<<"\n\nTabuliacia vurazyA:";
    for(f=k;f<=l;f+=m){
        double a1,a2,a3,a4;
        a1= sqrt(pow(abs(y*y+vurazB(x,y,z)),0.3));
        a2=3+exp(y-f)+a1;
        a3=1+f*f*abs(y-pow(tan(z*z),2));
        a4= pow(abs(z),0.2)*(a2/a3);
        std::cout<<"\nf="<<f<<" a="<<a4;
    }
}

double vurazB(double x,double y, double z){
    double b1,b2,b3,b4;
        b1=pow((abs(x)),0.3)/(z+y);
        b2=pow(tan(((x+z*z)/(2*x-1.4))),2);
        b3=y*pow(abs(b1+b2),1/3);
        b4=b3-z*exp(x*x-y);
        return b4;
}

double vurazA(double x,double y,double z){
    double a1,a2,a3,a4;
        a1= sqrt(pow(abs(y*y+vurazB(x,y,z)),0.3));
        a2=3+exp(y-x)+a1;
        a3=1+x*x*abs(y-pow(tan(z*z),2));
        a4= pow(abs(z),0.2)*(a2/a3);
        return a4;
}



