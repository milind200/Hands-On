'''
50 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol =  4  
		
		Output : 1 2 3 4
					  2 3 4 5    
					  3 4 5 6    
					  4 5 6 7 
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Python 3.9.0
'''

#====
#Logic
#====

def Print(row,col):
	
	for i in range(row):
		ino=i+1
		for j in range(col):
			print(" ",ino,end="")
			ino+=1
		print()	
		
#=============
#Entry point function
#=============
def main():
	row=int(input("Enter number of rows : "))
	col=int(input("Enter number of columns : "))
	Print(row,col)
	
#====
#starter
#====
if __name__=="__main__":
	main()