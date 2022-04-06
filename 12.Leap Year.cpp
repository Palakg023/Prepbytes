/*
Leap Year or Not

We all have made fun of our friends who have their 
birthdays on 29th Feburary. Given birthday year N of
your friend, can you tell her if that is leap year or not

Input Format
The first line constains an integer T denoting the number
of test cases. Each test case contains one integer N

Output Format
For each test case on a new line.Print Yes if the given 
year is leap year else print no

Example

Input 
2
1900
2012

Output
No 
Yes

*/

#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int y;
		cin>>y;
		if(y%4==0)
		{
			if(y%100==0)
			{
				if(y%400==0)
				cout<<"Yes";
				else
				cout<<"No";
			}
			else
			cout<<"Yes";
		}
		else
		cout<<"No";
		
	}
}






















