'''
8.Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large. 
	
	Author : Milind Nalawade
	
	Date : 24/6/2021
	
	language :Python 3.9.0

'''
#====
#logic
#====
def Number(no):
	
	if no<50:
		print("small")
	elif no>50 and no<100:
		print("medium")
	else:
		print("large")
		
#==============
#Entry point function
#==============

def main():
	no=int(input("Enter your number : "))
	Number(no)
#=========
#starter
#=========
if __name__=="__main__":
	main()
