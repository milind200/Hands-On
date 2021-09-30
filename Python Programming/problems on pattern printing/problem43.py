'''
41.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 3 iCol = 4  
	Output : A A A A A   
				  B B B B B   
				  C C C C C 
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Python 3.9.0

'''	
#====
#Logic
#====
def Print(row,col):
	ch='A'
	for i in range(0,row):
		for j in range(0,col):
			print(chr(ord(ch)+i),end=' ')	
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
