#include<iostream>
#include<string>
using namespace std;
int payment( string , string );
void interface();
void header ();
void login();
void signIn();
void signUp();
void adminLogin();
void validation();
string startingStation ;
string endingStation;
void adminInterface();
int payAmount;
string mode;

string email , password ,checkEmail , checkpassword;
 main()
{
	header ();
	int choice;
	while (true) {
		cout << "Welcome to Orange Line Metro System\n";
		cout << "1. Admin Login\n";
		cout << "2. User Login\n"; 
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
	switch (choice) {
		case 1: adminLogin(); 
		break; 
		case 2: login(); 
		break; 
		case 3: cout << "Exiting the system..." << endl; 
		return 0;
		default: cout << "Invalid choice. Please try again." << endl;
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
int payment(string startingStation , string endingStation)
{ 
   int cost ;
	if(startingStation =="DERAGUJRAN")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 30;
		}
		if(endingStation=="UET")
		{
			cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 35;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 35;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 35;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 35;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 35;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 40;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 40;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 40;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 40;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 40;
		}
		
		 if(endingStation=="WAHDATROAD")
		{
			cost = 45;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 45;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 45;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 45;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 45;
		}
	}
    else if(startingStation =="ISLAMPARK")
	{
		
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 35;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 35;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 35;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 35;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 40;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 40;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 40;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 40;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 40;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 45;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 45;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 45;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 45;
		}
		
	}
	else if(startingStation =="SALAMATPURA")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 35;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 35;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 35;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 40;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 40;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 40;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 40;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 45;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 45;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 45;
		}
		
	}
	else if(startingStation =="MAHMOODBOOTI")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 35;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 35;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT ")
		{
			cost = 35;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 40;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 40;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 40;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 40;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 45;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 45;
		}
		
	}
	else if(startingStation =="PAKISTANMINT")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWALSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 35;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 35;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 35;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 40;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 40;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 40;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 40;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 45;
		}
		
	}
	else if(startingStation =="SHALAMARGARDEN")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 35;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 35;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 35;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 40;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 40;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 40;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 40;
		}
		
	}
	else if(startingStation =="BAGHBANPURA")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 25;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDIDROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT ")
		{
			cost = 35;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 35;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 35;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 35;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 40;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 40;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 40;
		}
	}
	else if(startingStation =="UET")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 30;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 25;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 35;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 35;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 35;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 35;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 35;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 40;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 40;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 40;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 40;
		}
		
	}	
	else if(startingStation =="SULTANPURA")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 30;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 30;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 25;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 35;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 35;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 35;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 35;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 35;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 40;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 40;
		}
		
	}
	else if(startingStation =="RAILWAYSTATION")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 30;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 30;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 30;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 25;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 35;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 35;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 35;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 35;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 35;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 40;
		}
		
	}
	else if(startingStation =="LAKSHMI")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 30;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 30;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 30;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 30;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 25;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 30;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 35;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 35;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 35;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 35;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 35;
		}
		
	}
	else if(startingStation =="GPO")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 30;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 30;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 30;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 30;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 30;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 25;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 30;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 30;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 35;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 35;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 35;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 35;
		}
		
	}
	else if(startingStation =="ANARKALI")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 35;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 30;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 30;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 30;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 30;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 30;
		}
		if(endingStation=="UET")
		{
			cost = 25;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 30;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 30;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 30;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 35;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 35;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 35;
		}
		
	}
	else if(startingStation =="CHAUBURJI")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 35;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 30;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 30;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 30;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 30;
		}
		if(endingStation=="UET")
		{
			cost = 30;	
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 25;	
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;	
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;	
		}
		if(endingStation=="GPO")
		{
			cost = 25;	
		}
		if(endingStation=="ANARKALI")
		{
		    cost = 25;	
		}
		
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 30;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 30;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 30;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 35;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 35;
		}
		
	}
	else if(startingStation =="GULSHANERAVI")
	{
	
		if(endingStation=="ISLAMPARK")
		{
			cost = 35;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 35;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 30;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 30;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 30;
		}
		if(endingStation=="UET")
		{
			cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 25;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 30;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 30;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 30;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 30;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 35;
		}
		
	}
	else if(startingStation =="SAMANABAD")
	{
		
		if(endingStation=="ISLAMPARK")
		{
			 cost = 35;
		}
		if(endingStation=="SALAMATPURA")
		{
			 cost = 35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			 cost = 35;
		}
		if(endingStation=="PAKISTANMINT")
		{
			 cost = 35;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			 cost = 30;
		}
		if(endingStation=="BAGHBANPURA")
		{
			 cost = 30;
		}
		if(endingStation=="UET")
		{
			 cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			 cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			 cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 25;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			 cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
		    cost = 25;
		}
		
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 30;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 30;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 30;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 30;
		}
		
	}
	else if(startingStation =="BUNDROAD")
	{
		
		if(endingStation=="ISLAMPARK")
		{
			cost = 35;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 35;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 35;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 35;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 30;
		}
		if(endingStation=="UET")
		{
			cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 25;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 25;
		}
		
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 30;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 30;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 30;
		}
		
	}
	else if(startingStation =="SALAHUDINROAD")
	{
		
		if(endingStation=="ISLAMPARK")
		{
			cost =40;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost =35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost =35;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost =35;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost =35;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost =35;
		}
		if(endingStation=="UET")
		{
			cost =30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost =30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost =30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost =30;
		}
		if(endingStation=="GPO")
		{
			cost =30;
		}
		if(endingStation=="ANARKALI")
		{
			cost =25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost =25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost =25;
		}
		if(endingStation=="SAMANABAD")
		{
			cost =25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost =25;
		}
		
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 30;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 30;
		}
		
	}
	else  if(startingStation =="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
	{

		if(endingStation=="ISLAMPARK")
		{
			cost = 40;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 35;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 35;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 35;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 35;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 35;
		}
		if(endingStation=="UET")
		{
			cost = 30;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 30;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 25;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 25;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
		   cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		
		if( endingStation =="SALAHUDIN")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 30;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 30;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 30;
		}
		
	}
	else if(startingStation =="SABZAZAR")
	{
		
		if(endingStation=="ISLAMPARK")
		{
			cost = 40;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 40;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 40;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 35;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 35;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 35;
		}
		if(endingStation=="UET")
		{
			cost = 35;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 35;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 30;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 30;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 25;
		}
		if(endingStation=="SAMANABAD")
		{
		    cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 30;
		}
		
	}
	else if(startingStation =="AWANTOWN")
	{
		if(endingStation=="ISLAMPARK")
		{
			cost = 40;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 40;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 40;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 40;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 35;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 35;
		}
		if(endingStation=="UET")
		{
			cost = 35;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 35;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			 cost = 35;
		}
		if(endingStation=="LAKSHMI")
		{
			 cost = 30;
		}
		if(endingStation=="GPO")
		{
			 cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
		      cost = 30;	
		}
		if(endingStation=="CHAUBURJI")
		{
			 cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			 cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			 cost = 25;
		}
		if(endingStation=="BUNDROAD")
		{
			 cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			 cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			 cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
		    cost = 25;
		}
		
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 25;
		}
		
	}
	else if(startingStation =="WAHDATROAD")
	{
	
		if(endingStation=="ISLAMPARK")
		{
			cost = 40;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 40;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 40;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 40;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 40;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 35;
		}
		if(endingStation=="UET")
		{
			cost = 35;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 35;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 35;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 35;
		}
		if(endingStation=="GPO")
		{
			cost = 30;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
		    cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 25;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
		    cost = 25; 	
		}
        		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 25;
		}
		
	}
	else if(startingStation =="HANJARWAL")
	{
	
		if(endingStation=="ISLAMPARK")
		{
			cost = 45;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 40;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 40;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 40;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 40;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 40;
		}
		if(endingStation=="UET")
		{
			cost = 35;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 35;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 35;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 35;
		}
		if(endingStation=="GPO")
		{
			cost = 35;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 30;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 25;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 25;
		}
		
	}
	else if(startingStation =="CANALVIEW")
	{
		
		if(endingStation=="ISLAMPARK")
		{
			cost = 45;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 45;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 40;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 40;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 40;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 40;
		}
		if(endingStation=="UET")
		{
			cost = 40;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 35;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 35;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 35;
		}
		if(endingStation=="GPO")
		{
			cost = 35;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 35;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 30;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 25;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
		if(endingStation=="ALITOWN")
		{
			cost = 25;
		}
		
	}
	else  if(startingStation =="THOKARNIAZBAIG")
	{
	
		if(endingStation=="ISLAMPARK")
		{
			cost = 45;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 45;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 45;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 40;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 40;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 40;
		}
		if(endingStation=="UET")
		{
			cost = 40;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 40;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 35;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 35;
		}
		if(endingStation=="GPO")
		{
			cost = 35;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 35;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 35;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 30;
		}
		if(endingStation=="SAMANABAD")
		{
		    cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
		    cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 25;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		
		if(endingStation=="ALITOWN")
		{
			cost = 25;
		}
		
	}
	else if(startingStation =="ALITOWN")
	{
	
		if(endingStation=="ISLAMPARK")
		{
			cost = 45;
		}
		if(endingStation=="SALAMATPURA")
		{
			cost = 45;
		}
		if(endingStation=="MAHMOODBOOTI")
		{
			cost = 45;
		}
		if(endingStation=="PAKISTANMINT")
		{
			cost = 45;
		}
		if(endingStation=="SHALAMARGARDEN")
		{
			cost = 40;
		}
		if(endingStation=="BAGHBANPURA")
		{
			cost = 40;
		}
		if(endingStation=="UET")
		{
			cost = 40;
		}
		if(endingStation=="SULTANPURA")
		{
			cost = 40;
		}
		if(endingStation=="RAILWAYSTATION")
		{
			cost = 40;
		}
		if(endingStation=="LAKSHMI")
		{
			cost = 35;
		}
		if(endingStation=="GPO")
		{
			cost = 35;
		}
		if(endingStation=="ANARKALI")
		{
			cost = 35;
		}
		if(endingStation=="CHAUBURJI")
		{
			cost = 35;
		}
		if(endingStation=="GULSHANERAVI")
		{
			cost = 35;
		}
		if(endingStation=="SAMANABAD")
		{
			cost = 30;
		}
		if(endingStation=="BUNDROAD")
		{
			cost = 30;
		}
		if(endingStation=="SALAHUDINROAD")
		{
			cost = 30;
		}
		if(endingStation=="SHAHNOOR" || startingStation =="KHATAMENABUWAT")
		{
			cost = 30;
		}
		if(endingStation=="SABZAZAR")
		{
			cost = 30;
		}
		if(endingStation=="AWANTOWN")
		{
			cost = 25;
		}
        if(endingStation=="WAHDATROAD")
		{
			cost = 25;
		}		
		if(endingStation=="HANJARWAL")
		{
			cost = 25;
		}
		if(endingStation=="CANALVIEW")
		{
			cost = 25;
		}
		if(endingStation=="THOKARNIAZBAIG")
		{
			cost = 25;
		}
       
	}
	else {
		system("cls");
		header();
		cout<<"Incorect format \n Make sure you write station name in capital letters and without spaces"<<endl;
		validation();
	}
  
	
	return cost;
}
void interface()
{  
    
    int remaining = payAmount - payment( startingStation ,  endingStation);
	cout<<"###################################################"<<endl;
	cout<<"#           SVC receipt                 			       #"<<endl;
	cout<<"#          -------------                   		       #"<<endl;
	cout<<"# 	 Ticket type : Normal stored value tocken  	       #"<<endl;
	cout<<"#	Mode of payment  : "<<mode<<endl;
	cout<<"#	Pay amount is :   "<< payAmount         	              	 <<endl;
	cout<<"#	Price is :       "<< payment( startingStation ,  endingStation)           	             <<endl; 
	cout<<"#	Remaining Fare Value : "<<remaining         	         <<endl;
	cout<<"#	Station name :       "<<startingStation               	     <<endl;
	cout<<"#	Token is from "<<startingStation <<" to "<<endingStation      <<endl;
	cout<<"#	   please check the receipt                                   #"<<endl;
	cout<<"###################################################";
}
void login()
{
	string sign ;
	cout<<" Enter sign in if you have account  "<<endl;
	cout<<"   Enter sign up if you are new     "<<endl;
	cin>>sign;
	if(sign =="signin")
	{
        signIn();
		
	}
	if(sign=="signup")
	{		
       signUp();
	   
	   system("cls");
	   header();
	   cout<<"welcome"<<endl;
	   cout<<"Now sign in our platform "<<endl;
	   
	   signIn();
	}
}
void signIn()
{
	    cout<<"Enter your Email :";
		cin>>checkEmail;
		cout<<"Enter your password : ";
		cin>>checkpassword;
		if(checkEmail ==  email && checkpassword ==  password )
		{
		     validation();
			
		}
		else
		{
			system("cls");
			header();
			cout<<"user not found "<<endl;
            cout<<"Incorrect email or password "<<endl;
			
			cout<<"TRY AGAIN"<<endl;
			signIn();
			
		}
}
void signUp()
{
	
		cout<<"Enter your email";
        cin>>email;
        cout<<"Create strong password";
        cin>>password;
		
}
void validation()
{
	
	cout<<"enter starting station :";
	cin>> startingStation;
	cout<<"enter ending station :";
	cin>> endingStation;
	int cost = payment(startingStation , endingStation);
    cout<<"enter the amount you pay : ";
    cin>>payAmount;
	cout<<"enter your mode of payment";
	cin>>mode;
	system("cls");
	header();
	interface();
}
void adminLogin()
{
	string e ,p ,em ,pas ;
	em = "abc@gmail.com";
	pas = "12345678";
	while(true){
	cout<<"Enter the email";
	cin>>e;
	cout<<"Enter the password";
	cin>>p;
	if(e==em&&p==pas)
	{
		adminInterface();
		break;
	}
	else{
		cout<<"incorrect email or password"<<endl;
	}}
}
void adminInterface()
{
	cout<<"here admin";
}