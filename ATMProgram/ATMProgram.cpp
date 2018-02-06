// ATMProgram.cpp : Defines the entry point for the console application.
/* This program will function as an ATM that allows withdrawals for 
 multiple denominations using: $50, $20, $10, $5, and $1
 */

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int value;
	char answer;
	

	do
	{
		int noOfFifties = 0;
		int noOfTwenties = 0;
		int noOfTens = 0;
		int noOfFives = 0;
		int noOfOnes = 0;
		do
		{

		}while 
			cout << "Invalid amount, please enter a new amount less than $300" << endl;

		cout << "Please enter a withdrawal amount: " << endl;
		cin >> value;

		if ((value >= 1) && (value <= 300))
		{
			if (value >= 50)
			{
				noOfFifties = value / 50;
				value = value - noOfFifties * 50;

				if (value >= 20)
				{
					noOfTwenties = value / 20;
					value = value - noOfTwenties * 20;

					if (value >= 10)
					{
						noOfTens = value / 10;
						value = value - noOfTens * 10;

						if (value >= 5)
						{
							noOfFives = value / 5;
							value = value - noOfFives * 5;

							if (value >= 1)
							{
								noOfOnes = value;
							}
						}
					}
				}
			}
			else
				cout << " Withdrawal Summary: " << endl;
			if (noOfFifties > 0)
				cout << "$50 bills: " << noOfFifties << endl;
			if (noOfTwenties > 0)
				cout << "$20 bills: " << noOfTwenties << endl;
			if (noOfTens > 0)
				cout << "$10 bills: " << noOfTens << endl;
			if (noOfFives > 0)
				cout << "$5 bills: " << noOfFives << endl;
			if (noOfOnes > 0)
				cout << "$1 bills: " << noOfOnes << endl;
		}
		else
			


		cout << "Would you like to make another withdrawal? " << endl;
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');

	return 0;
}

