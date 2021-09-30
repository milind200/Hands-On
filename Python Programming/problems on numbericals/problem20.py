'''

20.  Write a program which accept distance in kilometer and convert it into meter. 
		(1 kilometre = 1000 Meter)  

	Author : Milind Nalawade
	
	Date:26/06/2021
	
	Language : Python 3.9.0
	
'''
#======
#Logic
#======

def Kilometer(m):
	return (m*1000);

#=============
#Entry point function
#=============

def main():
	m=int(input("Enter  distance in kilometer : "))
	
	ret=Kilometer(m)
	print("distance in meter is : ",ret,"m")
	
#======
#starter
#======
if __name__=="__main__":
	main()