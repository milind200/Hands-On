'''
6. Write a recursive program which accept number from user and display below pattern.  
	
	Input :  5 
	
	Output :  5 * 4 * 3 * 2 * 1 *  
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
i=1
def Print(no):
	global i
	if no==0:
		return
	else:
		print(" ",i," *",end="")
	i+=1
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