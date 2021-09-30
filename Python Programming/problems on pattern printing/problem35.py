'''
34. Accept number from user and display below pattern. 
	Input :  5  
	Output : 1 * 2 * 3 * 4 * 5 *   
	
	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language :Python 3.9.0

'''

#====
#Logic
#====
def Print(no):
	i=1
	while i<=no:
		print(i," * ",end=" ")
		i+=1
		
#=============
#Entry point function
#=============
def main():
	no=int(input("Enter your number : "))
	Print(no)
#=====
#starter
#=====
if __name__=="__main__":
	main()