#include <iostream>
using namespace std;
 
class person {
    char name[20];
    
 
public:
	int id;
    void getdetails() {
    	printf("\n enter you details person %d:",id);
    	cin>>name;
	}
	
	void details()
	{
		cout<<"\n you name is "<<name<<" and id is "<<id;
	}
};
 
int main()
{
 
    person p1; // p1 is a object
    p1.id=1;
    p1.getdetails();
    person p2;
    p2.id=2;
    p2.getdetails();
    cout<<"getting people details :\n";
    p1.details();
    p2.details();
    return 0;
}
