'''
75. Accept N numbers from user and return frequency of even numbers. 
	
   	Input :   7 
  
    Elements : 85 66 3 80 93 88 90 
	
	Output : 1 (4 -3) 

	Author : Milind Nalawade

	Date : 09/07/2021
	
	Language : Python 3.9.0
	
'''

#====
#Logic
#====

class Logic:
	def Output(self,arr):
		j=k=0
		for i in range(len(arr)):
			if arr[i]%2==0:
				j+=1
			else:
				k+=1
		return j-k
		
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
	print(" difference between Frequency of odd and even numbers = {} ".format(ret))	
#=====
#starter
#=====
if __name__=="__main__":
	main()