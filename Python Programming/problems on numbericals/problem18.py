'''
18.Write a program which accept radius of circle from user and calculate its area.
		Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
	
	Author : Milind Naalawade
	
	Date : 26/06/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Area(r):
	return 3.14*r*r
	
#=============
#Entry point function
#=============
def main():
	r=float(input("Enter radius of the circle : "))
	ret=Area(r)
	print("Area of the circle is {:.2f}".format(ret))
#======
#starter
#======
if __name__=="__main__":
	main()	