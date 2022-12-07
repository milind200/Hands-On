'''
5.Write a recursive program which display below pattern.  
	
	Input : 6
	
	Output :   a b c d e f 
	
	Author :Milind Nalawade
	
	Date : 25/08/2021
	
	Language : Python 3.9.0

'''
#====
#Logic
#====
ch='a'
def Print(no):
	global ch
	if no==0:
		return
	else:
		print(" ",ch,end="")
	ch=chr(ord(ch)+1)
	no-=1
	Print(no)
	
#=============
#Entry point function
#=============
def main():
	no=int(input("\n Input : "))
	print("\n Output : ",end="")
	Print(no)
	print()
	
#=====
#starter
#=====
if __name__=="__main__":
	main()