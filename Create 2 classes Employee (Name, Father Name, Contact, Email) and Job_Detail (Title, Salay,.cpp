/*

Create 2 classes Employee (Name, Father Name, Contact, Email) and Job_Detail (Title, Salay,
Id, JobDescription). Each employee will have job detail. Link these 2 classes via using
Composition. Employee owns Job_Description and Job_Description cannot exist without
Employee.

*/


#include<iostream>
using namespace std;


class job_detail{
public:
	string title;
	string salary;
	int Id;
};


class Employee{
public:
	job_detail jd;
	string name;
	string f_name;
	string contact_num;
	string email; 
	
 	void display()
 	{	
 	cout<<"Name : "<<name<<endl;
	cout<<"Father Name : "<<f_name<<endl;
	cout<<"Contact NUmber : "<<contact_num<<endl;
	cout<<"Email : "<<email<<endl;
	cout<<"Title : "<<jd.title<<endl;
	cout<<"Salary : "<<jd.salary<<endl;
	cout<<"ID : "<<jd.Id<<endl;	
	}
};

int main()
{
	Employee em;
	em.name="XYZ";
	em.f_name="ABC";
	em.contact_num="0000000000";
	em.jd.title="CEO";
	em.jd.Id=123456;
	em.jd.salary="200000";
	em.email="abc@email.com";
	em.display();

}
