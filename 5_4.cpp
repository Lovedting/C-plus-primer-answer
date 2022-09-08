#include<iostream>

int main()
{
	using namespace std;
	int i=0;
	double x=100;
	double y=100;
	while(x<=y)
	{
		i++;
		x+=x*0.05;
		y+=0.10*100;
	}
	cout<<"i="<<i<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cin.get();
	cin.get();
	return 0;
}