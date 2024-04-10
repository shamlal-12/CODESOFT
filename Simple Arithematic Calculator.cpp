#include<iostream>
using namespace std;

int main()
{
	double num1, num2;
	char operation;
	cout<<" Please Enter the value of Num1: ";
	cin>>num1;
	cout<<" Please Enter the value of Num2: ";
	cin>>num2;
	
	cout<<" \nEnter the Operation(+, -, *, /)"<<endl;
	cin>>operation;
	
	switch(operation)
	{
		case '+':
			cout<<"Sum of two Numbers is: "<<num1<<operation<<num2<<" = "<<num1+num2<<endl;
			break;
			
		case '-':
			cout<<"Subtraction of two Numbers is: "<<num1<<operation<<num2<<" = "<<num1-num2<<endl;
			break;
			
		case '*':
			cout<<"Multiplication of two Numbers is: "<<num1<<operation<<num2<<" = "<<num1*num2<<endl;
			break;
			
		case '/':
			if (num2=0.0)
			cout<<" Dividing Zero Makes Infinite"<<endl;
			else
			cout<<"Division of two Numbers is: "<<num1<<operation<<num2<<" = "<<num1/num2<<endl;
			break;
			
		default:
			cout<<" You have enetered Invalid Number"<<endl;
	}
	
		
		return 0;
}
