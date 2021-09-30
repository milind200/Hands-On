'''
10. Write a recursive program which accept string from user and count white spaces. 
	
	Input : HE llo WOr lD 
	
	Output : 3
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
cnt=0
i=0
#====
#Logic
#====
def Output(str):
	global cnt,i
	if i==len(str):
		return 
	if str[i]==' ':
		cnt+=1
	i+=1	
	Output(str)
		
#=============
#Entry point function
#=============
def main():
	global mul
	str=input("\n Input : ")
	Output(str)
	print("\n Output : {} \n".format(cnt))
	
#=====
#starter
#=====
if __name__=="__main__":
	main()