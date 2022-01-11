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
// FEATURES OF FLIGHTS CODE //
//*******************************************************************//

void feature_of_flight(void)
{
   int type;
   system("cls");
   system("color 3");
   cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO SSF FEATURES OF FLIGHT CLASSES(STANDARDS).\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
   cout<<"\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\nCHOOSE THE FLIGHT TYPE:\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n1.FIRST CLASS\n2.BUSINESS CLASS\n3.PREMIUM ECONOMY CLASS\n4.ECONOMY\n\n";
   cout<<"\n\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\nENTER YOUR CHOICE:";
   cin>>type;
   
   if(type>5)
     {
       cout<<"\nWRONG CHOICE!! CHOOSE NUMBER BETWEEN 1-5:";
       feature_of_flight();
     }
     
   switch(type)
     {
       case 1:
	   system("cls");
	   cout<<"\n\n\t\t\tWELCOME TO FIRST CLASS FLIGHT SERVICE OF SSF AIRLINES\n\n\n";
       cout<<"\n RATE                 >>>RS-1000/-PER MILE\n\n";
       cout<<"\n                      FEATURES OF THIS CLASS                       ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n\n CLASS TYPE               >>> FIRST CLASS";
       cout<<"\n\n 1.SEPERATE FULL FURNISHED CABIN   >>>      1";
       cout<<"\n\n 2.CAPACITY           >>>      1";
       cout<<"\n\n 3.ATTACH BATHROOM     ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n                     ADDITIONAL FEATURES                        ";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n\n 1.A/C  AVAILABLE ";
       cout<<"\n\n 2.1st DAY MEAL FREE";
       cout<<"\n\n 3.TV AVAILABLE      ";
       cout<<"\n\n 4.40kg LUGGAGE ALLOANCE";
       cout<<"\n------------------------------------------------------------------";
       cout<<"\n NOTE :- EXTRA LUGGAGE RATE Rs.500/- PER KG";
       cout<<"\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO GO TO MAIN MENU";
       _getch();
       main_menu();                   
       break;
       
	   case 2:
	   system("cls");
       cout<<"\n\n\t\t\tWELCOME TO BUSINESS CLASS FLIGHT SERVICE OF SSF AIRLINES\n\n\n";
       cout<<"\n RATE                  >>> Rs-800/-PER MILE\n\n";
       cout<<"\n                      FEATURES OF THIS CLASS                       ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n CLASS TYPE            >>> BUSINESS                                      ";
       cout<<"\n\n 1.LUXURY SEATING(PERSONAL STORAGE AND PRIVACY DIVIDER)  >>>      1";
       cout<<"\n\n 2.CAPACITY                                              >>>      1";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n                    ADDITIONAL FEATURES                        ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n 1.A/C available   ";
       cout<<"\n\n 2.ON BOARD BUSINESS LOUNGE";
       cout<<"\n\n 3.30Kg LUGGAGE ALLOANCE      ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n NOTE :- EXTRA LUGGAGE RATE Rs.300/- PER KG ";
       cout<<"\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO GO TO MAIN MENU";
       _getch();
       main_menu();
	   break;
       
	   case 3:
	   system("cls");
       cout<<"\n\n\t\t\tWELCOME TO PREMIUM ECONOMY CLASS FLIGHT SERVICE OF SSF AIRLINES\n\n\n";
       cout<<"\n RATE                >>>RS-600/-PER MILE\n\n";
       cout<<"\n                      FEATURES OF THIS CLASS                       ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n FLIGHT TYPE                    >>> PREMIUM ECONOMY              ";
       cout<<"\n\n 1.SUPERIOR COMFORTABLE SEATS   >>>      1/-";
       cout<<"\n\n 2.CAPACITY                     >>>      1";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n                    ADDITIONAL FEATURES                        ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n 1. 1st MEAL FREE      ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n NOTE :- EXTRA LUGGAGE RATE Rs.200/- PER KG  ";
       cout<<"\n--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO GO TO MAIN MENU";
       _getch();
       main_menu();
	   break;
       
	   case 4:
	   system("cls");
       cout<<"\n\n\t\t\tWELCOME TO ECONOMY CLASS FLIGHT SERVICE OF SSF AIRLINES\n\n\n";
       cout<<"\n RATE                >>>400\n\n";
       cout<<"\n                      FEATURES OF THIS CLASS                       ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n CLASS TYPE            >>> ECONOMY                               ";
       cout<<"\n\n 1.COMFORTABLE SEATS   >>>      1";
       cout<<"\n\n 2.CAPACITY            >>>      1";
       cout<<"\n\n 3.EXCELLENT SERVICE   >>>      1";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n                    ADDITIONAL FEATURES                        ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n\n 1. WELCOME DRINK FREE     ";
       cout<<"\n-------------------------------------------------------------------";
       cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed \n";
       cout<<"--------------------------------------------------------------------";
       cout<<"\n\n\nPRESS ANY KEY TO GO TO MAIN MENU";
       _getch();
       main_menu();
	   break;
	   
       default:
       	{
       		cout<<"\nINVALID CHOICE.\n";
       		cout<<"\n\nPRESS ANY KEY TO CONTINUE.....\n";
       		_getch();
       		main_menu();
		}
		break;
     }
}

