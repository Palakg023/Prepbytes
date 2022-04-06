/*

Clock and Angles

PrepBuddy has an analog clock which consists of two handw one for hour 
and another for minute. She wants to calculate the shorter angle
formed between hour and minute hand at any given time

Input Format

The first line contains the numbers of test case T
Each test case contain two inegers h and m representing the time in hour
and minute format

Output
For each test case on a new line, print the reuired shorter angle

example

Input 
2
5 30
6 00

Output
15
180

https://www.youtube.com/watch?v=5pb8SfKRwe0

*/

#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int T,h,min;   // T - test case  h-hour  min - minute
	cin>>T;
	while(T)
	{
		cin>>h;
		cin>>min;
		double hha = (60*h+min)*0.5;  //hha - hour hand angle
		double mha =6*min;			  //mha - minute hand angle
		double angle =  abs(hha-mha);
		
		if (angle<=180)
		cout<<angle;
		else
		cout<<360-angle;
		cout<<endl;
		
		T--;
	}
}
