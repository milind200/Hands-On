'''
88.  Accept Character from user and check whether it is digit or not (0-9). 
	
	Input :  7 
	Output :  TRUE 
	Input :  d 
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
	if ord(ch)>=49 and ord(ch)<=57 :
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
