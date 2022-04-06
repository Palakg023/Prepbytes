/*
Operators 

PrepByddyt wants you to ger familar with variours operator. 
He provides you with two numerical values X and Y and your task 
is to find the relation between them that is 
. X is smaller than Y
. X is greater than Y
. X is equal to Y

Input Format
Two space-separated integers are provided denoted by X and Y

Output 
print the relation between X and Y
. X is smaller than Y
. X is greater than Y
. X is equal to Y

Example 

Input 
4 6
Output
4 is smaller than 6

*/

#include<iostream>
using namespace std;

int main()
{
	int X,Y;
	cin>>X>>Y;
	if(X<Y)
	cout<<X<<" is smaller than "<<Y;
	else if (X>Y)
	cout<<X<<" is greater than "<<Y;
	else
	cout<<X<<" is equal to "<<Y;
	
}
