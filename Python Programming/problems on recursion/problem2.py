'''
2. Write a recursive program which display below pattern.  

	Input : 5

	Output :   1 2 3 4 5
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
i=1
#====
#Logic
#====
def Print(no):
	global i
	
	if no==0:
		return
	else:
		print(" ",i,end="")
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