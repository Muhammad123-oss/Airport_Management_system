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

//**********************************************************//
// SSF AIRPORT FLIGHT SCEHULE//
//*********************************************************//

class flight_schedule
{
public:
	flight_schedule(){}
	void flight_details()
	{
		time_t curr_time;
		system("CLS");
		cout<<"\n\n\t\t\t ----------- SCHEDULE TO BE FOLLOWED IN THE MONTH OF JUNE --------- \n\n"<<endl;
		curr_time=time(NULL);
		tm *tm_local=localtime(&curr_time);
		
		if(tm_local->tm_hour>6 && tm_local->tm_hour<=12)
		{
			cout<<"\n\n\t\t\t ---------- ACCORDING TO CURRENT TIME(OF SYSTEM) --------------\n";
			cout<<"\n\n\t\t ---------- DOMESTIC FLIGHTS --------"<<endl;
			cout<<"\n\t 1.Karachi To Lahore\n\t 2.Lahore To Peshawar\n\t 3.Islamabad To Karachi\n\t 4.Skurdu To Lahore\n\t 5.Skurdu To Rawalpindi"<<endl;
			cout<<"\n\n\n\n ~PRESS ANY KEY TO CONTINUE........"<<endl;
			_getch();
			main_menu();
		}
		
		else if(tm_local->tm_hour>12 && tm_local->tm_hour<=23)
		{
			cout<<"\n\n\t\t ---------- ACCORDING TO CURRENT TIME(OF SYSTEM) --------------\n";
			cout<<"\n\n\t\t -------DOMESTIC FLIGHTS--------"<<endl;
			cout<<"\n\t 1.Karachi To Islamabad\n\t 2.Lahore To Karachi\n\t 3.Islamabad To Multan\n\t 4.Karachi To Skurdu"<<endl;
            cout<<"\n\n\n\n ~PRESS ANY KEY TO CONTINUE........"<<endl;
			_getch();
			main_menu();		
		}
		
		else if(tm_local->tm_hour<=6)
		{
			cout<<"\n\n\t\t ---------- ACCORDING TO CURRENT TIME(OF SYSTEM) --------------\n";
			cout<<"\n\n\t\t -------DOMESTIC FLIGHTS--------"<<endl;
			cout<<"\n\t 1.Karachi To Peshawar\n\t 2.Lahore To Quetta\n\t 3.Islamabad To Hyderabad\n\t 4.Lahore To Skurdu"<<endl;
		    cout<<"\n\n\n\n ~PRESS ANY KEY TO CONTINUE........"<<endl;
			_getch();
			main_menu();
		}
		
		else
		{
			cout<<"\n\n\t\t ---------- ACCORDING TO CURRENT TIME(OF SYSTEM) --------------\n";
			cout<<"No Flights Available"<<endl;
		    cout<<"\n\n\n\n ~PRESS ANY KEY TO CONTINUE........"<<endl;
			_getch();
			main_menu();
		}
	}
};

