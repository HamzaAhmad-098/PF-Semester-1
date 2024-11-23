#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int payment( int , int );
bool isValidPassword( string password);
bool isValidEmail(string email);	
void header ();
string login();
bool signIn(string , string );
string signUp(string ,string);
bool adminLogin(string , string);
string  readFeedback();
bool removingStation(string);
bool addingStation(string);
void changePrice();
int userInterface();
string  changePasswordOrEmail(int , string );
void applyForCard();
void sendFeedback();
bool isAlphabetOnly( string name);
void getTicket(int , int , string,string ,string );
void offerDiscount();
void studentTicket(string,string,int,string,string);
void specialPersonTicket(string,string,int,string,string);
int checkDiscout();
void checkStationList();
int adminInterface();

const int MAX_STATIONS = 100; // Maximum number of stations
string stations[MAX_STATIONS] = {
    "Ali Town", "Thokar Niaz Baig", "Canal View", "Hanjarwal",
    "Wahdat Road", "Awan Town", "Sabzazar", "Shahnoor","Salahudin Road","Bund Road",
    "Samanabad","Gulshan-E-Ravi","Chauburji","Anarkali","G.P.O","Lakshmi",
    "Railway Station","Sultanpura","U.E.T","Baghbanpura","Shalamar Garden",
    "Pakistan Mint","Mahmood Booti","SalamatPura","Islam Park","Dera Gujran"
};
	int stationCount = 26; // Current count of stations in the array
	string em = "asd",pas = "123";
    string email , password ,checkEmail , checkpassword;
	string comment = "Nothing Found Here ...";
main()
{
	int choice;
	while (true) {
		system("cls");
		header ();
		cout << "Welcome to Orange Line Metro System\n";
		cout << "1. Admin Login\n";
		cout << "2. User Login\n"; 
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
	switch (choice) {
		case 1: {
		string e ,p;
		cout<<"Enter the email";
	    cin>>e;
	    cout<<"Enter the password";
	    cin>>p;
		if(adminLogin(e,p))
		{
		switch(adminInterface()){
		case 1:{
		int count = 0;
		string station;
		cin.ignore();
		while(true){
		cout << "Enter the name of the station: " << endl;
        cout << "And press ok if no any more station to be added: ";
        getline(cin,station);
		if(station == "ok"){
			cout<<count<<"  Stations added successfully! "<<endl;
			getch();
			break;
		}
		else if(addingStation(station)){
			count++;
		}
		else{ cout<<"List is Full "; 
		break;
		}
		}
		break;
		}
		case 2:{
			string stationToRemove;
            cout << "Enter the name of the station to remove: ";
            cin.ignore(); // To handle any leftover newline characters from previous inputs
            getline(cin, stationToRemove);
		    if(removingStation(stationToRemove))
			{
			 cout << "Station \"" << stationToRemove << "\" has been removed." << endl;
			 getch();
			}
			else{
			cout << "Station not found." << endl;
			getch();
			}
		    break;
		}
		
		case 3:{
			cout<<"Email : "<<checkEmail<<endl;
            cout<<readFeedback()<<endl;
			getch();
		
			break;
		}
		case 4 :{
			int choice ;
			string mail,pasword;
			while(true){
			cout<<"Enter 1 to change email\nEnter 2 to change password ";
			cin>>choice;
			if(choice==1){
				while(true){
				cout<<"Enter new email : ";
				cin>>mail;
				if(isValidEmail(mail)){
				cout<<changePasswordOrEmail(choice,mail);
				getch();
				break;
				}
				else{
				cout<<"It must contain the @ symbol.\nIt must not contain spaces.\nAll letters must be in lowercase. "<<endl;
				}
				}
				break;
			}				
			else if(choice==2){
				while(true){
					cout<<"Enter new password : ";
					cin>>pasword;
					if(isValidPassword(pasword)){
						cout<<changePasswordOrEmail(choice,pasword);
						getch();
					break;
					}
					else{
					cout<<"Password must be at least 8 character long \n and combination of numbers alphabets and special symbol "<<endl;  
					}
				}
				break;
				
			}				
			else{
				cout<<"Invalid choice"<<endl;
				getch();
			}	}			
		break;
			}
		case 5:
		break;
		default: cout<<"invalid choice ";
	    }
			}
        else{
			cout<<"Incorrect Email or password "<<endl;
			getch();
		}		
		break; 
		}
		case 2:{
			cin.ignore();
			if(login()=="1"){
				cout<<"Enter your Email :";
		        cin>>checkEmail;
				cout<<"Enter your password : ";
				cin>>checkpassword;
				if(signIn(checkEmail,checkpassword)){
					int start, end , payAmount,price;
					string startingStation , endingStation;
					int ch = userInterface();
					switch(ch){
						case 1: checkStationList();
						break;
						case 2 :{
							checkStationList();
							string mode;
							cout << "Enter the starting station number (1-" << stationCount << "): ";
							cin >> start;
							startingStation = stations[start-1];
							cout << "Enter the ending station number (1-" << stationCount << "): ";
							cin >> end;
							endingStation = stations[end-1];
							// Adjusting the user input to array index (since array index starts from 0)
							start -= 1;
							end -= 1;
							if (start >= 0 && start < stationCount && end >= 0 && end < stationCount) {
									price = payment(start, end);
							}
							else {
								cout << "Invalid station numbers entered." << endl;
								}
							cout<<"enter the amount you pay : ";
                            cin>>payAmount;
							cout<<"enter your mode of payment";
							cin>>mode;
						getTicket(price,payAmount,mode,startingStation,endingStation);
						break;
						}
						case 3:  sendFeedback();
						break;
						case 4:{
						switch(checkDiscout()){
							case 1:{
							string name,institute;
							while(true){
							cout<<"Your Name ";
							cin>>name;
							if(isAlphabetOnly(name)){
								break;
							}
							else{
								cout<<"Incorrect name name must be in characters ";
							}
							}
							cout<<"Studied at ..";
							cin>>institute;
							price = 0;
							checkStationList();
							cout << "Enter the starting station number (1-" << stationCount << "): ";
							cin >> start;
							startingStation = stations[start-1];
							cout << "Enter the ending station number (1-" << stationCount << "): ";
							cin >> end;
							endingStation = stations[end-1];
							studentTicket(name,institute,price,startingStation,endingStation);
							break;
							}
							case 2: {
							string name,fault;
							while(true){
							cout<<"Your Name ";
							cin>>name;
							if(isAlphabetOnly(name)){
								break;
							}
							else{
								cout<<"Incorrect name name must be in characters ";
							}
							}
							cout<<"deaf , blind ....";
							cin>>fault ;
							price =0;
							checkStationList();
							cout << "Enter the starting station number (1-" << stationCount << "): ";
							cin >> start;
							startingStation = stations[start-1];
							cout << "Enter the ending station number (1-" << stationCount << "): ";
							cin >> end;
							endingStation = stations[end-1];
							specialPersonTicket(name,fault,price,startingStation,endingStation);
							break;
							}
							default :
							cout<<"invalid choice";
							}
						break;
						}
						case 5 :
						system("cls");
						header();
						break;
						default:
						cout<<"Invalid choice ";
						getch();
					}
				}
				else{
					cout<<"user not found "<<endl;
					cout<<"You may not have an account "<<endl;
					cout<<"Press any key to proceed ";
					getch();
					system("cls");
					header();
				}
			}
			else {
				while(true){
				cout<<"Enter your email";
                cin>>email;
				if(isValidEmail(email)){
					break;
				}
				else{
					cout<<"It must contain the @ symbol.\nIt must not contain spaces.\nAll letters must be in lowercase."<<endl;
				}
				}
				while(true)
				{
				cout<<"Create a strong password ";
                cin>>password;
				if(isValidPassword(password)){
					break;
				}
				else{
					cout<<"Password must be at least 8 character long \n and combination of numbers alphabets and special symbol "<<endl;  
				}
				}
				signUp(email,password);
				system("cls");
				header();
			}	
			}
		break; 
		case 3: cout << "Exiting the system..." << endl; 
		return 0;
		default:{
        system("cls");			
		cout << "Invalid choice. Please try again." << endl;

		}
	}}
}
void header ()
{
	cout<<R"(####################################################################################################################)"<<endl;
	cout<<R"(# | |         / /\    | |   | |   /---\   | |----\  |-|----   | |\   /| |  |-|----   ---------  | |----\    /---\  #)"<<endl;
	cout<<R"(# | |        / / \\   | |___| |  |     |  | |    |  | |____   | | \ / | |  | |____      | |     | |    |   |     | #)"<<endl;
	cout<<R"(# | |____   / /___\\  | |___| |  |     |  | |----/  | |       | |     | |  | |          | |     | |----/   |     | #)"<<endl;
	cout<<R"(# |______| / /     \\ | |   | |   \---/   | |  \ \  |-|----   | |     | |  |-|----      |-|     | |  \ \    \---/  #)"<<endl<<endl;
	cout<<R"(#  /---\   | |----\    / /\\    | |\   | |   /-----\   | |----   | |        ------  | |\   | |  | |----            #)"<<endl;
	cout<<R"(# |     |  | |    |   / /  \\   | | \  | |  | |        | |____   | |         | |    | | \  | |  | |____            #)"<<endl;
	cout<<R"(# |     |  | |----/  / /____\\  | |  \ | |  | |  -|-|  | |       | |_____    | |    | |  \ | |  | |                #)"<<endl;
	cout<<R"(#  \---/   | |  \ \ / /      \\ | |   \| |  | |---| |  | |----   |_______|  ------  | |   \| |  | |-----           #)"<<endl;
	cout<<R"(####################################################################################################################)"<<endl;

}


string login()
{
	
	string sign ;
	cout<<" 1. sign in if you have account  "<<endl;
	cout<<" 2. sign up if you are new     "<<endl;
	getline(cin,sign);
	if(sign == "1" ||sign=="2"){
	    return sign;
	}
	else{
		system("cls");
		header();
		cout<<"Invalid Input "<<endl;
		login();
	}
}
bool signIn(string checkEmail ,string checkpassword)
{    
		if(checkEmail ==  email && checkpassword ==  password )
		{
		    return true;
		}
		else
		{
			return false;
		}
}
string signUp(string emails,string passwords)
{
	email =emails;
	password =passwords ;
	string str = "sign up successfully";
	return str;
}
bool adminLogin(string e , string p)
{	
	if(e==em&&p==pas)
	{
		return true ;
	}
	else{
		return false ;
	}
}
int adminInterface()
{
	system("cls");
	header();
	int choice;
	cout<<"1.Adding station "<<endl;
	cout<<"2.Removing station  "<<endl;
	cout<<"3.Read feedback "<<endl;
	cout<<"4.changePasswordOrEmail "<<endl;
	cout<<"5.Exit "<<endl;
	cout<<"Enter your choice : \n";
	cin>>choice;
	return choice;
}
bool addingStation(string station)
{
        if (stationCount < MAX_STATIONS) {
            stations[stationCount] = station;
            stationCount++;
			return true;
        } else {
            return false;
        }
}
bool removingStation(string stationToRemove)
{
    int index = -1;
    for (int i = 0; i < stationCount; i++) {
        if (stations[i] == stationToRemove) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < stationCount - 1; i++) {
            stations[i] = stations[i + 1];
			return true;
        }
        stationCount--;
       
    } else {
        return false;
    }
}
string  readFeedback()
{ 	
	return comment ; 
}
string changePasswordOrEmail(int choice , string check)
{
	if(choice==1){
		em = check;
	return "Email changed successfully..."; 
	}
	else if(choice==2){
		pas = check;
	return "Password changed successfully...";
	}
}
int userInterface()
{
	system("cls");
	header();
	int choice;
	cout<<"1.Check stations list"<<endl;
	cout<<"2.Get ticket online"<<endl;
	cout<<"3.send feed back"<<endl;
	cout<<"4.SEE for discount "<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

void checkStationList()
{
	system("cls");
	header();
	string x;
    cout << "List of Orange Line Stations in Lahore:" << endl;
    for (int i = 0; i < stationCount; ++i) {
        cout << (i + 1) << ". " << stations[i] << endl;
    }
	cout<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	getch();
    
}
void getTicket(int price,int payAmount,string mode,string startingStation,string endingStation)
{
	system("cls");
	int remaining = payAmount - price;
	cout<<endl<<endl;
	cout<<"           SVC receipt                 			                "<<endl;
	cout<<"------------------------------------------       "<<endl;
	cout<<" Ticket type : Normal stored value tocken  	                "<<endl;
	cout<<"	Mode of payment  : "<<mode                               <<endl;
	cout<<"	Pay amount is :   "<< payAmount                          <<endl;
	cout<<"	Price is :    "<< price<<endl;           	      
	cout<<"	Remaining Fare Value : "<<remaining						<<endl;
	cout<<"	Current Station  :    "<<startingStation				<<endl;
	cout<<"	Token is from "<<startingStation <<" to "<<endingStation <<endl;
	cout<<"	please check the receipt"<<endl;
	cout<<"Press any key to proceed....";
	getch();
}
void sendFeedback()
{
	cout<<"Feed back"<<endl;
	cout<<"~&/Send your experience and about journey via orange line /&~"<<endl;
	cin.ignore();
	getline(cin,comment);
	system("cls");
	header();
}

void offerDiscount()
{
	cout<<"There will be no charge for students";
	
}
int checkDiscout()
{
	int choice;
	cout<<"1. you are student! "<<endl;
	cout<<"2. you are special person ! "<<endl;
    cout<<"Enter your choice ";
	cin>>choice;
	if(choice==1||choice==2){
		return choice;
	}
	else{
		cout<<"Invalid input ";
		checkDiscout();
	}
}
void studentTicket(string name,string institute,int price,string startingStation,string endingStation)
{
	system("cls");
	cout<<"-----------------------------------------"<<endl;
	cout<<endl<<endl;
	cout<<"           SVC receipt                 			                "<<endl;
	cout<<"------------------------------------------       "<<endl;
	cout<<" Ticket type : Student Type value tocken  	                "<<endl;
	cout<<"	Student Name  : "<<name                               <<endl;
	cout<<"	Institute Name :   "<< institute                          <<endl;
	cout<<"	Price is :    "<< price<<endl;           	      
	cout<<"	Current Station  :    "<<startingStation				<<endl;
	cout<<"	Token is from "<<startingStation <<" to "<<endingStation <<endl;
	cout<<"	please check the receipt"<<endl;
	cout<<"Press any key to proceed....";
	getch();
}
void specialPersonTicket(string name ,string fault ,int price,string startingStation , string endingStation )
{
	system("cls");
	cout<<"---------------------------------"<<endl;
	cout<<endl<<endl;
	cout<<"           SVC receipt                 			                "<<endl;
	cout<<"------------------------------------------       "<<endl;
	cout<<" Ticket type : Special Person value tocken  	                "<<endl;
	cout<<"	Person Name  : "<<name                               <<endl;
	cout<<"	Disability  :   "<< fault                          <<endl;
	cout<<"	Price is :    "<< price<<endl;           	      
	cout<<"	Current Station  :    "<<startingStation				<<endl;
	cout<<"	Token is from "<<startingStation <<" to "<<endingStation <<endl;
	cout<<"	please check the receipt"<<endl;
	cout<<"Press any key to proceed....";
	getch();
}
int payment(int start, int end) {
    int stationsToTravel = abs(end - start);
    int ticketPrice = 25 + (stationsToTravel - 1) * 5;
    if (ticketPrice > 45) {
        ticketPrice = 45;
    }

    return ticketPrice;
}
bool isValidPassword(string password) {
    if (password.length() < 8) {
        return false;
    }

    bool hasNumber = false, hasLetter = false, hasSpecialChar = false;
    for (int i = 0; i < password.length(); i++) {
        if ((password[i] >= '0' && password[i] <= '9')) {
            hasNumber = true;
        }
        else if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z')) {
            hasLetter = true;
        }
        else {
            hasSpecialChar = true;
        }
    }

    return hasNumber && hasLetter && hasSpecialChar;
}
bool isValidEmail(string email) {
    bool hasAtSymbol = false;
    for (int i = 0; i < email.length(); i++) {
        char c = email[i];
        if (c == '@') {
            hasAtSymbol = true;
        }
        if (c == ' ') {
            return false;
        }
        if (c >= 'A' && c <= 'Z') {
            return false;
        }
    }
    return hasAtSymbol;
}
bool isAlphabetOnly( string name) {
    for (int i = 0; i < name.length(); i++) {
        char ch = name[i];
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            return false;
        }
    }
    return true;
}