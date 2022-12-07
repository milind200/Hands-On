'''
94. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
	
	Input :  % 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0
'''
#====
#Logic
#====
def Display(ch):
	no=ord(ch)
	print("\n Decimal : {} \n".format(no))
	print("\n Octal : {} \n".format((oct(no))))
	print("\n Hexadecimal : {} \n".format((hex(no))))
#=============
#Entry point function
#=============
def main():
	ch=input("\n Enter your character : ")
	Display(ch)
		
#=====
#starter
#=====
if __name__=="__main__":
	main()