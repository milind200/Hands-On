'''

117. Write a program which accept string from user and copy that characters of that string into 
		another string by removing all white spaces. 
	
		Input :   “Marvel   lous Pyth   on” 
		Output :   “MarvellousPython” 
		
		Author : Milind Nalawade
	
		Date : 16/07/2021
	
		Language : Python 3.9.0
'''		

#====
#Logic
#====
def Output(str):
	return str.replace(" ", "")
	
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	arr=Output(str)
	print("\n Output : {} \n".format(arr))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()