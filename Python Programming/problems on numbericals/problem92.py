'''
92. Accept character from user. If character is small display its corresponding capital 
	character, and if it small then display its corresponding capital. In other cases display as it is. 

	Input :  Q 
	Output : q 
	Input :  m 
	Output : M 
	Input :  4 
	Output : 4   Input :  % 
	Output : % 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0
'''
#====
#Logic
#====
def Display(ch):
	if ch.isupper():
		print("\n Output : {} \n".format(ch.lower()))
	elif ch.islower():
		print("\n Output : {} \n".format(ch.upper()))
	else:
		print("\n Output : {} \n".format(ch))	
	
#=============
#Entry point function
#=============
def main():
	ch=input("\n Enter your character : ")
	Display(ch)
#=====
#starter
#=====
if __name__=="__main__":
	main()