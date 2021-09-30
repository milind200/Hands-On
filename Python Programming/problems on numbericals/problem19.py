'''

19. Write a program which accept width & height of rectangle from user and calculate its area. 
	(Area = Width * Height) 

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Python 3.9.0
	
'''
#======
#Logic
#======

def Area(w,h):
	return w*h
#=============
#Entry point function
#=============

def main():
	w=int(input("Enter width : "))
	h=int(input("Enter height : "))
	ret=Area(w,h)
	print("Area of the rectangle is : ",ret)
	
#======
#starter
#======
if __name__=="__main__":
	main()