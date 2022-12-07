'''
122.Write a program which accept string from user count number of words from string  
		
		Input :   "Marvellous Multi OS" 
		Output :   3 
		Input :   "          Marvellous Multi            OS       Pune"
		Output :   4 
		
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Python 3.9.0
'''

#====
#Logic
#====
def  ChkWord(str):	
	cnt=0
	for i in range(len(str)):
		if  str[i]==' ' and str[i-1]!=' ':
			cnt+=1
	return cnt
	
#=============
#Entry point function
#=============
def main():
	str=input("\n Enter your string : ")
	ret=int(ChkWord(str))
	print("\n Output : {}\n".format(ret))

#=====
#starter
#=====
if __name__=="__main__":
	main()