'''
26.Write a program which accept range from user and return addition of all even numbers in between that range.
    (Range should contains positive numbers only)

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
	ans=0
	while(min<=max):
		if min%2==0:
			ans=ans+min
		min+=1;
	return ans


#=============
#Entry point function
#=============

def main():
	min=int(input("Enter your minimum value : "))
	max=int(input("Enter your maximum value : "))
	ret=int(Range(min,max))
	print("Addition of the given range is : ",ret)
#====	
#stater 
#====
if __name__=="__main__":
	main()