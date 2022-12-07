'''
46. Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol = 4  
		Output : 1 2 3 4   
					  5 6 7 8
					  9 1 2 3
					  4 5 6 7 
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : python 9.3.0
		
'''		

#====
#Logic
#====
def Print(row,col):
	no=1
	for i in range(0,row):
		for j in range(0,col):
			print(no,end=" ")
			no+=1
			if no==10:
				no=1
		print()	
	
#=============
#Entry point function
#=============
def main():
	row=int(input("Enter number of row : "))
	col=int(input("Enter number of column : "))
	Print(row,col)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
	