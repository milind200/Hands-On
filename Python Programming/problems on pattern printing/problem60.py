'''
60.Accept number of rows and number of columns from user and display below pattern. 
	
	Input :  iRow = 4  iCol =  4  
	
	Output : 1 2 3 4    
					 2 3 4      
						3 4      
						   4
	
	Author : Milind Nalawade

	Date : 4/07/2021
	
	Language : Python 3.9.0
'''

#====
#Logic
#====

def Print(row,col):
	
	for i in range(row):
		no=1
		for j in range(col):
			if i<=j:
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
	Print(row,col)
	
#=====
#starter	
#=====
if __name__=="__main__":
	main()