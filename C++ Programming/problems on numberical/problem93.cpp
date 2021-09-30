/*
93. Accept character from user. If it is capital then display all the characters from 
	the input characters till Z. If input character is small then print all the characters 
	in reverse order till a. In other cases return directly. 

	Input :  Q 
	Output : Q R S T U V W X Y Z 
	Input :  m 
	Output : m l k j i h g f e d c b a 
	Input :  8 
	Output :  
	
	Author : Milind Nalawade
	
	Date: 13/07/2021
	
	language : C++ programming

*/
using namespace std;
#include<iostream>

//Logic
void Display(char ch)
{
	printf("\n Output : ");
	while(ch>=65&&ch<=90||ch>=97&&ch!=122)
	{
		cou<<" "<<ch<<" ";
		ch++;
	}
	cout<<"\n";
}
//Entry point function	

int main()
{
	char ch=0;
	cout<<"Enter your character : ";
	cin>>ch;
	Display(ch);
	return 0;
}