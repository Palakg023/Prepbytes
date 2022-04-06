/*
PrepBuddy And socks 

PrebBuddy is getting late for college. She is looking for a matching 
pair of socks from a box full of socks. In  the worst scnerio, how many 
socks should preBuddy remove from the drawer until she find a matching  pair

Input format
The first line ocntains the number of test Case T
NExt T lines contains an integer N which indicates the total pair of 
socks present in the drawer

output 
Print the number of draw PrepBuddy will have to make in the worst case

Example

Input
2
1
2

Output
2
3

Sample Test case Explanation
In the first test case, there is just 1 pair of socks i.e 2 socks in her 
drawer, so she has to remove both to get a pair, therefore the output is 2.


*/

#include<iostream>
using namespace std;

int main()
{
	int T,n;
	cout<<"Enter the total number of test case :\n";
	cin>>T;
	while(T)
	{
		cout<<"Enter the total number of pair of socks present in drawer \n";
		cin>>n;
		cout<<"Total number of draw prebuddy will have to make in worst case is :\n";
		cout<<n+1;
		cout<<endl;
		T--;
		
	}
}
 

