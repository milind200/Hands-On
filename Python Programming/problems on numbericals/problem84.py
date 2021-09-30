
'''
84. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  
	Output : 665 953 858
	
	Output : 93 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Output(arr):
	
	print(" Three digit elements are : ")	
	for i in range(len(arr)):
		if int(arr[i])>99 and int(arr[i])<999:
			print(" ",arr[i],end=" ")
	
#=============
#Entry point function
#=============
def main():
	
	arr=[]
	size=int(input("How many element to accept for input : "))
	print()
	print(" Enter {} elements ".format(size))
	
	for i in range(size):
		print()
		arr.append(int(input(" Enter element number {} :".format(i))))
	Output(arr)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()