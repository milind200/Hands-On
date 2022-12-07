'''
9.Accept single digit number from user and print it into word. 
	
	Author:Milind Nalawade
	
	Date:24/06/2021
	
	language : Python 3.9.0
	
'''
#=====
#Logic
#=====
def Number(no):
	
	if no==1:
		print("one")
	elif no==2:
		print("two")
	elif no==3:
		print("three")
	elif no==4:
		print("four")
	elif no==5:
		print("five")
	elif no==6:
		print("six")
	elif no==7:
		print("seven")
	elif no==8:
		print("eight")
	elif no==9:
		print("nine")
	else:
		print("Number out of range")

#=============
#Entry point function
#=============		
def main():
	
	i=int(input("Enter your number : "))
	
	if(i<0):
		i=i*-1
	Number(i)

#=======
#starter
#=======	
if __name__=="__main__":
	main()
