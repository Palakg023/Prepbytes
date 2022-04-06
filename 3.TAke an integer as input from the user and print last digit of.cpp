/*
TAke an integer as input from the user and print last digit of 
that number 
OR
Write a code to print remainder of a number when divided by 10

4567
last digit is 7

45
last digit=5

Hint :  divide 4567 by x such that the remainder is 7
		divide 45 by x such that the remainder is 5
		x=10
		
		% is the modulo operator 
		4567 by 10 456 as quotient and 7 as the remainder
		43 by 10 , 4 as quotient and 3 as remainder 
		
		456/10 = 45  -----Quotient - divison operator
		456%10 =6    -----Remainder - modulo operator
		Note : Whenever you divide any number by 10 then we 
			   get remainder as last digit
*/

#include<iostream>
using namespace std;

int main()
{
	int n,ldigit;
	cout<<"Enter a number :\n";
	cin>>n;
	ldigit= n%10;
	cout<<"The last digit of "<<n<<" is : " <<ldigit;
}
