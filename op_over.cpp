//operator overloading , a counter
#include<iostream>
using namespace std;

class count{
public:
	count(): 
	ival(0) 
	{ 	}
	
	count(int val):      
		ival(val) {		}
	
	~count(){	}
	
	int getval()const {return ival;}
	
	void setval(int x) {ival=x;	}
	
	void inc() {++ival;	}   //increment function
	
	count & operator++(){++ival;      //prefix
	
	return *this; 	} //nameless return  this pointer
	 //making a postfix function
	 count operator++(int) {count temp(*this); //putting current value of i in temp
	 ++ival;	return temp; }
	
	  private:
	  	int ival;
};
int main()
{                 count  i;
cout<<"i is : " <<i.getval();
i.inc() ; cout<<"\n now i is :" <<i.getval() ;
++i;
cout<<"\n after++ i is  :" <<i.getval() ;

	 count a=++i;
	 cout<<"\n i is : "<<i.getval() <<"  a is :"<<a.getval() ;
	count b=i++;
	cout<<" \n b is :"<<b.getval() <<"\n i is : "<<i.getval() ;
	b++;
	cout<<"\n after postfix b :" <<b.getval() ;
	return 0;
	
}	
