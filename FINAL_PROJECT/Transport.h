#include<iostream>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<iterator>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;

void main_menu();

//*******************************************************************//
// SSF AIRPORT TRANSPORT FACILITY //
//******************************************************************//

class Transport_service
{
protected:
	string name,pick_up,drop_of;
	int distance_in_km,bill;
public:
	Transport_service()
	{}
	
	Transport_service(string name,string pick_up,string drop_of,int distance_in_km)
	{
		this->name=name;
		this->pick_up=pick_up;
		this->drop_of=drop_of;
		this->distance_in_km=distance_in_km;
	}
	virtual void cal_bill()=0;
};

class car:public Transport_service
{
public:
	car (){} //DEFAULT CONSTRUCTOR
	car (string name,string pick_up,string drop_of,int distance_in_km):Transport_service(name,pick_up,drop_of,distance_in_km){}  //INTIALIZING CONSTRUCTOR VALUES OF BASE CLASS
	
	void cal_bill() //CALCULATE BILL//
	{
		bill=distance_in_km*50;
		cout<<"\n\n-------------\n~BILL:RS-"<<bill<<"/-"<<endl<<"-------------\n";
	    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANKS FOR CHOOSING TRANSPORT SERVICE OF SSF AIRLINE \xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
        
	char echoice;
	cout<<"\n\n PRESS 1 TO GO TO MAIN-MENU \n PRESS 0 TO EXIT \n\n\n YOUR CHOICE:";
	cin>>echoice;
	if(echoice=='1')
	{
		system("CLS");
		main_menu();
	}
	else{
		system("CLS");
		cout<<"\n\n\t\t\t THANK-YOU FOR CHOOSING SSF AIRPORT \n\n\t\t\t HAVE A SAFE JOURNEY.";
		exit(0);
	}	
	}
};

class bus:public Transport_service
{
public:
	bus (){} //DEFAULT CONSTRUCTOR
	bus (string name,string pick_up,string drop_of,int distance_in_km):Transport_service(name,pick_up,drop_of,distance_in_km){}
	
	void cal_bill() //CALCULATE BILL//
	{
		bill=distance_in_km*30;
		cout<<"\n\n---------------\n~BILL:RS-"<<bill<<"/-"<<endl<<"---------------\n";
	    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANKS FOR CHOOSING TRANSPORT SERVICE OF SSF AIRLINE \xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	    
	char echoice;
	cout<<"\n\n PRESS 1 TO GO TO MAIN-MENU \n PRESS 0 TO EXIT \n\n\n YOUR CHOICE:";
	cin>>echoice;
	if(echoice=='1')
	{
		system("CLS");
		main_menu();
	}
	else{
		system("CLS");
		cout<<"\n\n\t\t\t THANK-YOU FOR CHOOSING SSF AIRPORT \n\n\t\t\t HAVE A SAFE JOURNEY.";
		exit(0);
	}
	}
};

class bike:public Transport_service
{
public:
	bike(){} //DEFAULT CONSTRUCTOR
	bike (string name,string pick_up,string drop_of,int distance_in_km):Transport_service(name,pick_up,drop_of,distance_in_km){}
	
	void cal_bill() //CALCULATE BILL//
	{
		bill=distance_in_km*10;
		cout<<"\n\n--------------\n~BILL:RS-"<<bill<<"/-"<<endl<<"--------------\n";
		cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANKS FOR CHOOSING TRANSPORT SERVICE OF SSF AIRLINE \xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	    
	char echoice;
	cout<<"\n\n PRESS 1 TO GO TO MAIN-MENU \n PRESS 0 TO EXIT \n\n\n YOUR CHOICE:";
	cin>>echoice;
	if(echoice=='1')
	{
		system("CLS");
		main_menu();
	}
	else{
		system("CLS");
		cout<<"\n\n\t\t\t THANK-YOU FOR CHOOSING SSF AIRPORT \n\n\t\t\t HAVE A SAFE JOURNEY.";
		exit(0);
	}
	}
};

