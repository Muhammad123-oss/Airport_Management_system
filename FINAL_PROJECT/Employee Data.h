#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
#include<vector>
#include<iterator>

using namespace std;

void main_menu();

//*******************************//
// SSF AIRPORT EMPLOYEES //
//*******************************//

class Airport_staff
{
protected:
	string name,password;
	vector<string> pilot1;
	vector<string> security_guards1;
	vector<string> air_hostess1;
	vector<string> swepper1;
	string choice;
public:
	
	Airport_staff(){password="ssf";}
	void store_information(){}
	
	bool check_password(string password)
	{
		if(this->password==password)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	void data_read();
	void store_data();
};


class pilot: public Airport_staff
{
protected:
	vector<string> pilot2;

public:

	pilot(){pilot1.push_back("PILOT_NAMES: ");}
	
	void store_information()
	{
		while(choice!="No")
		{
			cout<<"\n\n\t\t ENTER PILOT NAME:";
			cin>>name;
			pilot1.push_back(name);
			cout<<"\n\n\t\t ENTER CHOICE PRESS (Yes) FOR CONTINUE ELSE PRESS (No): "<<endl;
			cin>>choice;
		}
		ofstream os("SSF Pilot INFO.txt",ios::app);
		ostream_iterator<string> put(os,"\n");
		copy(pilot1.begin(),pilot1.end(),put);
		os.close();
		cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu(); 
	}
	
	void read_information()
	{
		ifstream is("SSF Pilot INFO.txt",ios::in);
		istream_iterator<string> is_it(is);
		istream_iterator<string> eos;
		copy(is_it,eos,back_inserter(pilot2));
		ostream_iterator<string> cout_it(cout,"\n");
		copy(pilot2.begin(),pilot2.end(),cout_it);
        cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();	
		main_menu();
	}
};


class security_guards:public Airport_staff
{
protected:
	vector<string> security_guards2;
	
	public:
	
	security_guards(){security_guards1.push_back("SECURITY_GURADS_NAMES: ");}
	void store_information()
	{
		while(choice!="No")
		{
			system("cls");
			cout<<"ENTER SECURITY GUARD NAME:"<<endl;
			cin>>name;
			security_guards1.push_back(name);
			cout<<"ENTER CHOICE PRESS (Yes) FOR CONTINUE ELSE PRESS (No): "<<endl;
			cin>>choice;
		}
		ofstream os("SSF SECURITY GUARD RECORD.txt",ios::app);
		ostream_iterator<string> put(os,"\n");
		copy(security_guards1.begin(),security_guards1.end(),put);
		os.close();
		cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
	
	void read_information()
	{
		system("cls");
		ifstream is("SSF SECURITY GUARD RECORD.txt",ios::in);
		istream_iterator<string> is_it(is);
		istream_iterator<string> eos;
		copy(is_it,eos,back_inserter(security_guards2));
		ostream_iterator<string> cout_it(cout,"\n");
		copy(security_guards2.begin(),security_guards2.end(),cout_it);
	    cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
};


class air_hostess: public Airport_staff
{
	
    protected:
	vector<string> air_hostess2;
	public:
	
	air_hostess(){air_hostess1.push_back("AIR_HOSTESS_NAMES: ");}
	void store_information()
	{
		while(choice!="No")
		{
			system("cls");
			cout<<"ENTER AIR HOSTESS NAME:"<<endl;
			cin>>name;
			air_hostess1.push_back(name);
			cout<<"ENTER CHOICE PRESS (Yes) FOR CONTINUE ELSE PRESS (No): "<<endl;
			cin>>choice;
		}
		ofstream os("SSF AIR HOSTESS RECORD.txt",ios::app);
		ostream_iterator<string> put(os,"\n");
		copy(air_hostess1.begin(),air_hostess1.end(),put);
		os.close();
		cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
	
	void read_information()
	{
		system("cls");
		ifstream is("SSF AIR HOSTESS RECORD.txt",ios::in);
		istream_iterator<string> is_it(is);
		istream_iterator<string> eos;
		copy(is_it,eos,back_inserter(air_hostess2));
		ostream_iterator<string> cout_it(cout,"\n");
		copy(air_hostess2.begin(),air_hostess2.end(),cout_it);
	    cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
};


class swepper:public Airport_staff
{
protected:
	vector<string> swepper2;
	public:
		
	swepper(){swepper1.push_back("SWEPPER_NAMES: ");}
	void store_information()
	{
		while(choice!="No")
		{
			system("cls");
			cout<<"ENTER SWEPPER NAME:"<<endl;
			cin>>name;
			swepper1.push_back(name);
			cout<<"ENTER CHOICE PRESS (Yes) FOR CONTINUE ELSE PRESS (No): "<<endl;
			cin>>choice;
		}
		ofstream os("SSF SWEEPERS REOCRD.txt",ios::app);
		ostream_iterator<string> put(os,"\n");
		copy(swepper1.begin(),swepper1.end(),put);
		os.close();
		cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
	void read_information()
	{
		system("cls");
		ifstream is("SSF SWEEPERS REOCRD.txt",ios::in);
		istream_iterator<string> is_it(is);
		istream_iterator<string> eos;
		copy(is_it,eos,back_inserter(swepper2));
		ostream_iterator<string> cout_it(cout,"\n");
		copy(swepper2.begin(),swepper2.end(),cout_it);
	    cout<<"\nPRESS ANY KEY TO CONTINUE...........\n";
		_getch();
		main_menu();
	}
};


void Airport_staff :: data_read()
{
	pilot p1;
	security_guards s1;
	air_hostess a1;
	swepper sp1;
	int choice;
	system("cls");
	cout<<"\n\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ----- SSF AIRPORT EMPLOYEE DATA ----- \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n\n\n\n\n\t\t\t --------- WHOSE DATA YOU WANT TO READ ----------\n\n\n\n\t\t 1.PILOT\n\t\t 2.SECURITY GUARDS\n\t\t 3.AIR HOSTESS\n\t\t 4.SWEPPER\n\t\t 5.RETURN TO START PAGE\n\t\t 6.EXIT\n\n\n\n ---------------- \nYOUR CHOICE:";
	cin>>choice;
	
	if(choice==1)
	{p1.read_information();}
	
	else if(choice==2)
	{s1.read_information();}
	
	else if(choice==3)
	{a1.read_information();}
	
	else if(choice==4)
	{sp1.read_information();}
	
	else if(choice==5)
	{
		main_menu();
	}
	
	else if(choice==6)
	{
		exit(0);
	}
	
	else
	{
		cout<<"\n\nINVALID INPUT.\n\n"<<endl;
		data_read();
	}
}

void Airport_staff :: store_data()
{
	pilot p1;
	security_guards s1;
	air_hostess a1;
	swepper sp1;
	int choice;
	system("cls");
	cout<<"\n\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ---------- SSF AIRPORT EMPLOYEE DATA ------------ \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\t\t\t --------- WHOSE DATA YOU WANT TO STORE ----------\n\t\t 1.PILOT\n\t\t 2.SECURITY GUARDS\n\t\t 3.AIR HOSTESS\n\t\t 4.SWEPPER\n\n\n ---------------- \nYOUR CHOICE:";
	cin>>choice;
	
	if(choice==1)
	{p1.store_information();}
	
	else if(choice==2)
	{s1.store_information();}
	
	else if(choice==3)
	{a1.store_information();}
	
	else if(choice==4)
	{sp1.store_information();}
	
	else
	{
		cout<<"\n\nINVALID INPUT..."<<endl;
		data_read();
	}
}

