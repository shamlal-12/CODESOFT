#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int Number=rand()%10+1;
	
	int guess=0;
	
	do
	{
		cout<<" Please Enter the Number Between (1-10): ";
		cin>>Number;
		
		if(guess>Number)
			cout<<" Guess Lower! "<<endl;
		else if(guess<Number)
			cout<<" Guess Higher! "<<endl;
		else 
			cout<<" You won the Guessing Game!"<<endl;
		
	} while (guess!=Number);
}
