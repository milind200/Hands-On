'''
40. Accept number of rows and number of columns from user and display below pattern. 
   Input :  iRow = 4  iCol = 3  
  Output : 
				1 1 1 1    
				2 2 2 2   
				3 3 3 3   
				4 4 4 4
	
	
	Author : Milind Nalawade
	
	Date : 01/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Print(row,col):
	no=1
	for i in range(0,row):
		for j in range(0,col):
			print(" ",no," ",end=" ")
		no+=1	
		print()	

#=============
#Entry point function
#=============

def main():
	row=int(input("Enter number of rows :"))
	col=int(input("Enter number of columns : "))
	Print(row,col)

#=====
#starter
#=====
if __name__=="__main__":
	main()