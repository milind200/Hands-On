/*
12. Write a program which accept file name which contains information of student and isplay only names of students. #include<stdio.h>
	
	Author : Milind Nalawade
	
	Date : 20/08/2021
	
	Language : Java 14.0.2
	
*/
import java.lang.*;
import java.util.*;
import java.io.Serializable;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.ObjectInputStream;
import java.io.FileInputStream;
import java.lang.Exception;
class Info implements Serializable
{
	private String name;
	private int id;
	private int marks;

	public void Name(String n)
	{
		this.name = n;
	}
	public String getName()
	{
		return name;
	}

	public int getid() {
		return id;
	}

	public void setid(int ID) {
		this.id = ID;
	}

	public int getmarks() {
		return marks;
	}

	public void setmarks(int Marks) {
		this.marks = Marks;
	}

	@Override
	public String toString()
	{
		return " Name=" + this.name ;
	}

}



class Student
{
	static void insert(String filename,ArrayList<Info>ali)
	{
		try
		{
			FileOutputStream fos=new FileOutputStream(filename);
			if(fos==null)
			{
				System.out.print("\n Unable to open file \n");
			}
			else
			{
				System.out.print("\n File successfully opened\n");
			}
			ObjectOutputStream oos=new ObjectOutputStream(fos);
			oos.writeObject(ali);
			System.out.print("\nDone\n");
			
		}
		catch(IOException e)
		{
			e.printStackTrace();
		}
	}
	
	static void Display(String filename)
	{
		try
		{
			FileInputStream fis=new FileInputStream(filename);
			ObjectInputStream ois=new ObjectInputStream(fis);
			Info iobj=null;
			ArrayList<Info> ali=new ArrayList<>();
			ali=(ArrayList<Info>)ois.readObject();

			for(int i=0;i<ali.size();i++)
			{
				System.out.println(" "+ali.get(i).getName());
			}
		}
		catch (Exception e)
		{
			
		}		
	}
}

class problem12
{
	public static void main(String argv[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("\n Enter file name : ");
		String filename=sobj.nextLine();
		Student obj=new Student();
		System.out.print("\n Enter number of students : ");
		int size=sobj.nextInt();
		ArrayList<Info> ali=new ArrayList<>();
		for(int i=0;i<size;i++)
		{
			System.out.println();
			System.out.print(" Enter name of student : ");
			sobj.nextLine();
			String name=sobj.nextLine();
			System.out.println();
			System.out.print(" Enter id of student : ");
			int ID=sobj.nextInt();
			System.out.println();
			System.out.print(" Enter marks of student : ");
			int Marks=sobj.nextInt();
			Info iobj=new Info();
			iobj.Name(name);
			iobj.setid(ID);
			iobj.setmarks(Marks);
			ali.add(iobj);
		}
		obj.insert(filename,ali);
		System.out.print(" \n Names of the students are : \n\n");
		obj.Display(filename);
	}
}