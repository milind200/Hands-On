'''
44.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output :4 4 4 4 4   
				 3 3 3 3 3   
				 2 2 2 2 2   
				 1 1 1 1 1
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Python 3.9.0

'''	
#====
#Logic
#====
def Print(row,col):
	no=row
	for i in range(0,row):
		for j in range(0,col):
			print(no,end=' ')
		no-=1	
		print()	

#=============
#Entry point function
#=============
def main():
	row=int(input("Enter the number of rows : "))
	col=int(input("Enter number of columns : "))
	Print(row,col)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
