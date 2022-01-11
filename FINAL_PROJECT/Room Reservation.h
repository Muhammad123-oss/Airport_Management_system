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


//********************************************************************//
// SSF AIRPORT GUEST HOUSE FACILITY CODE//
//*******************************************************************//

class ROOM_RESERVATION
{
        string name;
		string address;
		string nic;
		int phone,bill;
		int dd,doa;
		int mm;
		int yy;
		int days;

	public:
		ROOM_RESERVATION()
		{}

		void spdelux();
		void delux();
		void general();
		void Reservation();
};

void ROOM_RESERVATION :: spdelux()
{
	system("cls");
       cout<<"\n Room number            >>> 1";
       cout<<"\n                      FEATURES OF THIS ROOM                       ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n\n Room Type            >>> Sp.delux";
       cout<<"\n\n Room charges         >>> Rs-2000/- per day";
       cout<<"\n\n 1. Bed               >>>      2";
       cout<<"\n\n 2.Capacity           >>>      5";
       cout<<"\n\n 3.Balcony available     ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n                     ADDITIONAL FEATURES                        ";
       cout<<"\n------------------------------------------------------------------";
       cout<< "\n\n 1.A/C  available ";
       cout<< "\n\n 2.Geyser available";
       cout<<"\n\n 3.TV available      ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";
       cout<< "\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO PROCEED TO NEXT STEP";
       _getch();
}

void ROOM_RESERVATION :: delux()
{
	system("cls");
       cout<<"\n Room number            >>>2";
       cout<<"\n                      FEATURES OF THIS ROOM                       ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n\n Room Type            >>> Delux";
       cout<<"\n\n Room charges         >>> Rs.1500 per day";
       cout<<"\n\n 1. Bed               >>>      1";
       cout<<"\n\n 2.Capacity           >>>      3";
       cout<<"\n\n 3.Balcony available     ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n                     ADDITIONAL FEATURES                        ";
       cout<<"\n------------------------------------------------------------------";
       cout<< "\n\n 1.A/C  available ";
       cout<< "\n\n 2.Geyser available";
       cout<<"\n\n 3.TV available      ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n NOTE :- Extra bed will cost Rs.60 per bed ";
       cout<< "\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO PROCEED TO NEXT STEP";
       _getch();
}
void ROOM_RESERVATION :: general()
		{
	    system("cls");
       cout<<"\n Room number            >>> 3";
       cout<<"\n Advance                >>> Rs-400/- \n\n";
       cout<<"\n                      FEATURES OF THIS ROOM                       ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n\n Room Type            >>> GENERAL ";
       cout<<"\n\n Room charges         >>> Rs.1200 per day";
       cout<<"\n\n 1. Bed               >>>      1";
       cout<<"\n\n 2.Capacity           >>>      3";
       cout<<"\n\n 3.Balcony available     ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n                     ADDITIONAL FEATURES                        ";
       cout<<"\n------------------------------------------------------------------";
            cout<< "\n\n 1.A/C  available ";
      cout<< "\n\n 2.Geyser available";
       cout<<"\n\n 3.TV available      ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n NOTE :- Extra bed will cost Rs.80 per bed ";
      cout<< "\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO PROCEED TO NEXT STEP";
       _getch();
	}

void ROOM_RESERVATION :: Reservation()
{			
	system("CLS");
	ofstream os("SSF GUEST ROOM RECORD.txt",ios::app);
	if(os.is_open())
	{
	cout<<"\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n\t\t\t CUSTOMER INFORMATION \n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";	
	cout<<"\n\n\n~ENTER NAME:";
	cin>>name;
	cout<<"\n~ENTER RESIDENCE ADDRESS OF CUSTOMER (WITHOUT SPACES USE (-) FOR SPACES):";
	cin>>address;
	cout<<"\n\n~ENTER DATE OF ARRIVAL OF EMPLOYEE:-";
	cout<<"\n~ENTER DATE(XX):";
	cin>>dd;
	cout<<"\n~ENTER MONTH(XX):";
	cin>>mm;
	cout<<"\n~ENTER YEAR(XXXX):";
	cin>>yy;
	cout<<"\n~ENTER PHONE NUMBER:";
	cin>>phone;
	cout<<"\n~ENTER CNIC NUMBER:";
	cin>>nic;
	cout<<"\n\n\nENTER YOUR ROOM TYPE:\nPRESS 1- spdelux\nPRESS 2- delux\nPRESS 3- general\n\n\n---------------------------------\nENTER YOUR CHOICE:"; 
    char choice1;
	cin>>choice1;
	int rate;
	
	if(choice1=='1')
	{
		rate=2000;
	}
	else if(choice1=='2')
	{
		rate=1500;
	}
	else if(choice1=='3')
	{
		rate=1200;
	}
	else
	{
		cout<<"\nINVALID CHOICE.\n";
	}	
	cout<<"\n~NUMBER OF DAYS FOR RESERVATION:";
	cin>>days;
	
	bill=rate*days;
	cout<<"\n\n----------\nBILL="<<bill<<endl;
	os.write((char*)this,sizeof(*this));
	os.close();
	
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
	else
	{
		cout<<"FILE DOESNOT OPEN"<<endl;
	}
}

