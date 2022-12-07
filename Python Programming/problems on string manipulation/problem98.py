'''
98. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
	
	Input :   "MarvellouS"
	Output :   6 (8-2)  
		
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Difference(str):
	no1=no2=0
	for i in str:
		if i>='a' and i<='z':
			no1+=1
		if i>='A' and i<='Z':
			no2+=1
			
	return no1-no2		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(Difference(str))
	print("\n The difference between small and capital letters is : {} ".format(ret))
#=====
#starter
#=====
if __name__=="__main__":
	main()