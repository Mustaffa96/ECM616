//S/I Co-Channel Interference Calculator or Generator by pair of data
//Author: Mustaffa
//Date: 2 July 2021

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{
int i,j,k,n,c;
cout<<"\nEnter the no. of data pairs to be entered:\n"; //To find the size of arrays
cin>>n;
cout<<"\nEnter the value of propagation path loss, n:\n"; //To find n
cin>>c;
double x[n],y[n],a,b,d;
cout<<"\nEnter the x-axis values:\n"; //Input x-values
for (i=0;i<n;i++)
cin>>x[i];
cout<<"\nEnter the y-axis values:\n"; //Input y-values
for (i=0;i<n;i++)
cin>>y[i];
double xsum=0,ysum=0,asum=0,qsum=0,sisum=0,sidbsum=0; //variables for sums of xi,yi,c..etc
for (i=0;i<n;i++)
{
xsum=xsum+x[i]; //calculate (xi)
ysum=ysum+y[i]; //calculate (yi)
asum=asum+pow(x[i],2)+pow(y[i],2)+x[i]*y[i]; //calculate N
qsum=qsum+sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i])); //calculate Q
sisum=sisum+pow(sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i])),c)/6; //calculate S/I
sidbsum=sidbsum+10*log10(pow(sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i])),c)/6); //calculate S/I(dB)
}


cout<<"S.no"<<setw(5)<<"i"<<setw(19)<<"j"<<setw(16)<<"N"<<setw(16)<<"Q"<<setw(16)<<"S/I"<<setw(16)<<"S/I(dB)"<<endl;
cout<<"-----------------------------------------------------------------\n";
for (i=0;i<n;i++)
cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<pow(x[i],2)+pow(y[i],2)+x[i]*y[i]<<setw(18)<<sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i]))<<setw(18)<<pow(sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i])),c)/6<<setw(18)<<10*log10(pow(sqrt(3*(pow(x[i],2)+pow(y[i],2)+x[i]*y[i])),c)/6)<<endl;

return 0;
}
