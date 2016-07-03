//Programmed By: Omar Baig
#include<iostream>
#include<iomanip>
using namespace std;
//Three constants used which are related to coffee cup sizes: S,M,L
const double small_coffee = 1.75;
const double medium_coffee = 1.90;
const double large_coffee = 2.00;
//All functions used in the program
int initialize(int& s, int& m, int& l);
void DisplayMenu();
int BuyCoffee(int& s, int& m, int& l);
double TotalMoney(double, double, double);
int TotalOz(int, int, int);
int CupsSold(int, int, int);

int main()
{
	int s, m, l, a; //Variables being used within the main function
	initialize(s,m,l); //call function to initialize variables 
	do{ //Using do-while loop to make sure the menu is displayed at all times
		DisplayMenu(); //call funciton to display the menu so user can see how to use program
		cin >> a;
		cout << endl;

		switch (a) //Using switch to call different functions based on user's input.
		{
		case 1:
			BuyCoffee(s, m, l); //call function
			continue;
		case 2:
			TotalMoney(s, m, l); //call function
			continue;
		case 3:
			TotalOz(s, m, l); //call function
			continue;
		case 4:
			CupsSold(s, m, l); //call funciton
			continue;
		case 5:
			CupsSold(s, m, l);
			TotalOz(s, m, l); //call 3 functions to print all data based on the coffee bought.
			TotalMoney(s, m, l);
			continue;
		case 0: // Exits program.
			cout << "Goodbye!" << endl;
			break;
		}
	} while (a != 0); //end do-while loop
}

int initialize(int& s, int& m, int &l)
{
	s = 0;
	m = 0; //initialzing variables
	l = 0;

	return 0;
}
void DisplayMenu()
{
	cout << "Enter 1 to order coffee." << endl
		<< "Enter 2 check the total money made up to this time." << endl
		<< "Enter 3 to check the total amount of coffee sold up to this time." << endl
		<< "Enter 4 to check the number of cups of coffee of each size sold." << endl
		<< "Enter 5 to print the data." << endl
		<< "Enter 0 to exit the program." << endl;

} //Function to display the menu for the user
int BuyCoffee(int& s, int& m, int& l)
{
	int a;
	cout << fixed << setprecision(2);
	do 
	{	//start do-while loop
		cout << "Enter 1 to buy coffee in a small cup size (9 oz)" << endl;
		cout << "Enter 2 to buy coffee in a medium cup size (12 oz)" << endl;
		cout << "Enter 3 to buy coffee in a large cup size (15 oz)" << endl;
		cout << "Enter 0 to exit." << endl;
		cin >> a;
		if (a == 1){ //If a==1 then small coffee
		cout << "Enter number of small cups you would like: ";
		cin >> s;
		cout << s << " cups of small coffee." << endl << endl;
		}
		else if (a == 2){ //If a==2 then medium coffee
			cout << "Enter number of medium cups you would like: ";
			cin >> m;
			cout << m << " cups of medium coffee." << endl << endl;
		}
		else if (a == 3){ //If a==3 then large coffee
			cout << "Enter number of large cups you would like: ";
			cin >> l;
			cout << l << " cups of large coffee." << endl << endl;
		}

	} while (a == 1 || a == 2 || a == 3); //end do-while loop

	return 0;
}	//Function to buy coffee
double TotalMoney(double s, double m, double l)
{
	double t;
	//Formula for total money made.
	t = ((s*small_coffee) + (m*medium_coffee) + (l*large_coffee));
	cout << "Yout total is: $" << t << endl;
	
	return t;

} //Function to see the total money made from coffee.
int TotalOz(int s,int m, int l)
{
	int TotalOz, small_coffee = 9, medium_coffee = 12, large_coffee = 15;
	//Formula for total ounces.
	TotalOz=((s*small_coffee) + (m*medium_coffee) + (l*large_coffee));
	cout << "Total amount of coffee sold: " << TotalOz << "oz" << endl;

	return TotalOz;
} // Function to see the total ounces bought from coffee.
int CupsSold(int s, int m, int l)
{
	cout << "Small cup count: " << s << endl
		<< "Medium cup count: " << m << endl
		<< "Large cup count: " << l << endl;
	return 0;
} // Function to see the total number of cups sold.
