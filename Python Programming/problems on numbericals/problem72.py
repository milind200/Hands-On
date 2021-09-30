'''

72. Accept N numbers from user and display all such elements which are even and divisible by 5 and 3. 
	
	Input :  N :   6 
	
	Elements : 85 66 15 80 93 88  
	
	Output : 15   
	
	Author : Milind Nalawade
	
	Date : 07/07/2021
	
	Language : Python 3.9.0

'''

#====
#Logic
#====

def Output(arr):
	
	print("\n numbers divisible by 5 are : \n")
	for i in range(len(arr)):
		if arr[i]%5==0 and arr[i]%3==0:
			print(" ",arr[i],end=" ")
	print()		

#=============
#Entry point function
#=============
def main():
	
	arr=[]
	size=int(input(" how many element to accept : "))
	
	for i in range(size):
		print()
		no=int(input(" Enter {} element : ".format(i+1)))
		print()
		arr.append(no)
	Output(arr)	
#=====
#starter
#=====
if __name__=="__main__":
	main()
