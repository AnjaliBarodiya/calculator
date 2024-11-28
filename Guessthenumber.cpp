#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{ 
    int guess;
	int num;
	int tries;
	
    
	srand(time(NULL));
	num=(rand()%100)+1;
	cout<<"------------------------------------------------------------\n";
	cout<<"Number Guessing Game\n";
	cout<<"------------------------------------------------------------\n";
	do{
		cout<<"Enter the number between(1-100):";
		cin>>guess;
		tries++;
		if(guess>num)
		{
			cout<<"Too High\n";
		}
		
		else if(guess<num)
		{
			cout<<"Too Low \n";

		}	
		else
		cout<<"Correct #Tries:"<<tries;
	}
	while(guess!=num);
	cout<<"\n********************************************************";
	return 0;
	
	
	
}
