'''
115. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). 
	
	Input :   “Marvellous Infosystems”    “Logic Building” 
	Output :  “Marvellous Infosystems Logic Building” 
	
	Author : Milind Nalawade
	
	Date : 16/07/2021
		
	Language : Python 3.9.0
	
'''
#====
#Logic
#====
def StringCon(str1,str2):
	return str1+str2
#=============
#entry point function
#=============
def main():
	str1=input("\n Enter your string1 : ")
	str2=input("\n Enter your string2 : ")
	str3=""
	str3=StringCon(str1,str2)
	print("\n Output : {}\n".format(str3) )
#=====
#starter
#=====
if __name__=="__main__":
	main()
