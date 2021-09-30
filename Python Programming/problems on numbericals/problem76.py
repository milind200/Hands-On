'''
74. Accept N numbers from user and return frequency of even numbers. 
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
	Output : 3

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : Python 3.9.0
	
'''

#====
#Logic
#====

class Logic:
	def Output(self,arr):
		flag=0
		for i in range(len(arr)):
			if arr[i]%11==0:
				flag=1
				break
		
		if flag==1:
			return 1
		else:
			return -1
		
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
	if ret==1:
		print( " 11 is present ")
	else:
		print(" 11 is not present ")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()