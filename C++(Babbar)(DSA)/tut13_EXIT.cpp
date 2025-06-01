// leetcode :- https://leetcode.com/problems/power-of-two/description/ 	( ye dusra question hai )
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter a non-zero value: ";  //user input
	cin>>i;
	if(i)    // checks whether the user input is non-zero or not
	{
		cout<<"Valid input.\n";
	}
	else
	{
		cout<<"ERROR!";  //the program exists if the value is 0
		exit(0);            // this will stop the whole program at once . 
	}
	cout<<"The input was : "<<i;
	
};
