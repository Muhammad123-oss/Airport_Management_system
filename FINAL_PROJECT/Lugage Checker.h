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

//***************************************************************************//
// SSF AIRPORT LUGAGE CHECKER //
//**************************************************************************//

class luggage_checker
{
protected:
	string choice,item1,item,continue1;
	int j;
	vector<string> v;
public:
	luggage_checker()
	{}
	void reading_objects();
	void checking(string);
	void upgrade_list();
	void working();
};

void luggage_checker :: checking(string item)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==item)
		{
			cout<<"THIS ITEM IS NOT ALLOWED"<<endl;
			break;
		}
		else if(i==v.size()-1)
		{
			cout<<"THIS ITEM IS ALLOWED"<<endl;
		}
	}
}

void luggage_checker :: reading_objects()
{
	ifstream is("SSF LUGAGE CHECKER THINGS RECORD.txt",ios::in); // OPENING A FILE
	if(is.is_open())
	{
	
	// istream_iterator ARE INPUT STREAMS THROUGH WHICH WE READ DATA FROM FILE AND INPUT THAT DATA INTO OUR VECTOR "V".//
	istream_iterator<string>is_it(is);	//THIS IS INPUT STREAM ITERATOR//
	istream_iterator<string>eos;	//THIS IS END OF STREAM ITERATOR//

	//ostream_iterator<string> cout_it(cout,"\n");	//THIS IS INITIALIZER FOR OUTPUT STREAM HERE "cout_it" IS INITIALIZING//

	//SYNTAX OF copy function: copy(input stream iterator,end of stream iterator,the variable/vector in which we want to copy our file)//
	copy(is_it,eos,back_inserter(v));	//"back_inserter()" is the function that is similar to "push_back()" function(used in vector) //
	//copy(v.begin(),v.end(),cout_it);
	}
	else
	{
		cout<<"FILE NOT FOUND"<<endl;
	}
}

void luggage_checker :: upgrade_list()
{
	vector <string>v2;
	while(choice!="1")
	{
        system("CLS");
		cout<<"\n\n ~ENTER ITEM YOU WANT TO ADD: ";
		cin>>item1;
		v2.push_back(item1);
		cout<<"\n\n ~IF YOU WANT TO ADD MORE ITEMS PRESS- 1 \n TO EXIT PRESS- 2 \n\n\n\n-------------------YOUR CHOCIE: ";
		cin>>choice;
		if(choice!="1")
		{
			break;
		}
		else
		{
			continue;
		}
	}
	ofstream os("SSF LUGAGE CHECKER THINGS RECORD.txt",ios::app);
	ostream_iterator <string> input(os,"\n");	//INITIALIZING THE OUTPUT STREAM THAT WRITES IN "os" PATH(MEANS FILE)//
	copy(v2.begin(),v2.end(),input);
}

void luggage_checker :: working()
{
    system("CLS");
    
	reading_objects();
    cout<<"\n\n\t\t WELCOME TO SSF AIRLINE LUGAGE CHECKER.\n\n";
	cout<<"\n\t\t\t----------- ENTER ITEMS TO CHECK WHETHER THIS ALLOWED OR NOT -----------"<<endl;
	cin>>item;
	checking(item);
	cout<<"\n\t\t TO CHECK MORE ITEM  PRESS- 1 \n\t\t TO EXIT PRESS- 0\n\n\n\n -------------------\nYOUR CHOICE:";
	cin>>continue1;
	
	if(continue1=="1")
	{
		 working();
	}
	else
	{
		
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
		cout<<"\n\n\n\t\t\t THANKYOU HAVE A SAFE JOURNEY."<<endl;
	}
}

