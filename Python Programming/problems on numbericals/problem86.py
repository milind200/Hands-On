'''
86. Accept Character from user and check whether it is alphabet or not (A-Z a-z). 
	
	Input :  F 	
	Output :  TRUE 
	Input :  & 
	Output :  FALSE

	Author : Milind Nalawade

	Date : 12/07/2021

	Language : Python 3.9.0
'''
#====
#logic
#====
def Logic(ch):
	flag=0
	if ord(ch)>=65 and ord(ch)<=90 or ord(ch)>=97 and ord(ch)<=122:
		flag=1
	return flag
#=============
#Entry point function
#=============
def main():
	print()
	ch=(input(" Enter your character : "))
	ret=int(Logic(ch))
	if ret==1:
		print()
		print(" TRUE ")
		print()
	else:
		print()
		print( " FALSE ")
		print()
#=====
#starter
#=====
if __name__=="__main__":
	main()
