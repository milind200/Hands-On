'''
69. Accept N numbers from user and return difference between 
	summation of even elements and summation of odd elements. 
	
	Input :  N :   6 
	Elements : 85 66 3 80 93 88  
	Output : 53 (234 - 181) 
	
	Author : Milind Nalawade

	Date : 07/07/2021

	Language : Python 3.9.0

'''
#====
#Logic
#====

class Logic:	
	def Difference(self,arr):
		even=0
		odd=0
		for i in range(len(arr)):			
			if arr[i]%2==0:
				even+=arr[i]
			else:
				odd+=arr[i]
		#print(even,"\n",odd)		
		return (even-odd)
		

#=============
#Entry point function
#=============
def main():
	arr=[];
	size=int(input("\nEnter the size of list : "))
	print("\n Enter {} element .\n".format(size))
	
	for i in range(size):
		no=int(input(" Enter {} element : ".format(i+1)))
		arr.append(no)
		print()
	obj=Logic()	
	ret=obj.Difference(arr)	
	print(" Output : ",ret)

#=====
#starter
#=====
if __name__=="__main__":
	main()