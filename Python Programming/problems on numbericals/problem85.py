'''
85. Accept N numbers from user and display all such numbers which contains  3 digits in it. 
	
	Input :  N :   6 
	Elements : 8225  665 3 76 953 858  	
	Output : 17 17 3 13 17 21

	Author : Milind Nalawade
	
	Date : 11/07/2021
	
	Language :python 3.9.0
'''

#====
#Logic
#====
def Output(arr):
	brr=[]
	temp=sum=0
	for i in range(len(arr)):
		no=int(arr[i])
		while no!=0:
			temp=no%10
			sum+=temp
			no=no//10
		brr.append(sum)
		sum=0
	print()	
	for j in range(len(arr)):
		print(" ",brr[j],end="")
		
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
