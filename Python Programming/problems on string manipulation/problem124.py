'''
124. Write a program which accept string from user and reverse each word in place. 
		
		Input :   “Marvellous Multi OS” 
		Output :   “suollevraM itluM SO”

		Author : Milind Nalawade
	
		Date : 05/08/2021
	
		Language : Python 3.9.0

'''

#====
#Logic
#====
def Output(str):
	list=[]
	print("\n Output : ",end="")
	for i in range(len(str)):
		list.append(str[i])
		if str[i]==' ' or i==len(str)-1:
			for j in reversed(list):
				print(j,end="")
			print(" ",end="")	
			list.clear()
	print()		
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	Output(str)
#=====
#starter
#=====
if __name__=="__main__":
	main()