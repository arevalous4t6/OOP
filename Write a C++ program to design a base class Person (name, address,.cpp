/*
Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a class Manager
(designation, department name, and basic-salary) from Employee. Write a menu driven
program to:
Accept all details of 'n' managers.
Display manager having highest salary.

*/
#include<iostream>
using namespace std;

class Person{

public: 
	string name,address;
	int phone_no;
};

class Employee: public Person{
	
public:
	int eno;
	string ename;
};

class Manager: public Employee{

public: 
	string designation,dept;
	int basic_salary;
	
	void accept_details(){

		
		cout<<"\nEnter Employee No. : ";
        cin>>eno;
        
        cout<<"Enter Name : ";
        cin>>ename;
        
        cout<<"Enter Address : ";
        cin>>address;
        
        cout<<"Enter Phone No. : ";
        cin>>phone_no;
        
        cout<<"Enter Designation : ";
        cin>>designation;
        
        cout<<"Enter Department Name : ";
        cin>>dept;
        
        cout<<"Enter Basic Salary : ";
        cin>>basic_salary;
	}
};


int main(){
	int count;
	int temp=0;
	int temp2;
	Manager managers[100];
	
	cout<<"How many Managers do you want to enter? : ";
	cin>>count;
	
	for (int i=1 ; i<=count ; i++){
		cout<<"\nEnter Details of Manager "<<i;
		cout<<"\n------------------------";
		managers[i].accept_details();
	}
	
	
	for (int i=1 ; i<=count ; i++){
		if (managers[temp].basic_salary<managers[i].basic_salary)
		temp=i;
		temp2=temp;
	}


    cout<<" \nManager "<<managers[temp].eno<<" named "<<managers[temp].ename<<" has the highest salary of "<<managers[temp].basic_salary;
	return 0;
}

