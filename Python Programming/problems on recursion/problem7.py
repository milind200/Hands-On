'''
7. Write a recursive program which accept number from user and return summation of its digits. 
	
	Input :  879 
	
	Output :  24 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
sum=0
#====
#Logic
#====
def Output(no):
	global sum
	if no==0:
		return sum
	else:
		mod=no%10
		sum+=mod
		no=no//10
		Output(no)
#=============
#Entry point function
#=============
def main():
	global sum
	no=int(input("\n Input : "))
	Output(no)
	print("\n Output : {} \n".format(sum))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()