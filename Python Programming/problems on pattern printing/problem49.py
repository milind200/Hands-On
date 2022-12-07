'''
49 . Accept number of rows and number of columns from user and display below pattern. 
		Input :  iRow = 5  iCol = 5  
		  
Output :  1  2  3  4  5   
			  -1 -2 -3 -4 -5    
			   1  2  3  4  5   
			  -1 -2 -3 -4 -5    
			   1  2  3  4  5
		
		
					  
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
		no2=-1
		for j in range(col):
			if(i%2!=0):
				print(" ",no2,end="")
				no2-=1
			else:
				print(" ",no1,end=" ")
				no1+=1
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