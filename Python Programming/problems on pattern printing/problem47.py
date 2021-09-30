'''
47 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 4  iCol = 5  
		Output : 2 4 6 8 10   
					  1 3 5 7 9   
					  2 4 6 8 10   
				      1 3 5 7 9 
		
					  
		Author :Milind Nalawade
		
		Date : 02/07/2021

		Language : Python 3.9.0
'''

#====
#Logic
#====

def Print(row,col):
	
	for i in range(row):
		no1=1
		no2=2
		for j in range(col):
			if(i%2==0):
				print(" ",no2,end=" ")
				no2+=2
			else:
				print(" ",no1,end=" ")
				no1+=2
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