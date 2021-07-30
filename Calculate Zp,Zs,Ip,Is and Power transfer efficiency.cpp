/*Calculate Zp,Zs,Ip,Is and Power transfer efficiency
Author: Mustaffa
Date: 18 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;


int main()
{
    double vs, rp, cp, lp, zp, zs, ls, rs, cs, rl, k, f, w, ip, is, mu, x, y, a, b, c, d, jlp, jcp, jls, jcs;
    double pi = 3.141592654;
    double T, G, M, ki, m, mi, p;
cout<<"Please insert the frequency given in ?Hz(direct without including power of...):"<<endl;
cin>>f;
cout<<"Please insert the coefficient, k:"<<endl;
cin>>k;

T = pow(10,12);
G = pow(10,9);
M = pow(10,6);
ki = pow(10,3);
m = pow(10,-3);
mi = pow(10,-6);
p = pow(10,-12);


w = 2 * pi * (f*ki);
mu = k * sqrt((lp*m)*(ls*m));

cout<<"Please insert Lp: "<<endl;
cin>>lp;
cout<<"Please insert Cp:"<<endl;
cin>>cp;
cout<<"Please insert Rp:"<<endl;
cin>>rp;
cout<<"Please insert Vs or Vin:"<<endl;
cin>>vs;
cout<<"Please insert Ls: "<<endl;
cin>>ls;
cout<<"Please insert Cs:"<<endl;
cin>>cs;
cout<<"Please insert Rs:"<<endl;
cin>>rs;
cout<<"Please insert RL:"<<endl;
cin>>rl;

//projecting value
cout<<"The omega value : "<< w << "rad/s" <<endl;
cout<<"The Vs value : " << vs << "V" <<endl;
cout<<"The Rp value : "<< rp << "Ohm" <<endl;
cout<<"The Cp value : "<< cp  << "F" <<endl;
cout<<"The Lp value : "<< lp * m << "H" <<endl;
cout<<"The Ls value : "<< ls * m << "H" <<endl;
cout<<"The Rs value : "<< rs << "Ohm" <<endl;
cout<<"The Cs value : "<< cs  << "F" <<endl;
cout<<"The RL value : "<< rl << "Ohm" <<endl;
cout<<"The Mutual inductance(M) value : "<< k * sqrt(lp*ls) << "mH" <<endl;

jlp = (w * (lp * m));
jcp = 1/(w * (cp*mi));
jls = (w * (ls * m));
jcs = 1/(w * (cs*mi));
x = lp*m;
y = ls*m;
a = (k * sqrt(x*y));
b = w * pow(a, 2);
c = w * a;
d = pow(c, 2);

cout<<"The Zp value is = "<<"j "<<jlp<<" + j"<<jcp<<" + "<< rp <<setw(2)<<"= ?ohm(change into polar mode and only take the magnitude as answer)"<<endl;
cout<<"The Zs value is = "<<"j "<<jls<<" + j"<<jcs<<" + "<< rs <<setw(2)<<"= ?ohm(change into polar mode and only take the magnitude as answer)"<<endl;
cout<<"The Ip value is = "<<"(Zs + "<<rl<<")x"<<vs<<"/Zp(Zs + "<<rl<<")+ "<<b<<setw(2)<<"= ?A"<<endl;
cout<<"The Is value is = j"<<w * a * vs<<"/Zp(Zs + "<<rl<<")+ "<<b<<setw(2)<<"= ?A"<<endl;
cout<<"\n"<<endl;
cout<<"The Ip value is = "<<"(Zs + "<<rl<<")x"<<vs<<"/Zp(Zs + "<<rl<<")+ "<<d<<setw(2)<<"= ?A"<<endl;
cout<<"The Is value is = j"<<w * a * vs<<"/Zp(Zs + "<<rl<<")+ "<<d<<setw(2)<<"= ?A"<<endl;
cout<<"The Power transfer efficiency,n value is = pin / pout = (VsxIp)/Is^2RL"<<setw(2)<<"= ?%"<<endl;

return 0;
}
