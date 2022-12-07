'''
65. Accept number of rows and number of columns from user and display below pattern. 
	  
	  Input :  iRow = 5  iCol = 5  
	  
	   Output : 1 2 3 4 5
					1 2       5
					1    3    5
					1       4 5
					1 2 3 4 5	
	  
	  Author : 	Milind Nalawade

	  Date	: 05/07/2021
	  
	  Language : Python 3.9.0

'''

#====
#Logic
#====

def Pattern(row,col):
	
	for i in range(row):
		no=1
		for j in range(col):
			if i==j or i==0 or j==0 or i==row-1 or j==col-1:
				print(" ",no,end="")
			else:
				print("   ",end="")
			no+=1	
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