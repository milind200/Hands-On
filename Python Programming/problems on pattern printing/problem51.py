'''
51.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output : * # ##  
				  * * ##    
				  * * *#    
			      * * * *   
				  
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
			if i<j:
				print(" # ",end="")
			else:
				print(" * ",end="")
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