#include<iostream>
int main()
{
	using namespace std;
	cout<<"How many cars do you wish to catalog?";
	int catalog;
	cin>>catalog;
	struct car
	{
		char *make;
		int year;
	};
	
	
	int i;
	car *Car=new car[catalog];
	
	
	for(i=0;i<catalog;i++)
	{
		cout<<"Car #"<<i<<":\n"<<"Please enter the make:";
		cin.getline((Car+i)->make,40);
		cout<<"\n"<<"Please enter the year made:";
		cin>>(Car+i)->year;
	};
	
	
	cout<<"Here is your collection:"<<"\n";
	for(i=0;i<catalog;i++)
		cout<<(Car+i)->year<<" "<<(Car+i)->make<<"\n";
	
	delete []Car;
	cin.get();
	cin.get();
	return 0;

}
