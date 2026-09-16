#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

double sales_tax;
int total;

//let t be each pretax price

int t1;
int t2;
int t3;


int main(){
	sales_tax=1.0625;
	//input each t
	cin >> t1 >> t2 >> t3;
	//applies sales_tax to each t, rounds to a whole number, then outputs each result		
	cout << round(t1*sales_tax) << ' ' << round(t2*sales_tax) << ' ' << round(t3*sales_tax) << endl;
	//calculates the total after sales_tax and rounding
	total= round(t1*sales_tax) + round(t2*sales_tax) + round(t3*sales_tax);
	//outputs total
	cout << "Total: " << total << endl;	
return 0;
}
