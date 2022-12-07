'''
91. Display ASCII value of given character
	
	Author :Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Java 14.0.2

'''

#====
#Logic
#====
def DisplayASCII(ch):
	print("\n The ASCII value of ",ch," is = ",ord(ch))
	
#=============
#Entry point function
#=============
def main():
	ch=input("\n Enter your character : ")
	DisplayASCII(ch)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()