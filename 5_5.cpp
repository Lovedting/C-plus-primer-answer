#include<iostream>
#include<string>
const int Months=12;
const int Years=3;
int main()
{
using namespace std;
string months[Months]=
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};
int sales[Years][Months];
int i=1,j=1;
for(j=1;j<=Years;j++)
{
for(i=1;i<=Months;i++)
{
	cout<<"input sales of "<<months[i-1]<<" of "<<j<<":";
	cin>>sales[j-1][i-1];
};
cout<<endl;
}
double *sum=new double[Years];
double Sum=0;
for(j=1;j<=Years;j++)
{
	sum[j-1]=0;
	for(i=1;i<=Months;i++)
	{
	sum[j-1]+=sales[j-1][i-1];
	};

cout<<"\nsum "<<j<<" = "<<sum[j-1];
}
for(j=1;j<=Years;j++)
Sum+=sum[j-1];
cout<<"\nSum="<<Sum;
delete []sum;
cin.get();
cin.get();
return 0;


}