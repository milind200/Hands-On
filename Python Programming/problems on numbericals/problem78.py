'''
78. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
	
	Input :  N :   6 
	
	NO:  66 
	
	Elements : 85 66 3 66 93 88  
	
	Output : 2 
	
	Input :  N :   6 
	
	NO:  12 
	
	Elements : 85 11 3 15 11 111  
	
	Output : 0
	
	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : Python 3.9.0
	
'''

#====
#Logic
#====

class Logic:
	def Output(self,arr):
		no=int(input("Enter your number :"))
		j=0
		for i in range(len(arr)):
			if arr[i]==no:
				j+=1
		return j
		
#=============
#Entry point function
#=============

def main():
	arr=[]
	size=int(input(" Enter number of element : "))
	for i in range(size):
		print()
		no=int(input(" Enter {} element : ".format(i+1)))
		arr.append(no)
	lobj=Logic()	
	ret=int(lobj.Output(arr))
	print()
	print(" Frequecy of number = {} ".format(ret))	
#=====
#starter
#=====
if __name__=="__main__":
	main()