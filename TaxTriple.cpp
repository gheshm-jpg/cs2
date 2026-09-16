#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

double sales_tax;
int total;

//let price# be each pretax price

int price1;
int price2;
int price3;


int main(){
	sales_tax=1.0625;
	//input each price
	cin >> price1 >> price2 >> price3;
	//applies sales_tax to each price, rounds to a whole number, then outputs each result  
	cout << round(price1*sales_tax) << ' ' << round(price2*sales_tax) << ' ' << round(price3*sales_tax) << endl;
	//calculates the total after sales_tax and rounding
	total= round(price1*sales_tax) + round(price2*sales_tax) + round(price3*sales_tax);
	//outputs total
	cout << "Total: " << total << endl;	
     return 0;
}
