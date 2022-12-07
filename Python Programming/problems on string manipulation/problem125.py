'''
125. Write a program which accept string from user and copy the contents into another string by 
		removing extra white spaces. 
		
		Input :   “Marvellous    multi     OS” 
		Output :   “Marvellous multi OS” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : Python 3.9.0
		
	'''

#====
#Logic
#====
def Output(str):
	str=" ".join(str.split())	
	print("\n Output : {} \n".str)
	
#=============
#Entry point function 
#=============
def main():
	str=input("\n Enter your input : ")
	Output(str)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
