/*
Shopping Cost

Tina is preparing a shopping list containing N items.She knows 
the quantity and price of each item on the list. The shop is offering
a 20% discount on the items with a quantity of more than 100 units.
Given the quantity and price of each of the N items , your
task is to calculate how much each item will cost

Input format
The first line of the input contains and integer n denoting
the number of items.
Each of the next N lines cotains two space-separated integers
denoting the quantity and price of the item

Output
Print the final cost that Tina has to bear for each item. 
print till a single digit after the decimal point.

Example

Input 
3
100 120
200 100
200 100
50 50

Output
12000.0
16000.0
2500.0

*/

#include<iostream>
using namespace std;
#include <iomanip>

int main()


{
	int T;			//T-test case
	cin>>T;
	while(T--)
	{
		int q,p;		//q-quantity and p - price
		float tc;		//tc- total cost
		cin>>q>>p;
		tc=q*p;
		if(q>100)
		{
			cout<<(tc-(0.2*tc));
		}
		
		else
		{
			cout<<tc;
		}
		cout<<endl;

	}
}

