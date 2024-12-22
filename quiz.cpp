#include<iostream>
using namespace std;
	

int main(){

	cout<<"         QUIZ COMPETETION               "<<endl;
	cout<<"----------------------------------------\n";
	string questions[]={"1. What is name of india first satellite?\n",
	                    "2. Which of the following is the capital of Arunachal Pradesh?\n",
	                    "3. What are the major languages spoken in Andhra Pradesh?\n",
	                    "4. Which of the following states is not located in the North?\n",
	                    "5. Which is the largest coffee-producing state of India?\n",
	                    "6. Which state has the largest area?\n",
	                    "7. Which state has the largest population?\n",
	                    "8. Who wrote Vande Mataram?\n",
	                    "9.Who was the first emperor of the Maurya Empire?\n ",
	                    "10.Who did first jauhar?\n"};
	      
	      


	      

     string options[][4]={"A.Aryabhata","B.Bhaskara","C.IRS series","D.Chandrayan 1",
	                      "A.Panaji","B. Dispur","C. Imphal","D. Itanagar",
                          "A.Odia and Telugu","B. Telugu and Urdu","C. Telugu and Kannada","D. All of the above languages",
                          "A.Jharkhand","B. Jammu and Kashmir","C. Himachal Pradesh","D. Haryana",
                          "A.Kerala","B.Tamil Nadu","C.Arunachal Pradesh","D.Karnataka",
                          "A.Rajasthan","B.Madhya Pradesh","C.Uttar Pradesh","D.Maharashtra",
                          "A.Maharastra","B.Uttar Pradesh","C.Bihar","D.Andra Pradesh",
                          "A.Bankimchandra Chatterjee","B.Sharat chandra chattopadhyay","C.Rabindranath Tagore ","D.None of the above",
                          "A.Samudragupta","B.Ashoka the Great ","C.Chandragupta Maurya ","D.Harsha",
                          "A.Rani Padmini","B.Rani Phool kunwar","C.Rani Hadi","D.Rani Karnavati"};
     char answerkey[]={'A','D','B','A','D','A','B','C','C','A'};
     int size=sizeof(questions)/sizeof(questions[0]);
     char guess;
     int score;
     for(int i=0;i<size;i++){
     	cout<<questions[i]<<"\n";
     
     	for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
     		cout<<options[i][j]<<"\n";

}
		 cin>>guess;
		 guess=toupper(guess);
		 if(guess==answerkey[i]){
		 	cout<<"Correct \n \n";
		 	score++;
		 }
		 else{
		 	cout<<"Wrong \n";
		 	cout<<"Answer : "<<answerkey[i]<<"\n\n";
		 }
     	
}
cout<<"************************************\n";
cout<<"*             RESULT               *\n";
cout<<"************************************\n\n";
cout<<"Correct Guess: "<<score<<"\n";
     	cout<<"No.of questions : "<<size<<"\n";
     	cout<<"Score :"<<(score/(double)size) *100<<"%"<<"\n";
return 0;

}
