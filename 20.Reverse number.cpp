/*
Reverse the number

Prepbuddy gave you a number X and asks you to reverse that number and print it

Input Format
One integer is provided denoting the value of X
Note- The given number doesn't have leading or ending zero

Output
print the reverse of X.

Example
Input 
102345
Output
543201

*/

#include<iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int num =0;
	while(x>0)
	{
		int rem = x%10;
		num= num*10 +rem;
		x/=10;
	}
	cout<<num;
	
}
