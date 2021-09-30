'''
126. Write a program which accept string from user and replace each occurrence of 
		first character of each word into capital case. 
		
		Input :   “marvellous infosystems ” 
		Output :  “Marvellous Infosystems ” 
		
		Author : Milind Nalawade
	
		Date : 06/08/2021
	
		Language : Python 3.9.0
'''
#====
#Logic
#====
def Output(arr):
	s=""
	for i in range(len(arr)):
		if arr[i-1]==' ' or i==0:
			s+=arr[i].upper()
			i+=1
		else:	
			s+=arr[i]	
	print("\n Output : {}\n".format(s))
#=============
#Entry point function
#=============
def main():
	arr=input("\n Enter your string : ");
	Output(arr);
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
	