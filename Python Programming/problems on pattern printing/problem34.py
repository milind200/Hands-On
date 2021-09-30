'''
34. Accept number from user and display below pattern. 
	Input :  5  
	Output : 5 # 4 # 3 # 2 # 1 #

	Author : Milind	Nalawade
	
	Date : 29/06/2021
	
	Language :Python 3.9.0

'''

#====
#Logic
#====
def Print(no):
	while no!=0:
		print(no," # ",end=" ")
		no-=1
		
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