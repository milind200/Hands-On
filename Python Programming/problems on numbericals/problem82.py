
'''
82. Accept N numbers from user and return the smallest number. 
	
	Input :  N :   6 
	Elements : 85 66 3 66 93 88  
	Output : 3 
	
	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Output(arr):
	min=arr[1]
	for i in range(len(arr)):
		if min>arr[i]:
			min=arr[i]
	return min
	
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
	
	print()
	print("  {} is the minimum number among the given numbers ".format(Output(arr)))
	print()
#=====
#starter
#=====
if __name__=="__main__":
	main()