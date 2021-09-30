'''
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
	
	language : Python 3.9.0

'''

#====
#Logic
#====
def Output(ch):
	no=ord(ch)
	print()
	if no>=65 and no<=90:
		for i in range(no,91):
			print(" ",chr(i),end="")
	
	if no>=97 and no<=122:
		for i in range(no,122):
			print(" ",chr(i),end="")
	print()		
	
#=============
#Entry point function
#=============
def main():
	ch=input("\n Enter your chatacter : ")
	Output(ch);
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
