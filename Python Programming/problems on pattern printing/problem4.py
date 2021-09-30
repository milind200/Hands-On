'''
4.Write a program which accept string from user and print below pattern. 
	
	Input :   “Marvellous” 
	
	Output :   M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S     
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S    
					M A R V E L L O U S 
	

	Author : Milind Nalawade

	Date : 	07/08/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def Output(arr):
	no=len(arr)
	print("\n Output : \n\n")
	while no:
		print("	",end="")
		for i in range(len(arr)):
			print(arr[i].upper(),end=" ")
			i+=1
		i=0
		print("\n",end="")
		no-=1
		
#=============
#Entry point function
#=============
def main():
	arr=input("\n Enter your string : ")
	Output(arr)
	
#=====
#starter
#=====
if __name__=="__main__":
	main()