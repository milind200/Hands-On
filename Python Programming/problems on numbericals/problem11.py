'''
11.Write a program which accept number from user and display its table. 
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language : Python 3.9.0
	
'''	

#======
#Logic
#======

def Table(no):
	j=1
	ans=1
	while j<11:
		ans=no*j
		print(ans,end=" ")
		ans=1
		j=j+1
#=============
#Entry point function
#=============
def main():
	ino=int(input("Enter the number : "))
	Table(ino)
#=======
#starter
#=======
if __name__=="__main__":
	main()
