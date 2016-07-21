//
//  main.cpp
//  Calculator
//
//  Created by Gregory Frey on 7/19/16.
//  Copyright © 2016 Gregory Frey. All rights reserved.
//

#include <iostream>
using namespace std;

//Prototyping [welcome_text] function.
void welcome_text();

int main()
{
	//Calling [welcome_text] funciton.
    welcome_text();
	
	start:
	
    cout << "Please choose an option (1-5)\n\n";
	int choice;
	
    cout << "1 | Addition\n"
         << "2 | Subtraction\n"
         << "3 | Multiplication\n"
         << "4 | Division\n"
		 << "5 | Quit\n\n";
	
	cin >> choice;
	
	if (choice == 5)
    {
		end:
        cout << "Quitting Application\n\n";
        return 0;
        
	} else {
		
		float num_one, num_two, final_value;
		
		cout << "Enter a number:\n";
		cin >> num_one;
		
		cout << "Enter another number:\n";
		cin >> num_two;
		
		//Calculations for menu choice.
        switch (choice)
		{
			case 1:
				
				final_value = (num_one + num_two);
				
				cout << num_one << " + " << num_two << " = " << final_value << endl << endl;
				
				goto repeat;
				
				break;
				
			case 2:
				
				final_value = (num_one - num_two);
				
				cout << num_one << " - " << num_two << " = " << final_value << endl << endl;
				
				goto repeat;
				
				break;
			
			case 3:
				
				final_value = (num_one * num_two);
				
				cout << num_one << " x " << num_two << " = " << final_value << endl << endl;
				
				goto repeat;
				
				break;
			
			case 4:
				
				final_value = (num_one / num_two);
				
				cout << num_one << " / " << num_two << " = " << final_value << endl << endl;
				
				goto repeat;
				
				break;
		}
		
	}
	
	//Repetition of the application.
	//-------------------------------------------------
	repeat:
	char repeat;

	cout << "Would you like to perform another calculation? (Y or N)\n";
	cin >> repeat;

	if (repeat == 'Y' || repeat == 'y')
	{
		goto start;
		
	} else { goto end; }
	//-------------------------------------------------
	//End of repition of the application.
	
	return 0;
}

//[welcome_text] function
void welcome_text()
{
    cout << "Welcome to the Calculator\n\n";
}