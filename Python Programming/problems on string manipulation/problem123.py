'''
123. Write a program which accept string from user and return length of largest word. 
	
		Input :   “Marvellous Multi OS Infosystems” 
		Output :   10 
	
		Author : Milind Nalawade
	
		Date : 04/08/2021
	
		Language : Python 3.9.0
'''

#====
#Logic
#====
def  ChkWord(str):	
	cnt=0
	max=0
	for i in str:
		if i.isalpha() :
			cnt+=1
		if max<cnt:
			max=cnt
		if i.isspace():
			cnt=0
			
	return max
	
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