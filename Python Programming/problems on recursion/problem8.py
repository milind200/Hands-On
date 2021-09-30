'''
8. Write a recursive program which accept number from user and return its factorial.  
	
	Input :  5 
	
	Output : 120 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
factor=1
#====
#Logic
#====
def Output(no):
	global factor 
	if no==1:
		return factor
	else:
		factor*=no
		Output(no-1)
		
#=============
#Entry point function
#=============
def main():
	global factor
	no=int(input("\n Input : "))
	Output(no)
	print("\n Output : {} \n".format(factor))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()