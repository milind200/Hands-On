'''
13.  Write a recursive program which accept number from user and return smallest digit 
	
		Input : 87983 
	
		Output : 3 
	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : Python 3.9.0

'''
min=8
#====
#Logic
#====
def Output(no):
	global min
	if no==0:
		return min
	else:
		mod=no%10
		if(min>mod):
			min=mod;
		no=no//10
		Output(no)
		
#=============
#Entry point function
#=============
def main():
	global mul
	no=int(input("\n Input : "))
	Output(no)
	print("\n Output : {} \n".format(min))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()