/*
   Calculate the monthly mortgage amount
*/

//Includes and namespace
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double loan_amount, // Variable to store the amount of loan taken
		   annual_ir, // Variable to store the annual interest rate
		   monthly_ir, // Variable to calculate and store the monthly interest rate
		   monthly_payment, // Variable to calculate and store the monthly mortgage payment
		   intermediate; // Intermediate calculation term

	int num_payments; // Variable to store the number of mortgage payments

	// Display a prompt and take input for loan amount, annual interest rate and number of mortgage payments
	cout << "Enter the loan amount:  ";
	cin >> loan_amount;

	cout << "Enter the annual interest rate:  ";
	cin >> annual_ir;

	cout << "Enter the number of payments:  ";
	cin >> num_payments;

	// Calculate the monthly interest rate
	monthly_ir = (annual_ir / 12) / 100;

	intermediate =  pow((1 + monthly_ir), num_payments);

	// Calculate the monthly mortgage amount
	monthly_payment = (monthly_ir * intermediate) / (intermediate - 1) * loan_amount;

	// Displaying the mortgage report with upto 2 units after decimal of precision
	cout << "Loan amount:              $" << fixed << setprecision(2) << setw(10) << loan_amount << endl;
	cout << "Monthly Interest Rate:    " << fixed << setprecision(2) << setw(10) << monthly_ir * 100 << "%" << endl;
	cout << "Number of Payments:        " << setw(10) << num_payments << endl;
	cout << "Monthly Payments:         $" << fixed << setprecision(2) << setw(10) << monthly_payment << endl;
	cout << "Amount Paid Back:         $" << fixed << setprecision(2) << setw(10) << (monthly_payment*num_payments) << endl;
	cout << "Interest Paid:            $" << fixed << setprecision(2) << setw(10) << ((monthly_payment*num_payments) - loan_amount) << endl;

	return 0;
} // The end 