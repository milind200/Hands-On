'''
94. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
	
	Input :  % 
	Output :  TRUE 
	Input :  d 
	Output :  FALSE 
	
	Author : Milind Nalawade
	
	Date : 13/07/2021
	
	Language : Python 3.9.0
'''
#====
#Logic
#====
def Display(ch):
	flag=0
	if(ord(ch)==33 or ord(ch)==35 or ord(ch)==36 or ord(ch)==37 or ord(ch)==38 or ord(ch)==42 or ord(ch)==94 or ord(ch)==64):
		flag=1
	return flag
	
#=============
#Entry point function
#=============
def main():
	ch=input("\n Enter your character : ")
	ret=int(Display(ch))
	if ret==1:
		print("\n TRUE \n")
	else:
		print("\n FALSE \n")
		
#=====
#starter
#=====
if __name__=="__main__":
	main()