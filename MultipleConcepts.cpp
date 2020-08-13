#include<iostream>
#include<string.h>
using namespace std;
/* things to use : 1) constructor - default and copy-done
		   2)destructor
	           3) friend
                   3)static member done
		   4)this done
		   5)inline done
		   6) new and delete */
static int i=0;
class student
{
string name,dob,address,bloodg,cls,div;
int tele,driving,roll,contact;
public:
	    friend void showbase(student &s);
	student()
	{
		name="student";
		dob="00/00/0000";
		address="school";
		bloodg="O-";
		tele=000000000;
		driving=0000000000;
		roll=00;
		div="xxx";
		contact=00000000;
	}
    student(student &o)
	{
	name=o.name;
	dob=o.dob;
	address=o.dob;
	bloodg=o.bloodg;
	div=o.div;
	tele=o.tele;
	driving=o.driving;
	roll=o.roll;
	contact=o.contact;
	}
	void getdata()
{
	cout<<"Enter your name"<<endl;
	cin>>this->name;
	cout<<"Enter you date of birth in format dd/mm/yyyy"<<endl;
	cin>>this->dob;
	cout<<"Enter your address"<<endl;
	cin>>this->address;
	cout<<"Enter your blood group"<<endl;
	cin>>this->bloodg;
	cout<<"Enter your class"<<endl;
	cin>>this->cls;
	cout<<"Enter your division"<<endl;
	cin>>this->div;
	cout<<"Enter your Roll number"<<endl;
	cin>>this->roll;
	cout<<"Enter your Mobile contact number"<<endl;
	cin>>this->contact;
	cout<<"Enter your landline number"<<endl;
	cin>>this->tele;
	cout<<"Enter your driving license number"<<endl;
	cin>>this->driving;
}
~student()
{
	cout<<"destructure called"<<endl;
}



};
  void showbase(student &s)
    {

    cout<<"student name is "<<s.name<<endl;
    cout<<"dob number is "<<s.dob<<endl;
    cout<<"student roll number is "<<s.roll<<endl;
    cout<<"Student class is "<<s.cls<<endl;
    cout<<"Student division is "<<s.div<<endl;
    cout<<"Student blood group is "<<s.bloodg<<endl;
    cout<<"Student telephone number is "<<s.tele<<endl;
    cout<<"Student contact number is "<<s.contact<<endl;
    cout<<"Student driving license number is "<<s.driving<<endl;
    cout<<"Address of student is "<<s.address<<endl;
    }


int main()
{
	 student *ptr;
	
	char ch;
	do{	
	    ptr=new student;
            ptr->getdata();//every pointer is pointing to a specific object
	    showbase(*ptr);//here * is derefernce operator
            delete ptr;
	 cout<<"Do you want to continue ?(y/n)"<<endl;
	cin>>ch;
      cout<<ch<<endl;
	 }while(ch=='Y'||ch=='y');


}
/* output
noBody@anonymous:~/Documents$ g++ 5.cpp
noBody@anonymous:~/Documents$ ./a.out
Enter your name
abc
Enter you date of birth in format dd/mm/yyyy
12/12/12 
Enter your address
bvcoel
Enter your blood group
o+
Enter your class
se
Enter your division
comp
Enter your Roll number
50
Enter your Mobile contact number
999999999
Enter your landline number
7777777
Enter your driving license number
1234567899
student name is abc
dob number is 12/12/12
student roll number is 50
Student class is se
Student division is comp
Student blood group is o+
Student telephone number is 7777777
Student contact number is 999999999
Student driving license number is 1234567899
Address of student is bvcoel
destructure called
Do you want to continue ?(y/n)
n
*/
