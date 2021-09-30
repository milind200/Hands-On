'''
89. Accept Character from user and check whether it is small case or not (a-z). 

	Input :  g 
	Output :  TRUE 
	Input :  D 
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
	if ord(ch)>=97 and ord(ch)<=122:
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
