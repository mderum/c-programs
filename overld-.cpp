#include<iostream>
using namespace std;

class space {
	public:
		space():
			x(5),y(7),z(9) {
			}
			~space(){
			}
		void display(){
			cout<<" x is : "<<x <<endl;
			cout<<"y is : "<<y <<endl;
			cout<<"z is : "<<z  <<endl;
		}
	   void operator-(){
	   	x=(-x);
	   	y=(-y);
	   	z=(-z) ;
	   	
	   }
	
	
	int x,y,z;
	
};

int main()
{  
space dark;

		dark.display();
		-dark;
					   dark.display();
	return 0;
}
