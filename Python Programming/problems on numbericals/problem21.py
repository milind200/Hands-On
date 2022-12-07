'''

21. Write a program which accept temperature in Fahrenheit and convert it into celsius.
		(1 celsius = (Fahrenheit -32) * (5/9)) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Python 3.9.0
	
'''
#======
#Logic
#======

def Celsius(F):
	return (F-32)*(0.5556);

#=============
#Entry point function
#=============

def main():
	F=float(input("Enter  temperature in Fahrenheit : "))
	
	ret=Celsius(F)
	print("temperature in Celsius is : ",ret)
	
#======
#starter
#======
if __name__=="__main__":
	main()