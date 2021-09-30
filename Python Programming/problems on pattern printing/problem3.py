'''
3.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	Output :  
				M     
				M a    
				M a r     
				M a r v    
				M a r v e     
				M a r v e l    
				M a r v e l l    
				M a r v e l l o     
				M a r v e l l o u      
				M a r v e l l o u s 

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
def Output(str):
	no=0
	print("\n Output : \n")
	for i in range(len(str)):
		print("  ",end="")
		for j in range(no+1):
			print(str[j],end="")
		no+=1
		print()
		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string :")
	Output(str)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()