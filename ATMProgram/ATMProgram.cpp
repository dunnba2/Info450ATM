// ATMProgram.cpp : Defines the entry point for the console application.
/* This program will function as an ATM that allows withdrawals for
multiple denominations using: $50, $20, $10, $5, and $1
*/

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	float value = 0; // initializes the value back to zero, if they want to enter a new value.
	char answer; // Declare variable for loop

	do // Loop #1 
	{
		int noOfFifties = 0; // Declare variables for each segment of logic statement 
		int noOfTwenties = 0; // Initializing them allows it to reset each time you repeat a withdrawal 
		int noOfTens = 0; // Value changes as program runs through logic  
		int noOfFives = 0; // Had to declare within loop to ensure reset
		int noOfOnes = 0;

		
		
		
		do // Loop #2
		{
			cout << "Please enter a withdrawal amount: " << endl; // Prints command asked of user
			cin >> value; //This is when the user inputs an amount 

			if ((value >= 1.00) && (value <= 300.00)) /* Parameters for value entered. Used 'and' statement so both must hold true.
												If valid, value is tested for each logic statement to incrementally determine 
												the least amount of bills used for whatever amount is entered. */
			{
				if (value >= 50) //Logic statement for determining # of bills for withdrawal
				{
					noOfFifties = value / 50; //Figures out how many $50 bills to distribute, if any. 
					value = value - noOfFifties * 50; //Finds the amount left after # of $50's have been found.
				}
				if (value >= 20) //Tests value to determine if $20s will be used.
				{
					noOfTwenties = value / 20;
					value = value - noOfTwenties * 20;
				}
				if (value >= 10) //Value test continues
				{
					noOfTens = value / 10;
					value = value - noOfTens * 10;
				}
				if (value >= 5)
				{
					noOfFives = value / 5;
					value = value - noOfFives * 5;
				}
				if (value >= 1)
				{
					noOfOnes = value / 1;
					value = value - noOfOnes * 1;
				}
				else /*End of logic statement for determining the minimum # of bills used to execute withdrawal
					 This says once the value is 0, print the results of the logic statement*/

					cout << "Withdrawal Summary: " << endl; // Header of # of bills used

				if (noOfFifties > 0) /* New logic statement created to include variables that contributed to withdrawal distribution. 
									 If the value of the given variable being tested is zero, it won't print. */
				{
					cout << "$50 bills: " << noOfFifties << endl;
				}
				if (noOfTwenties > 0) 
				{
					cout << "$20 bills: " << noOfTwenties << endl;
				}
				if (noOfTens > 0)
				{
					cout << "$10 bills: " << noOfTens << endl;
				}
				if (noOfFives > 0)
				{
					cout << "$5 bills: " << noOfFives << endl;
				}
				if (noOfOnes > 0)
				{
					cout << "$1 bills: " << noOfOnes << endl;
				}
				break; // Stops loop once the logic statement is completed. Moves onto outer loop.

			}
			else // If first condition is false for either then this statement executes to restart loop.
				cout << "Invalid amount, please enter a new amount. " << endl;
			cout << "Y to try again. ";
			cin >> answer;	
		} while (answer == 'Y' || answer == 'y'); 


		cout << "Would you like to make another withdrawal? " << endl; // Statement to do another withdrawal. 
		cin >> answer;
	} while (answer == 'Y' || answer == 'y'); // If they answer with 'y' then the program starts over, otherwise it'll end the program.

	return 0;
}


