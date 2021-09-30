'''
11. Write a recursive program which accept number from user and return largest digit 
	
	Input : 87983 
	
	Output : 9  
	
	Author :Milind Nalawade
	
	Date : 26/08/2021
	
	Language : Python 3.9.0

'''
max=1
#====
#Logic
#====
def Output(no):
	global max
	if no==0:
		return max
	else:
		mod=no%10
		if(max<mod):
			max=mod;
		no=no//10
		Output(no)
		
#=============
#Entry point function
#=============
def main():
	global mul
	no=int(input("\n Input : "))
	Output(no)
	print("\n Output : {} \n".format(max))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()