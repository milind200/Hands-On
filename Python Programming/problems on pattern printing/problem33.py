'''
33. Accept number from user and display below pattern. 
	  Input :  5  
	 Output : A B C D E 

	Author : Milind Nalawade
	
	Date: 29/06/2021
	
	language : java 14.0.2
'''
#====
#Logic
#====
def Print(no):
	i=0
	while no!=0:
	#chr convert interger to character and ord convert character
	#to integer (chr(ord(65)+1)) -> char(65) ='A'
	
		print(chr(ord('A')+i),end=" " )
		i+=1
		no=no-1
		

#============
#Entry point function
#============
def main():
	no=int(input("Enter your number : "))
	Print(no)

#=====
#starter
#=====
if __name__=="__main__":
	main()