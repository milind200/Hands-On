'''
27.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

	Author : Milind Nalawade
	
	Date : 27/06/2021
	
	Language : Python 3.9.0
'''

#====
#Logic
#====

def Range(min,max):
	if(max<min):
		print("Invalid range !!!\n");
	
	while(max>=min):
		print(max,end=" ");
		max-=1;
	


#=============
#Entry point function
#=============

def main():
	min=int(input("Enter your minimum value : "))
	max=int(input("Enter your maximum value : "))
	Range(min,max)
	
#====	
#stater 
#====
if __name__=="__main__":
	main()