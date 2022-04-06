/*
Favourite Number

Among all the digits from 0-9 . Prepbuddy likes number 5 . 
He has lots of number and wants you to find out the number of
time 5 occured in each number

Input Format -
The first line contains an integer T denoting the number of 
test cases .Each of the next T lines Contains a singe integer N

Constraints
1<=T<=10
1<=N<=10^6

Time limit 
1 second 

Example 

Input 
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
	int t;
	cout<<"Enter total number of test case :\n";
	cin>>t;
	while(t--)
	{
		int n,a;
		cout<<"Enter a number :\n";
		cin>>n;
		a=n;
		
		int rem,count =0;
		while(a!=0)
		{
			rem=a%10;
			a=a/10;
			if(rem==5)
			count ++;
		}
		cout<<"Total number of 5 in "<<n<<" is : "<<count<<"\n";
	}
}
	


