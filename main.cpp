#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

ofstream g("password.out");

int main() 
{
	int i, randomSymbol=rand();

	char answer;
	cout<<"Start the generator? (Y/N)\n";
  	cin>>answer;
  	if(answer=='Y'||answer=='y')
  	{
		cout<<"How strong should your password be? (max 2048)\n";
		cin>>i;
		if(i>0&&i<=128)
		{
			srand((unsigned) time(0));
  			for (int j=0; j<i; j++) 
			{
    			randomSymbol=(rand()%93)+33;
    			g<<(char)randomSymbol;
			}
			g<<"\n\n~ Password containing "<<i<<" symbols ~";
			g<<"\n~ Restart the program to generate another password ~";
			cout<<"Check password.out";
		}
		else
		{
			cout<<"Chose a number between 1 and 128!\n";
			return 0;
		}
 	} 
 	else if(answer=='N'||answer=='n')
  	{
		return 0;
 	}
	else
  	{
	  cout<<"error 404, please restart the program!\n";
  	}
  	return 0;
}
