'''
1. Write a recursive program which display below pattern.  
	
	Input : 5
	
	Output :   * * * * * 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Print(no):

	if no==0:
		return
	else:
		print(" *",end="")
	no-=1
	Print(no)
	
#=============
#Entry point function
#=============
def main():
	no=int(input("\n Input : "))
	print("\n Output : ",end="")
	Print(no)
	print()
	
#=====
#starter
#=====
if __name__=="__main__":
	main()