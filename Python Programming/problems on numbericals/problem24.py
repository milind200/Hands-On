'''
24. Write a program which accept range from user and display all even numbers in between that range

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
	
	while(min<=max):
		if min%2==0:
			print(min,end=" ");
		min+=1;
	


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