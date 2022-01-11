#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void main_menu();
class Resturant
{
public:
	
void resturant()
{
	system("cls");
	system ("color 4");
	int choice1,price2;
	
	cout<<"\n\t\t\tWELCOME TO SSF RESTURANT\n";
	cout<<"\n\n~THERE ARE ALL KIND OF FOODS:\n\n";
	cout<<"\n1.FAST FOOD RESTURANT\n2.DESI FOOD RESTURANT\n3.CHINESE FOOD RESTURANT\n4.DESERT\n5.EXIT\n\n\n~ENTER YOUR CHOICE:";
    cin>>choice1;
    system("cls");
    cout<<"PRESS ANY KEY TO CONTINUE....";
    _getch();

    switch(choice1)
	{
    	case 1:
    		{
    	    system("cls");
    		cout<<"\n\t\t~WELCOME TO FAST FOOD RESTURANT\n\n\n";
    		int choice;
    		int price;
    		
    		cout<<"1.QTR BROAST \t\t Rs-200/-\n2.HALF BROAST \t\t Rs-400/-\n3.ZINGER BURGER \t Rs-190/-\n4.CHICKEN BURGER \t Rs-160/-\n5.CLUB SANDWICH \t Rs-230/-\n6.BBQ CLUB SANDWICH \t Rs-250/-\n\n~ENTER YOUR CHOICE=";
    		cin>>choice;
    	
    	    switch(choice)
    	    {
			
    		case 1:
			{
    			int qty;
    			int rate=200;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-\n";
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
    		}
			break;
			
			case 2:
			{
    			int qty;
    			int rate=400;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty;
    			int rate=190;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty;
    			int rate=160;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty;
    			int rate=230;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty;
    			int rate=250;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			default:
			{
				cout<<endl<<"INVALID CHOICE...."<<endl;
				
			}
				break;
		}
  }
		break;
			
		case 2:
		{
			system("cls");
			cout<<"\n\t\t~WELCOME TO DESI FOOD RESTURANT\n\n\n";
    		int choice,price;
    		cout<<"1.CHICKEN KARAHI \t Rs-800/-\n2.MUTTON KARAHI \t Rs-1200/-\n3.BEAF KARAHI \t Rs-1000/-\n4.CHICKEN KORMA \t Rs-760/-\n5.CHICKEN TIKKA \t Rs-230/-\n6.CHARGHA \t Rs-950/-\n\n~ENTER YOUR CHOICE=";
    		cin>>choice;
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty;
    			int rate=800;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty;
    			int rate=1200;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
		    case 3:
			{
    			int qty;
    			int rate=1000;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty;
    			int rate=760;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty;
    			int rate=230;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}	
			}
			break;
			
			case 6:
			{
    			int qty;
    			int rate=950;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
					
			default:
				{
					cout<<endl<<"INVALID CHOICE...."<<endl;
				}
				break;
    }

}
			break;
		
		case 3:
		{
			system("cls");
			cout<<"\n\t\t~WELCOME TO CHINESE FOOD RESTURANT\n\n\n";
    		int choice;
    		cout<<"1.BBQ SHASHLIK \t Rs-400/-\n2.CHICKEN SHASHLIK \t Rs-350/-\n3.CHICKEN MANCHUREIN \t Rs-360/-\n4.CHICKEN CHILLI \t Rs-360/-\n5.CHICKEN JALFREZI \t Rs-430/-\n6.CHICKEN PASTA \t Rs-250/-\n\n~ENTER YOUR CHOICE=";
    		cin>>choice;
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty,price;
    			int rate=400;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty,price;
    			int rate=350;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty,price;
    			int rate=360;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty,price;
    			int rate=360;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty,price;
    			int rate=430;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty,price;
    			int rate=250;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
				    system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			default:
				{
					cout<<endl<<"INVALID CHOICE...."<<endl;
				}
	}
}
		break;
		
		case 4:
		{
			system("cls");
			cout<<"\n\t\t~WELCOME TO DESERT WORLD RESTURANT\n\n\n";
    		int choice;
    		cout<<"1.KHEER \t Rs-200/-\n2.ICECREAM \t Rs-400/-\n3.FALOODA \t Rs-190/-\n4.KULFI \t Rs-160/-\n5.GOLA GANDA \t Rs-230/-\n6.ICE COFFEE \t Rs-250/-\n\n~ENTER YOUR CHOICE=";
    		cin>>choice;
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty,price;
    			int rate=200;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty,price;
    			int rate=400;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty,price;
    			int rate=190;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty,price;
    			int rate=160;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty,price;
    			int rate=230;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty,price;
    			int rate=250;
    			cout<<"\n~ENTER QUANTITY=";
    			cin>>qty;
    			price=qty*rate;
    			cout<<"\n~PRICE=Rs-"<<price<<"/-"<<endl;
    			
    			int x;
    			cout<<"DO YOU WONT TO HAVE MORE(1/0):";
    			cin>>x;
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					price2=price+rate*qty;
					cout<<"TOTAL BILL=Rs-"<<price2;//PRINTING THE UPDATED PRICE//
					cout<<"\n\t THANK YOU.\n";
					cout<<"\tYour next meal could be on us!\n";
					cout<<"Simply tell us how you fell at SSF AIRPORT\n";
					cout<<"\tssfairport@nu.edu.pk\n\n";
					cout<<"\nPRESS ANY KEY TO CONTINUE...";
					_getch();
					main_menu();
				}
			}
			break;
			
			default:
				{
					cout<<endl<<"INVALID CHOICE...."<<endl;
				}
				break;
		}
        }
		break;
		
		case 5:
		{
			main_menu();	//BACK TO MAIN MENU
		}
		break;
		
		default: //FOR INVALID CHOICE//
		{
			system("cls");
			cout<<endl<<"INVALID CHOICE...."<<endl;
			cout<<"\nChoose 1-4\n";
			_getch();
			system("cls");
			resturant(); 
		} 
	}
  }
};

