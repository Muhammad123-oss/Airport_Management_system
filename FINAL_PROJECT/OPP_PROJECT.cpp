//***************************************************//
// INCLUDING HEADER FILES //
//**************************************************//

#include<iostream>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<iterator>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>

void main_menu();

//********************************************************//
// Importing CLASSES AND OTHER FUNCTION FROM Header File
//*******************************************************//

#include"Resturant.h"

#include"Features Of Flight.h" // FEATURES OF FLIGHTS CODE // 

#include"Room Reservation.h"  // SSF AIRPORT GUEST HOUSE FACILITY CODE//

#include"Transport.h" // SSF AIRPORT TRANSPORT FACILITY //

#include"Lugage Checker.h" // SSF AIRPORT LUGAGE CHECKER //

#include"Flight Scedule.h" // SSF AIRPORT FLIGHT SCEHULE//

#include"Employee Data.h" // SSF AIRPORT EMPLOYEE DATA //

#include"Ticket_Booking.h" //TICKET BOOKING,EDITING,SEARCHING AND DELETING METHODS //

using namespace std;

//******************************************************//
//SCREEN HEADER//
//*****************************************************//

void main_menu();

void screenheader()
 {
   system("cls");
   system("color 3");
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @@@@@@@@@@@@@@@@@@@@@@@     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @                     @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @     WELCOME TO      @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @                     @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @      SSF  LOCAL     @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @       AIRPORT       @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @                     @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @      (KARACHI)      @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @                     @     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2     @@@@@@@@@@@@@@@@@@@@@@@     \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
   cout<<"\n\n-----------------------------------"<<endl;
   cout<<"PRESS ANY KEY TO CONTINUE......."<<endl;
   _getch();
 }

//**********************************************************************//
// DESCRIPTION //
//*********************************************************************//

void description()
{
	system("cls");
	system ("color 3");
		cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  WELCOME TO SSF AIRPORT KARACHI  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
		cout<<"\n\n\t\tAIRPORT SSF IS ONE OF THE NEWEST AND MOST UP TO DATE AIRPORT IN KARACHI.\n\tTHE AIRPORT IS EQUIPPED WITH ALL THE GENERAL REQUIREMENTS AND FACILITIES THAT GO ALONG WITH MEMORABLE TIME.\n\t\tSET BEAUTIFUL GARDENS,IT PROVES TO BE WELL KNOWN FOR ITS SERVICES\n\t\tTHE AIRPORT HAVE WELL FURNISHED FURNITURE ALONG WITH HOTEL FOR GUESTS FOR WAITING.\n\tTHE AIRPORT ALSO PROVIDES RESTURANTS WITHIN THE AIRPORT THAT PROVIDES QUALITY FOODS AND AT RESINABLE PRICE.\n\t\n\n----------------\n~FACILITIES.....\n----------------\n\n \t\t1.100% POWER BACKUP.\n\t\t2.BOEING TRAINED PILOTS.\n\t\t3.COURTEOUS CABIN CREW.\n\t\t4.SECURITY\n\t\t5.FREE INTERNET\n\t\t6.RESTURANTS WITHIN AIRPORT\n\t\t7.98.8% ON-TIME PERFORMANCE\n\t\t8.TRANSPORT\n\t\t9.WELL BEHAVE EMPLOYEES\n\n";
        cout<<"\n---------------------------\n";
		cout<<"PRESS ANY KEY TO CONTINUE...\n---------------------------\n";
        _getch();
}

//********************************************************************//
// DESTINATION //
//*******************************************************************//

void Destination()
{
    system("cls");
	system ("color 2");
	cout<<"\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO SSF AIRPORT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\n\n\t\t\t\t SSF AIRPORT PROVIDE QUALITY FLIGHTS WITHIN\n\n\n\t\t\t\t\t~KARACHI\n\t\t\t\t\t~ISLAMABAD\n\t\t\t\t\t~LAHORE\n\t\t\t\t\t~QUETTA\n\t\t\t\t\t~MULTAN\n\t\t\t\t\t~FAISALBAD\n\t\t\t\t\t~SKARDU\n\t\t\t\t\t~SIALKOT\n\t\t\t\t\t~RAWALPINDI\n";
    cout<<"\n\nPRESS ANY KEY TO CONTINUE...";
    _getch();
    main_menu();
}


//*********************************************************************************//
//CONTROL MENU FOR CALLING ALL CLASSES OBJECTS AND ALL FUNCTIONS ( A TYPE OF MAIN )
//********************************************************************************//

void main_menu()
{
	//*************************//
	// START PAGE //
	//************************//
	
system("CLS");    

system("color f2");
       cout<<"                      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  \n";
       cout<<"                      \xB2\xB2                                                                                   \xB2\xB2\n";        
       cout<<"                      \xB2\xB2               ------------WELCOME TO SSF AIRLINE KARACHI------------              \xB2\xB2\n";
       cout<<"                      \xB2\xB2                                                                                   \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           1. GUEST ROOM                                           \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           2. FEATURES OF FLIGHT                                   \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           3. EMPLOYEES RECORD                                     \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           4. TRANSPORT                                            \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           5. TICKET                                               \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           6. LUGAGE CHECKER                                       \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           7. FLIGHT SCEHEDULE                                     \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           8. FLIGHT ROUTE                                         \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           9. RESTURANT                                            \xB2\xB2\n";
       cout<<"                      \xB2\xB2                           10. EXIT                                                \xB2\xB2\n";
       //cout<<"                      \xB2\xB2                           12.                                                     \xB2\xB2\n";
      // cout<<"                      \xB2\xB2                           13. Exit                                                \xB2\xB2\n";
       cout<<"                      \xB2\xB2                                                                                   \xB2\xB2\n";
	   cout<<"                      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  \n";
       
	   //***********************************//
	   // FOR CURRENT SYSTEM TIME //
	   //**********************************//
	   time_t tt; 
  
    // Declaring variable to store return value of 
    // localtime() 
    struct tm * ti; 
   // Applying time() 
    time (&tt); 
    // Using localtime() 
    ti = localtime(&tt);
	
	cout<<"\n\n \t\t\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"; 
    cout<< "\n  \t\t\t\t    Current Day, Date and Time is = "<< asctime(ti); 
	cout<<"   \t\t\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";   
	   
	   cout<<"\n\n\n ---------------------";
	   int mchoice;
       cout<<"\n~ENTER YOUR CHOICE: ";
       cin>>mchoice;

switch(mchoice)
{
    case 1:
{
	//**************************************//
	// SSF GUEST ROOM MAIN //
	//**************************************//
		 
   system("cls");
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2            WELCOME TO           \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2            SSF AIRLINE          \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2            GUEST HOUSE          \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2            (KARACHI)            \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2                                 \xB2\xB2";
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
   cout<<"\n\n-----------------------------------\n";
   cout<< "PRESS ANY KEY TO CONTINUE.......\n";
   _getch();
   system("cls");
   system("color 3");
   
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
   cout<<"\t\t\t\t\tCHOOSE ROOM TYPE:\n";
   cout<<"\n\t                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
   cout<<"\n\n\n1. Sp. Delux\n2. Delux\n3. General\n";
   
   int type;
   cout<<"\n\n\n------------------\nENTER YOUR CHOICE:";
   cin>>type;
   
   if(type>5)
     {
       printf("\nWrong choice!! Choose a number between 1-5:");
       main_menu();   
     }
     
   switch(type)
     {
       case 1:
	   {
	    ROOM_RESERVATION ob;
       	ob.spdelux();
		ob.Reservation();
       	break;
		}
       	
		case 2:
		{
       		ROOM_RESERVATION x;
       		x.delux();
			x.Reservation();
       		break;
       	}
       	
        case 3:
		{
			
         	ROOM_RESERVATION o;
         	o.general();
			o.Reservation();
         	break;
        }
        
        default:
        {
        	cout<<"\nINVALID CHOICE.\n";
        	cout<<"PRESS ANY KEY TO CONTINUE......";
			_getch();
			main_menu();
		}
    }	
}
     	
	 break;
     
case 2:
{
	//*****************************************//
	// FEATURES OF FLIGHT //
	//*****************************************//
	
	 	feature_of_flight();
}
     break;
     
case 3:
{
        //*******************************//
        // SSF AIRPORT EMPLOYEES //
        //*******************************//
       
    system("CLS");
	string password;
	Airport_staff a;
	
	cout<<"\n\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ----- SSF AIRPORT EMPLOYEE DATA ----- \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n\n\t\t\t ENTER THE SECURITY PASSWORD:";
	cin>>password;
	
	if(a.check_password(password))
	{
		printf("\n\n\t\t\t Password Match!\n\t\t\t\t LOADING");
		for (int i = 0; i <= 6; i++)
		{
			Sleep(1000);
			printf(".");
		}

		system("cls");
		int select;
		
		cout<<"\n\n\t\t\t -----TO READ DATA PRESS(1) AND TO WRITE DATA PRESS(2)------\n\n\n\n-------------\nYOUR CHOICE: ";
		cin>>select;
		
		if(select==1)
		{a.data_read();}
		
		else if(select==2)
		{a.store_data();}
		
		else
		{
		cout<<"INVALID INPUT"<<endl;
        main_menu();		
		}
	}
	
	else
	{
		cout<<"\n\n\t\t\t\t INVALID PASSWORD\n\n\t\t\t\t YOU ARE NOT ALLOWED TO SEE INFORMATION"<<endl;
	}
}
     break;
     
case 4:
{
	//**************************************//
	// TRANPORT SERVICE //
	//**************************************//
	
 	system("CLS");
	car cr;
	bus bs;
	bike bk;
	
	string name,pick_up,drop_of;
	int distance_in_km,choice;
	
	ofstream os("SSF AIRLINES TRANSPORT SERVICE.txt",ios::app);
	
	if(os.is_open())
	{

	cout<<"\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n\t\t\t           WELCOME TO SSF AIRLINE TRANSPORT  SERVICE  \n";
	cout<<" \t\t\t           ------------------------------------------\n";
	cout<<" \t\t\t           ------------------------------------------\n";
	cout<<"\n\t\t\t      PRESS 1 >>> CAR            >>> RATE: RS-50/-PER KM\n";
	cout<<"\n\t\t\t      PRESS 2 >>> BUS            >>> RATE: RS-30/-PER KM\n";
	cout<<"\n\t\t\t      PRESS 3 >>> MOTORBIKE      >>> RATE: RS-10/-PER KM\n";
	cout<<"\n\t\t\t      PRESS 4 >>> EXIT \n";
	cout<<" \t\t\t           ------------------------------------------\n";
	cout<<" \t\t\t           ------------------------------------------\n";
	cout<<"\n\n\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";

	cout<<"\n\n\n-------------------\nENTER YOUR CHOICE:";
	cin>>choice;
	
	if(choice==1||choice==2||choice==3)
	{
		system("CLS");
		cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   CUSTOMER INFORMATION   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
		cout<<"\n\n~ENTER CUSTOMER NAME: ";
		cin>>name;
		cout<<"\n~ENTER PICK-UP LOCATION(USE - INSTEAD OF SPACES): ";
		cin>>pick_up;
		cout<<"\n~ENTER DROP-OF LOCATION(USE - INSTEAD OF SPACES): ";
		cin>>drop_of;
		cout<<"\n~ENTER DISTANCE IN KM: ";
		cin>>distance_in_km;
		
		if(choice==1)
		{
			car cr(name,pick_up,drop_of,distance_in_km);
		    cr.cal_bill();
			os.write((char*)&cr,sizeof(cr)); //WRITING IN A FILE
		}
		else if(choice==2)
		{
			bus bs(name,pick_up,drop_of,distance_in_km);
			bs.cal_bill();
			os.write((char*)&bs,sizeof(bs)); //WRITING IN A FILE
		}
		else if(choice==3)
		{
			bike bk(name,pick_up,drop_of,distance_in_km);
			bk.cal_bill();
			os.write((char*)&bk,sizeof(bk)); //WRITING IN A FILE
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  INVALID CHOCIE!!!!  \xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
		main_menu();
	}
	}
	else
	{
		cout<<"FILE NOT OPEN"<<endl;
	}
}
     break;
     
case 5:
{
    //*************************//
    // TICKET BOOKING //
    //***********************//
	Ticket tk;
	tk.selection();
}
     break;     
case 6:
{
	//**********************************//
	// LUGAGE CHECKER //
	//*********************************//
	    
	 int lchoice;
	 luggage_checker lg;
	 system("CLS");
	 cout<<"\n\n\t\tWELCOME TO SSF AIRLINE LUGAGE CHECKING SYSTEM.\n";
	 cout<<"\n TO CHECK ITEMS           PRESS- 1\n TO ADD ITEMS THAT ARE INHIBITS ITEMS            PRESS- 0\n\n\n------------- \nYOUR CHOCIE:";
	 cin>>lchoice;
	
	 if(lchoice==1)
	 {
	  lg.working();
	 }
	
	else
	 {
		lg.upgrade_list();
	 }
	 	
}
     break;
     
case 7:
{
	 	//**********************//
	 	// FLIGHT SCHEDULE //
	 	//*********************//
	 	
	 	system("CLS");
	 	flight_schedule fs;
	    fs.flight_details();
}
     break;
     
case 8:
{
	 	//********************//
	 	// DESTINATIONS //
	 	//*******************//
	 	
	 	system("CLS");
	 	Destination();
}
     break;

case 9:
{ 	
	//******************************************//
	// RESTURANT //
	//*****************************************//
	
	 	system("color 4");
        //CALLING FUNCTION FROM HEADER FILE //
         Resturant r;
     	 r.resturant();
}
     break;

case 10:
{
	 	exit(0);
}
     break;

default:
{
	 	system("cls");
	 	printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-13");
        _getch();
        main_menu();
}
	 break;
}
}

int main()
{
	
system("color f2");
//int mchoice;
static int az=1; // TO CONTAIN ITS PREVIOUS VALUE //
system("CLS");

    char pass[4];
	const char *password = "ssf";
	
	cout<<"\n\n\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ----------- SSF AIRPORT MANAGEMNET SYSYTEM ------------- \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout<<"\n\n\t\t  Enter the password to login: ";
	cin>>pass;
	
if(az>0 && az<4) // SECURITY CHECK IF NUMBER OF TRIES ARE GREATER THAN 4 THEN PROGRAMS AUTOMATICALLY EXIT //	
{
	if (strcmp(pass, password) == 0)
	{
		cout<<"\n\n\t\t\t  Password Match!\n\n\t\t\t  LOADING";
		for (int i = 0; i <= 5; i++)
		{
			Sleep(1000);
			printf(".");
		}
        
		system("cls");
		
        screenheader();
        description();
        main_menu();
   }
   
   else
   {
   	cout<<"\n\n\t\t\t INVALID PASSWORD.";
   	az++;
   	cout<<"\n\n\n\t\t ~NUMBER OF TRY: "<<az-1;
   	cout<<"\n\n\n\nPRESS ANY KEY TO CONTINUE........";
	_getch();
   	main();
   }
}

else
{
	cout<<"\n\n\t\t\tSOMEONE IS TRYING TO GET IN THIS PROGRAM WITH ILL-LEGAL ACTIONS.......\n\n";
	exit(0);
}
return 0;
}
