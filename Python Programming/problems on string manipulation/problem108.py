'''

108.Write a program which accept string from user and accept one character. 
	 Return index of first occurrence of that character..
	
	Input :   "Marvellous Multi OS"   M 
	Output :   0 
	Input :   "Marvellous Multi OS"    W 
	Output :   -1 
	Input :   "Marvellous Multi OS"    e 
	Output :   4 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def ChkChar(str,ch):
	j=1
	for i in str:
		if i==ch:
			break
		j+=1	
	if j==len(str)+1:
		j=-1	
	return j		
#=============
#Entry point function
#=============	
def main():
	str=input("\n Enter your character : ")
	ch=input("\n Enter you character : ")
	ret=int(ChkChar(str,ch))
	print("\n The first occurence of {}  in the given string is at place : {}\n".format(ch,ret))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
