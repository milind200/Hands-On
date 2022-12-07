'''
9. Write a recursive program which accept number from user and return its  product of digits.  
	
	Input :  523 
	
	Output :  30	
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
mul=1
#====
#Logic
#====
def Output(no):
	global mul
	if no==0:
		return mul
	else:
		mod=no%10
		mul*=mod
		no=no//10
		Output(no)
		
#=============
#Entry point function
#=============
def main():
	global mul
	no=int(input("\n Input : "))
	Output(no)
	print("\n Output : {} \n".format(mul))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()