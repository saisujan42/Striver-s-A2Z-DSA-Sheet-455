/* 
1. User Input / Output

Problem LinK:
Problem Name  : Find Character Case
Coding Ninjas : https://www.codingninjas.com/studio/problems/find-character-case_58513?
		utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
*/


#include<bits/stdc++.h>
using namespace std;

int main() 
{
	char ch;             
	cin >> ch;            
	if(!isalpha(ch))       
		cout << "-1";	    
	else if(isupper(ch))   
		cout << "1";
	else
		cout << "0";
	return 0;
}


