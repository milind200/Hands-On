'''
41.Accept number of rows and number of columns from user and display below pattern. 
	Input :  iRow = 4  iCol = 4  
	Output :  A B C D   
				   a b c d  
			  	   A B C D    
				   a b c d 
		
	Author : Milind Nalawade

	Date : 	02/07/2021
	
	Language : Python 3.9.0

'''	
#====
#Logic
#====
def Print(row,col):
	ch='A'
	ch2='a'
	for i in range(0,row):
		for j in range(0,col):
			if i%2==0:
				print(chr(ord(ch)+j),end=' ')
			else:
				print(chr(ord(ch2)+j),end=' ')
			ch='A'
			ch2='a'	
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
