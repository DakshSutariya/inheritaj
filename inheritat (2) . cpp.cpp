#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
    public :
	void Display()
	{
		cout<<" name = gaimata"<<endl;
		cout<<" age = 10 years"<<endl;
	
	}	
};
	
class Dolphin : public Animal
{
    public :
	void display()
	{
		cout<<" name = babyshark"<<endl;
		cout<<" age = 4 years"<<endl;	
	}	
};

class Zebra : public Animal
{
    public :
	void show()
	{
		cout<<" name = patavalo"<<endl;
		cout<<" age = 10 years"<<endl;
	
	}	
};

int main()
{
	Dolphin d;
	Zebra z;
	
	d.display();
	
	d.Display();
	
	z.show();
	return 0;
}
