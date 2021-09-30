'''
68. We have to design application for tourist company.  Tourist 
	company provides cars on rent.  Depends on the running of
	car they apply rent.If running is less than 100 kilometres then 
	they charge 25 rupees per kilometre .  And if running is more 
	than 100 kilometres then they apply 15 rupees per kilometre 
	after 100 kilometres.  We have to accept number of kilometres 
	from user and return the estimated rent. 

	Input : 73   Output : 1825 
	Input : 132   Output : 2980 
	Input : 189   Output : 3835 
	
	Author : Milind Nalawade
	
	Date : 06/07/2021
	
	Language : Python 3.9.0

'''

#====
#Logic
#====

def RentPerKilometer(km):
	
	if km<100:
		return km*25;
	if km>100:	
		return ((km-100)*15)+2500;

#=============
#Entry point function
#=============

def main():
	km=int(input("\n Enter the current kilometer of the car : "))
	print()
	print(" \n Your Rent per kilometer is : {} \n".format(RentPerKilometer(km)))
	
#=====
#starter
#=====
if __name__ == "__main__":
	main()