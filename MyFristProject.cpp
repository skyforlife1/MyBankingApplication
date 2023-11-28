#include <iostream>




void mainpro();
void returnkey ( );
void options();
int select ();
void  deposit();
float savings();
float add_to_account();
float savings_balance( );
float checquing_balance ();
float checquing();
void option2(int sel);
void choose_balance ();







int main()
{
	mainpro();
}




void mainpro()
{
	
	int choice; 
	
	//call a function for options 
	//take user input
	options();	
	choice = select();
	// simp;le UI
	//while(choice !=0){
	// options();
	 //std::cin >> choice;
	switch(choice)  {
	case 1:{
		std:: cout <<"\nYou have selected Deposit \n";
		deposit();
		int ch = select();
		option2(ch);
		// 1 Deposit 
		//call a deposit function		
	}
		
	case 2:  
	    // 2 Withdrawl
	    //call withdrawl funtion
	    
	case 3: 
	     {
	     	std:: cout << "Please select which Balance you wish to view. \n";
	     	std::cout <<"1. Savings Balance\n2. Checquing Balance\n3. Return to Main Menu\n";
	     	int nexch;
	     	nexch= select();
	     	int save; 
	     	save = savings_balance();
	     	if(nexch == 1 ){
	     		std::cout << "Your current savings balance is : ";
	     		
	     		returnkey();
	     		
	     	 }else if (nexch == 2)
	     	    std::cout << "Your Checquing Balance is :";
	     	    checquing_balance();
	     	    returnkey();
	     	    
			 }
	     	
		 }
	     //call checking function	
	  
	
	// 0 quite 
		 
}
//	}



void returnkey ( )
{
	char key;  
	std::cout << "Press Any Key to Exit \n"; 
	std:: cin >> key;
	mainpro();
	
}

void options()
{
	int choice;
	std::cout << " Select one option \n";
	std::cout << "1. Deposit \n2. Withdrawl\n3. Checking\n0. Quit \n";
	
}

		
		
int select ()
{
	int ch;
	std:: cin >> ch; 
	return ch;
}
void  deposit()
{
	std:: cout << "\nPlease select which account you which to use \n";
	std:: cout << "1. Checquing\n2. Savings\n3. Return to Main Menu \n" ;
}

float savings()
{
	int save; 
	std:: cout << "Please enter the amount you wish to save: \n";
	std:: cin >> save;
	return save;
	
	
}


float add_to_account()
{
	float add = savings();
	int balance; 
	balance += add;
	return balance;
}

float savings_balance( )
{   
    int bal;
	bal += add_to_account();
	return bal; 
}

float checquing_balance ()
{
	float chec = checquing();
	float chec_bal;
	chec_bal += chec;	
	return chec_bal; 
}

float checquing()
{
	int chec;
	std::cout << "You are in your Checquing account\n";
	std::cout << "Please enter the amount you wish to desposit here\n";
	std::cin >> chec; 
	
}


void option2(int sel)
{
   if (sel == 1){
		    checquing(); 
		    returnkey();
}else if(sel== 2){
			savings();
			returnkey();
}else
mainpro();
}
	
void choose_balance ()
{
	
}

