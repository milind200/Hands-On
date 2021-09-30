'''
77. Accept N numbers from user print frequency of 11 . 
	
	Input :  N :   6 
	
	Elements : 85 66 11 80 93 88  
	
	Output : 1
	
	Input :  N :   6 
	
	Elements : 85 66 3 80 93 88  
	
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
		j=0
		for i in range(len(arr)):
			if arr[i]==11:
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
	print(" Frequecy of 11 = {} ".format(ret))	
	
#=====
#starter
#=====
if __name__=="__main__":
	main()