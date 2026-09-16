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
	total= t1*sales_tax + t2*sales_tax + t3*sales_tax;
	cin >> t1 >> t2 >> t3;		
	cout << t1*sales_tax << t2*sales_tax << t3*sales_tax;
	cout << "Total:" << total;	
return 0;
}
