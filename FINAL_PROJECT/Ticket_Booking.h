#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
void main_menu();
class Ticket
{
protected:
	char name[20],pick_up[40],drop_of[40],travelling_class[20];
	int distance_in_km,bill_1;
public:
	static int bill;
	Ticket(){}
	void display()
	{
		cout<<"--------CONSTUMER INFORMATION---------"<<endl;
		cout<<"The name is: "<<name<<endl;
		cout<<"The travelling class is: "<<travelling_class<<endl;
		cout<<"From "<<pick_up<<" To "<<drop_of<<endl;
	}
	void cal_bill(int distance_in_km,int x,int i)
	{
		bill_1=distance_in_km*x;
		bill=bill_1+bill;
		if(i==0)
		{cout<<"\nTHE BILL IS: "<<bill<<endl;}
		else
		{cout<<"\nTHE UPDATED BILL IS: "<<bill<<endl;}
	}
	void store_data();
	void read_data();
	void search_data(char[]);
	void del_data(char[]);
	void edit_data(char[]);
	void selection();
};
int Ticket :: bill=0;
void Ticket :: store_data()
{
	ofstream os("file.txt",ios::beg|ios::app); //OPENING A FILE IN A WRITING MODE
	if(os.is_open())
	{
		cout<<"Enter Your Name: "<<endl;
		cin.ignore(); // THIS IS USED TO EMPTY THE BUFFER
		cin.getline(name,19); //TAKING INPUT OF NAME
		cout<<"Enter Your Travelling Class: "<<endl;
		//cin.ignore(); // THIS IS USED TO EMPTY BUFFER
		cin.getline(travelling_class,19);
		cout<<"Enter Your Departure Location: "<<endl;
		//cin.ignore();
		cin.getline(pick_up,39);
		cout<<"Enter Your Arrival Location: "<<endl;
		//cin.ignore();
		cin.getline(drop_of,39);
		//distance_in_km=40;
		os.write((char*)this,sizeof(*this)); //SIMPLE " THIS " HOLDING THE ADDRESS OF CALLING OBJECT AND " *THIS " HOLDING THE SIZE OF CALLING OBJECT.
		os.close();
	}
	else
	{
		cout<<"File Had Not Open"<<endl;
	}
}
void Ticket :: read_data()
{
	ifstream is("file.txt",ios::beg|ios::app);
	while(true)
	{
		is.read((char*)this,sizeof(*this));
		if(is.eof())
		{
			break;
		}
		else
		{
			display();
		}
	}
	is.close();
}
void Ticket :: search_data(char value[20])
{
	ifstream is("file.txt",ios::beg|ios::app);
	while(true)
	{
		is.read((char*)this,sizeof(*this));
		if(is.eof())
		{
			cout<<"No Data Found"<<endl;
			break;
		}
		else
		{
			if(strcmp(name,value)==0)
			{
				display();
				break;
			}
		}
	}
	is.close();
}
void Ticket :: del_data(char value1[20])
{
	ifstream is("file.txt",ios::app);
	ofstream os("file_temp.txt");
	while(true)
	{
		is.read((char*)this,sizeof(*this));
		if(is.eof())
		{
			break;
		}
		else
		{
			if(strcmp(name,value1)==0)
			{
				continue;
			}
			else
			{
				os.write((char*)this,sizeof(*this));
			}
		}
	}
	is.close();
	os.close();
	remove("file.txt");
	rename("file_temp.txt","file.txt");
}
void Ticket:: edit_data(char value2[20])
{
	ifstream is("file.txt",ios::app);
	ofstream os("file_temp.txt");
	while(true)
	{
		is.read((char*)this,sizeof(*this));
		if(is.eof())
		{
			break;
		}
		else
		{
			if(strcmp(name,value2)==0)
			{
				cout<<"Enter new name: "<<endl;
				cin.ignore();
				cin.getline(name,19);
				cout<<"Enter Your passport Number: "<<endl;
       		    //cin.ignore(); // THIS IS USED TO EMPTY BUFFER
		        cin.getline(travelling_class,19);
		        cout<<"Enter Your Departure Location: "<<endl;
		        //cin.ignore();
		        cin.getline(pick_up,39);
		        cout<<"Enter Your Arrival Location: "<<endl;
		       // cin.ignore();
		        cin.getline(drop_of,39);
		        //distance_in_km=40;
				os.write((char*)this,sizeof(*this));
			}
			else
			{
				os.write((char*)this,sizeof(*this));
			}
		}
	}
	is.close();
	os.close();
	remove("file.txt");
	rename("file_temp.txt","file.txt");
}
void Ticket :: selection()
{
	int records,choice,choice2,select;
	cout<<"1.Ticket Booking\n2.Read Data\n3.Edit Data\n4.Delete Data\n5.Search Data"<<endl;
	cout<<"\nENTER YOUR CHOICE: "<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"-------PRICE PER KILOMETER--------\nLOCAL FLIGHT PER KILOMETER 300RS"<<endl;
		cout<<"\n\n-------DISTANCE IN KILOMETER-------\n1.FROM KARACHI TO LAHORE/FAISLABAD/MULTAN/SIALKOT AND VICE VERSA= 1000KM\n2.FROM KARACHI TO QUETTA/SKARDU AND VICE VERSA= 700KM\n3.FROM KARACHI TO RAWALPINDI/ISLAMABAD AND VICE VERSA= 1200KM"<<endl;
		cout<<"ENTER YOUR CHOICE WHICH CITY DO YOU WANT TO GO:"<<endl;
		cin>>choice2;
		cout<<"How Many Ticket You Want To Book:"<<endl;
		cin>>records;
		for(int i=0;i<records;i++)
		{
		store_data();
		if(choice2==1)
		{cal_bill(1000,1000,i);}
		else if(choice2==2)
		{cal_bill(700,1000,i);}
		else if(choice2==3)
		{cal_bill(1200,1000,i);}
		else
		{
			cout<<"INVALID CHOICES SELECTION OF COUNTRY"<<endl;
		}
		}
	}
	else if(choice==2)
	{
		read_data();
	}
	else if(choice==3)
	{
		char name1[20];
		cout<<"Enter Name To You Want To Edit: "<<endl;
		cin>>name1;
		edit_data(name1);
	}
	else if(choice==4)
	{
		char name1[20];
		cout<<"Enter Name To You Want To Delete: "<<endl;
		cin>>name1;
		del_data(name1);
	}
	else  if(choice==5)
	{
		char name1[20];
		cout<<"Enter Name To You Want To Search: "<<endl;
		cin>>name1;
		search_data(name1);
	}
	else
	{
		cout<<"INVALID INPUT"<<endl;
	}
	cout<<"PRESS (1) FOR MAIN MENU ELSE PRESS (2) FOR TICKET MAIN MENU"<<endl;
	cin>>select;
	if(select==1)
	{
		system("CLS");
		main_menu();
	}
	else
	{
		system("CLS");
		selection();
	}
}
