//Akmal Adli Ariffin
//A17DW0074
//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

	char strPswd[80] ="samad1234";
//	char strPswd[80];
    char strPswd1[80]; 
	cout<<"Enter password: ";
	cin >>strPswd1[80];
	//get the strPswd
		strcmp (strPswd1, "Check");
	//make an if else that check the password(strPswd)
	//(string compare function (strPswd,"Check")) 
		if (strPswd1[80]==strPswd[80])
		{
			
		cout<<"Logged in "<<endl;
		}
	 	else 
	 	{
		cout<<"invalid password "<<endl;
		}
		
	

	return 0;
}
