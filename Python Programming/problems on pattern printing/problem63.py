'''
63. Accept number of rows and number of columns from user and display below pattern. 
	  
	   Input :  iRow = 4  iCol = 4  
	  
	  Output : * * * *   
					*    * *    
					*  *   *    
					* * * * 
	  
	  Author : 	Milind Nalawade

	  Date	: 05/07/2021
	  
	  Language : Python 3.9.0

'''

#====
#Logic
#====

def Pattern(row,col):
	
	for i in range(row):
		for j in reversed(range(col)):
			if i==0 or j==0 or i==row-1 or j==col-1 or i==j:
				print(" * ",end="")
			else:
				print("   ",end="")
		print()
#=============
#Entry point function
#=============

def main():
	row=int(input("Enter number of rows : "))
	col=int(input("Enter number of columns : "))
	Pattern(row,col)
#=====
#starter
#=====
if __name__ == "__main__":
	main()