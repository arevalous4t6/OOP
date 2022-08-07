/*
Pak-Wheel requested for a software and asked for the following functionalities.
Client name, contact, email and transection (only one) are important to keep.
Client can buy or sell car through pinwheels. The transection details which are
important to keep are date (day), transection type (Buy or Sell) and amount.
Implement the above demand in such a way what if the client is deleted, none of its transection
record will remain. (Use Composition)
*/

#include<iostream>
using namespace std;


class Transaction{

public:


	int option;
	int option_b;
	int ammount=110000;
	string car_name;
	int balance;
	int price;
	string status;

	void buy()
	{
		cout<<"\t\t***BUY CAR*** "<<endl;
		cout<<"ENTER CAR NAME : ";
		cin>>car_name;
		getline(cin,car_name);
		cout<<"Price of car is : "<<ammount<<endl;
		g:
		cout<<"PRESS 1 FOR  BUY AND 2 FOR EXIT : "<<endl;
		cin>>option_b;
		if(option_b == 1)
		{
			cout<<"Deal Done "<<endl;
			cout<<"Remaning Balance : "<<balance-ammount<<endl;
		}
		else
		{
			cout<<"Wrong Input![0_0]"<<endl;
			goto g;
		}
//		opption();
	}

	void sell()
	{
		cout<<"\t\t***SELL CAR*** "<<endl;
		cout<<"ENTER CAR NAME : ";
		cin>>car_name;
		getline(cin,car_name);
		cout<<"Price : ";
		cin>>price;

	}
    void success(){
        cout<<"\t DEAL DONE "<<endl;
		cout<<"TOTAL BALANCE : "<<ammount+balance<<endl;
    }


	void opption()
	{
		here:
		cout<<"\t\t PAK WHEEL.com \n"<<endl;
		cout<<"\t PRESS 1 FOR BUYING CAR "<<endl;
		cout<<"\t PRESS 2 FOR SELING CAR "<<endl;
		cout<<"\t PRESS 3 FOR EXIT "<<endl;
		cin>>option;


		if(option==1 || option==2 || option==3)
		{
		switch(option)
		{
			case 1:
			status=" Buyer ";
			 	buy();
			break;
			case 2:
				status = "Seller";
			 	sell();
			break;
			case 3:
				exit(0);
			break;
		}
		}
		else
		{
			cout<<"[0_+]Invalid Input!"<<endl;
			goto here;
		}


	}

};

class Detail{
	public:
		string o_name;

		Detail(string x)
		{
			 o_name = x;
		}

};


class Client{
		Detail* d;
public:
	Client(Detail* x)
	{
		d = x ;
	}

	Transaction tr;

	string name;
	string contact;
	string email;


 	void display()
 	{
 	system("cls");
 	cout<<"\n\n";
 	cout<<"\t Name : \t\t"<<name<<endl;
	cout<<"\t Contact Number : \t"<<contact<<endl;
	cout<<"\t Email : \t\t"<<email<<endl;
	cout<<"\t Price : \t\t"<<tr.price<<endl;
	cout<<"\t CAR Name : \t\t"<<tr.car_name<<endl;
	cout<<"\t STATUS : \t\t"<<tr.status;

	if(tr.status=="Buyer")
	{
	cout<<"\n\n\t***Seller***"<<endl;
	cout<<"\n NAME : "<<d->o_name<<endl;
	}
	}


};

int main()
{
	// for client details

	Detail add(" ");
	Client cl(&add);

	Transaction trans;

	cl.name="Hamza Haroon";
	cl.contact="000000000";
	cl.email="hamzaharoon@xyz.com";
	cl.tr.balance=130000;
	cl.tr.opption();
	trans.success();
	cout<<endl;
	cl.display();
}
