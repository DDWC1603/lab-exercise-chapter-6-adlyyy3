//Akmal Adli Ariffin
//A17DW0074
//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	char lowerToUpper[80];
	int x;
	
	strcpy(lowerToUpper, "This is a check");

	for(x=0;x<10;x++)
	{
		lowerToUpper[x] = toupper(lowerToUpper[x]);

	}

	cout<<lowerToUpper<<endl;
}
	
