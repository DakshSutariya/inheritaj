#include<iostream>
#include<string.h>

using namespace std;

class Mother
{
    public :
	void Display()
	{
	   cout<<"mother name = anushka sharma "<<endl;
	   cout<<" age = 35 years "<<endl;
	   	
	}	
};
class Daughter : public Mother
{
    public :
	void display()
	{
	   cout<<"daughter name = vamika "<<endl;
	   cout<<" age = 2 years "<<endl;
	   	
	}	
};
int main()
{
	Daughter d;
	d.Display();
	d.display();
	return 0;
}
