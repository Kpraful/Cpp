/*write a c++ program to write input in file, close it, and open it again to read input from it*/
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
int i=0;
string data;
ofstream out;
cout<<"Enter the name you wanted to give to your file with extension"<<endl;
string name;
cin>>name;
out.open(name);
cout<<"Enter the data you wanted to enter into file, press ctrl+D to save and close the file"<<endl;


while(getline(cin,data))
{
 if(data=="^D")
  break;
 out<<data;

}
out.close();
//for showing text on screen
ifstream in;
in.open(name);
cout<<"Reading from the file"<<endl;


getline(in, data);
cout<<data;

cout<<endl;
}
/*
noBody@anonymous:~/Documents$ g++  fielhandling.cpp 
noBody@anonymous:~/Documents$ ./a.out
Enter the name you wanted to give to your file with extension
file.txt
Enter the data you wanted to enter into file, press ctrl+D to save and close the file
this is the file which is create by c++
Reading from the file
this is the file which is create by c++
*/


