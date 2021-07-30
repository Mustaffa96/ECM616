//Radar Range Calculator
//Author: Mustaffa
//Date: 17 May 2021*

#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;


int main()
{
    double pt, gn, rc, sm, f, rm, k, lm, rm2, p, G, gnew, rm3, a, b;
    double pi=3.141592654;
    double c = 3 * pow(10,8);
cout<<"Please insert the frequency given in GHz:"<<endl;
cin>>f;

G = pow(10,9);
k = pow(10,3);
p = pow(10,-12);
gnew = pow(10, gn/10);
lm = c / (f * G);


cout<<"Please insert Peak power transmitted by the radar, Pt kW:"<<endl;
cin>>pt;
cout<<"Please insert Gain of transmitting antenna, G (dB):"<<endl;
cin>>gn;
cout<<"Please insert Radar cross section of the target, :"<<endl;
cin>>rc;
cout<<"Please insert Power of minimum detectable signal, Smin (pW):"<<endl;
cin>>sm;

cout<<"The Peak power transmitted by the radar, Pt : "<<pt * k <<endl;
cout<<"The Gain of transmitting antenna, G : "<<pow(10, gn/10)<<endl;
cout<<"The Radar cross section of the target, :"<<rc<<endl;
cout<<"The Power of minimum detectable signal, Smin :"<<sm * p<<endl;
cout<<"The Signal wavelength, lambda :"<<lm<<endl;

a = (pt * k) * (pow(10, gn/10) * pow(10, gn/10)) * (lm * lm) * rc;
b = (4*pi * 4*pi * 4*pi) * (sm * p) ;
rm = a / b;
rm2 = sqrt(rm);
rm3 = sqrt(rm2);
cout<<"The RM value is = "<<rm<<setw(2)<<"m"<<endl;
cout<<"The RMax value is = "<<rm3<<setw(2)<<"m"<<endl;

return 0;
}
