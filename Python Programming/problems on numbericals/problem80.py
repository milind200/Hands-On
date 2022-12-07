'''
80.Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 3 
	
	Input :  N :   6 
	
	NO:  93 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 4 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : -1  
	
	Author : Milind Nalawade
	
	Date : 10/07/2021
	
	Language : Java 14.0.2
	
'''


#====
#Logic
#====
def ChkNo(arr):
	
	j=flag=0
	no=int(input("Enter your number : "))
	print()
	for p in range(len(arr)):
		if arr[p]==no :
			j=p
			flag=1
	
	if flag !=:
		print("Number present at position {} in the list ".format(j))
	else:
		print("Number not present in the list")
		
#=============
#Entry point function
#=============

def main():
	
	arr=[]
	size=int(input(" Enter size of the list : "))
	print()
	print("Enter the element of the list :-")
	
	for i in range(size):
		no=int(input("Enter {} element : ".format(i)))
		arr.append(no)
		print()		
	ChkNo(arr)
#=====
#starter
#=====
if __name__=="__main__":
	main()
