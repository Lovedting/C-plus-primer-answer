#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout<<"How many cars do you wish to catalog?";
	int catalog;
	cin>>catalog;
	cin.clear();
	//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&😊&&&&&&&&&&&&&&&&&&&&&important!
	struct car
	{
		string make;//✨✨✨✨✨✨✨✨✨✨
		int year;
	};
	
	
	int i;
	car *Car=new car[catalog];
	
	
	for(i=0;i<catalog;i++)
	{
		cout<<"Car #"<<i+1<<":\n"<<"Please enter the make:";
	
		getline(cin,Car[i].make);
		cout<<"\n"<<"Please enter the year made:";
		cin>>Car[i].year;
		cin.clear();
		//!!!!!!😊
	};
	
	
	cout<<"Here is your collection:"<<"\n";
	for(i=0;i<catalog;i++)
		cout<<Car[i].year<<" "<<Car[i].make<<"\n";
	
	delete []Car;//✨✨✨✨✨✨✨✨✨
	cin.get();
	cin.get();
	return 0;

}
