#include<iostream>
using namespace std;
int main()
{
	int num1,num2,res;
	char operation;
	cout<<"================================\n";
	cout<<"          CALCULATOR           \n ";
	cout<<"================================\n";
	cout<<"\nEnter first number :";
	cin>>num1;
	cout<<"\nEnter the operation (+,-,*,/):";
	cin>>operation;
	cout<<"\nEnter second number :";
	cin>>num2;
	switch(operation)
	{
		case'+':
			res =num1+num2;
			cout<<"result ="<<res;
			break;
		case'-':
		    res =num1-num2;
			cout<<"result ="<<res;
			break;
		case'*':
		    res =num1*num2;
			cout<<"result ="<<res;
			break;
		case'/':
		    res =num1/num2;
			cout<<"result ="<<res;
			break;
		default:
		   cout<<"Error: Invalid Operation."<<endl;			
	}
	return 0;
}

