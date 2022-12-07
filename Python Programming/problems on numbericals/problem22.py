'''

22. Write a program which accept area in square feet and convert it into square meter.
	(1 square feet = 0.0929 Square meter) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Python 3.9.0
	
'''
#======
#Logic
#======

def  Square_meter(SF):
	return SF*0.0929;

#=============
#Entry point function
#=============

def main():
	F=float(input("Enter area in square feet : "))
	
	ret= Square_meter(F)
	print("rea in square meter is : ",ret)
	
#======
#starter
#======
if __name__=="__main__":
	main()