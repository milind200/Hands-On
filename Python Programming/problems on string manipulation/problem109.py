'''

109.Write a program which accept string from user and accept one character.
	Return index of last occurrence of that character. 

	Input :   “Marvellous Multi OS”    M 
	Output :   11 
	Input :   “Marvellous Multi OS”    W 
	Output :   -1 
	Input :   “Marvellous Multi OS”    e 
	Output :   4 

	Author : Milind Nalawade
	
	Date : 16/07/2021
	
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def ChkChar(str,ch):
	j=k=0
	for i in str:
		if i==ch:
			k=j+1
		j+=1	
	if k==0:
		k=-1	
	return k		
#=============
#Entry point function
#=============	
def main():
	str=input("\n Enter your character : ")
	ch=input("\n Enter you character : ")
	ret=int(ChkChar(str,ch))
	print("\n The last occurence of {}  in the given string is at place : {}\n".format(ch,ret))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()
