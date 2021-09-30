'''
14. Write a recursive program which accept number from user and return its reverse number.  
	
	    Input :  523 
	
	    Output :  325
    	
		Author :Milind Nalawade
	
		Date : 26/08/2021
	
		Language : Python 3.9.0

'''
ino=0
#====
#Logic
#====
def Output(no):
	global ino
	if no==0:
		return 
	else:
		mod=no%10
		ino=ino*10+mod
		no=no//10
		Output(no)
		
#=============
#Entry point function
#=============
def main():
	no=int(input("\n Input :"))
	Output(no)
	print("\n Output : {}\n ".format(ino))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()