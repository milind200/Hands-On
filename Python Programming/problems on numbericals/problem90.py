'''
90.Accept division of student from user and depends on the division display exam timing.
	There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at
	9.20 AM and D at 10.30 AM. (Application should be case insensitive) 

	Input :  C 
	Output :  Your exam at 9.20 AM 
	Input :  d 
	Output :  Your exam at 10.30 AM
	

	Author : Milind Nalawade

	Date : 12/07/2021

	Language : Python 3.9.0
'''
#====
#logic
#====
def Logic(ch):
	
	if ord(ch)==65 or ord(ch)==97:
		print("\n Your exam time is 7 AM \n")
	elif ord(ch)==66 or ord(ch)==98:
		print("\n Your exam time is 8.30 AM \n");	
	elif ord(ch)==67 or ord(ch)==99:
		print("\n Your exam time is 9.20 AM \n");
	elif ord(ch)==68 or ord(ch)==100:
		print("\n Your exam time is 10.30 AM \n");
	else:
		print("\n Invalid input \n");
		
#=============
#Entry point function
#=============
def main():
	print()
	ch=(input(" Enter your character : "))
	Logic(ch)	
#=====
#starter
#=====
if __name__=="__main__":
	main()
