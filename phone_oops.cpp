#include <iostream>
using namespace std;
 
class phone {
	
	char color[20]; 
	char model[20];
	int id; 
	
	
		
public:
	phone(int ph_id)
	{
		id=ph_id;
		cout<<"phone created";
	}
	
	void getdetails()
	{
		cout<<"\nhello im a phone my id is "<<id;
		printf("\n model is %s color is %s",model,color);
	} 
	
	void setdetails()
	{
		cout<<"\nenter model name for phone "<<id<<":";
		cin>>model;
		cout<<"\nenter color name:";
		cin>>color;		
	} 
	
	~phone()
	{
		cout<<"object deleted\n";
	}
		
};

int main()
{
	phone p1(1);
	phone p2(2);
	
	p1.setdetails();
	p2.setdetails();
	p1.getdetails(); 
	p2.getdetails();
	return 0;
}
