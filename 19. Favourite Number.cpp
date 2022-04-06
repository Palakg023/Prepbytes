/*
Favourite Number 

Among alll digits from 0-9 , a prepbuddy like number 5. He has 
lot of numbers and wants you to find out the number of times 5
occured in each number

Input format

The first line contains an integer T denoting number of test cases
Each of the next T lines contains a single integer N.

Output 
For each test case print , the number of times 5 occured in N
on new line

Example

input 
3
12345
345654
55555

Output
1
2
5
*/

#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,c=0;
		cin>>n;
		while(n>0)
		{
			int d=n%10;
			if(d==5)
			c++;
			n=n/10;
		}
		cout<<c<<endl;
	}
}
