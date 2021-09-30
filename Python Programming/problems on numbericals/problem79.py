'''
79. Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 1 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : -1  
	
	Author : Milind Nalawade
	
	Date : 10/07/2021
	
	Language : Python 3.9.0
'''

#====
#Logic
#====

def ChkNo(arr):
	
	no=int(input(" Enter your number to find "))
	print()
	
	for i in range(len(arr)):
		if arr[i]==no:
			print("Number found {} in list ".format(i))
			print()
			return
	print(" Number not found in the list !!! ")
	print()
#=============
#Entey point function
#=============

def main():
	arr=[]
	size=int(input(" Enter your size of list : "))
	print()
	for i in range(size):
		no=int(input("Enter element no. {} : ".format(i)))
		print()
		arr.append(no)
	ChkNo(arr)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
