'''
67. Design application for school management system.  
	As school is primary there are 4 standards from 1 to 4.
	School fees of each standard is different.  For first standard 
	fees are 8900, for second standard 12790, for third standard 
	21000 and for fourth standard fees are 23450.  We have to 
	accept standard from user and display the corresponding fees. 
	
	Input : 2   Output : 12790 
	Input : 4   Output : 23450 
	Input : 6   Output : Wrong input 

	Author : Milind Nalawade
	
	Date  : 05/07/2021
	
	Language : Python 3.9.0
'''

#====
#Logic
#====
def TotalFees(std):
	
	if std==1:
		return 8900
	elif std==2:
		return 12790
	elif std==3:
		return 21000
	elif std==4:
		return 23450
	else:
		return 1

#=============
#Entry point function
#=============
def main():
	std=int(input("Enter your standard : "))
	ret=int(TotalFees(std))
	if ret!=1:
		print("\n Total frees of the student is : {} \n".format(ret))
	else:
		print("\n Invalid input \n")
#=====
#starter
#=====
if __name__=="__main__":
	main()