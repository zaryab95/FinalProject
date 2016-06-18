#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class basic_func
{
	private:
	public:
		void add(int a,int b);
	    void subtract(int a,int b);
		void multiply(int a,int b);
		void divide(int a,int b);
		void operations();
        void start();
        void next();
        int Result;
        int c;
		int j;
		int k;
	    char d;
};

void basic_func::operations() 
{
    cout<<"=======================OPERATIONS============================\n"<<"\n";

    cout<<"\t\t1. Add"<<"\n";
    cout<<"\t\t2. Subtract"<<"\n";
    cout<<"\t\t3. Multiply"<<"\n";
    cout<<"\t\t4. Divide"<<"\n";

}
void basic_func::start()
    {
    cout << "\nPlease Enter a number for a operation which you want to perform" << endl;
    cin >> c;
    switch(c)
	{	
    case 1:
        cout<<"Please enter first number"<<endl;
        cin>>j;
        cout<<"Please enter second number"<<endl;
        cin>>k;
        add(j,k);
        break;
    case 2:
        cout<<"Please enter first number"<<endl;
        cin>>j;
        cout<<"Please enter second number"<<endl;
        cin>>k;
        subtract(j,k);
        break;
    case 3:
        cout<<"Please enter first number"<<endl;
        cin>>j;
        cout<<"Please enter second number"<<endl;
        cin>>k;
        multiply(j,k);
        break;
    case 4:
        cout<<"Please enter first number"<<endl;
        cin>>j;
        cout<<"Please enter second number"<<endl;
        cin>>k;
        divide(j,k);
        break;
    default:
        cout<<"ERROR!!!!!. Try Again!"<<endl;
    }
}
void basic_func::next() 
{
    do 
	{
    start();
    cout<<"Do you want to clear or start new calculations? Y(for yes) or N(for not)"<<endl;
    cin>>d;
    }
    while(d == 'y' || d == 'Y');
}

int main () 
{
    basic_func f;
    f.operations();
    f.next();
    return 0;
}

void basic_func::add(int a, int b) 
{
    Result = a + b;
    cout<<"Result:"<<Result<<endl;
}
void basic_func::subtract(int a, int b) 
{
    Result = a - b;
    cout<<"Result:"<<Result<<endl;
}
void basic_func::multiply(int a, int b) 
{
    Result = a * b;
    cout<<"Result:"<<Result<<endl;
}
void basic_func::divide(int a, int b)
{
    Result = a / b;
    cout<<"Result:"<<Result<<endl;
}
