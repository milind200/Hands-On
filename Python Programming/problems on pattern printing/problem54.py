'''
51.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 6  iCol = 5  
	
	Output :    * * * * *  
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
					*@ @ @*   
				     * * * * *
	
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : Python 3.9.0
'''

#====
#Logic
#====

def Print(row,col):
	
	for i in range(row):
		for j in range(col):
			if i==0 or j==0 or i==row-1 or j==col-1:
				print(" * ",end="")
			else:
				print(" @ ",end="")
		print()		

#=============
#Entry point function
#=============

def main():
	row=int(input("Enter number of rows : "))
	col=int(input("Enter number of columns : "))
	Print(row,col)
	
#=====
#starter	
#=====
if __name__=="__main__":
	main()