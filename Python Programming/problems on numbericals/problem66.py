'''
66. Design application for hotel. According to the management 
	team of hotel they are giving discount on total bill amount of 
	customer.  If  bill amount is less than 500 then there is no 
	discount , if bill amount is less than 1500 and more than 500 
	they give 10% discount.  And if the bill amount is more than 
	1500 then they give 15% discount.  Our application should 
	accept total bill amount and depends on the discount policy 
	we have to return the amount after applying discount.
	
	Input : 1200  
	Output : 1080 
	Input : 290   
	Output : 290 
	Input : 3700  
	Output : 3145 

	Author : Milind Nalawade
		
	Date : 05/07/2021
		
	Language :  Python 3.6.0

'''

#====
#Logic
#====

def Discount(amount):
	
	if amount<500:
		return amount
	elif amount>500 and amount<1500:
		return amount-((amount/100)*10)
	elif amount>1500:
		return amount-((amount/100)*15)
	else:
		return 1
		

#=============
#Entry point function
#=============

def main():
	amount=int(input(" \n Enter amount of the customer in rupees : "))
	ret=int(Discount(amount))
	if ret!=1:
		print("\n Total bill is : ",ret)
	else:
		print(" Invalid input ")

#=====
#starter
#=====
if __name__=="__main__":
	main()

