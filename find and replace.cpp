//prog to use command line argument adn search a word in fine and replace from other provided by user//
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(int argc, char * argv[])//argv[2] is what to replace
{
	int i=0,b;
        string data;
	ofstream out;
	ifstream in;
	in.open(argv[3]);
	
	getline(in, data);//reading from the file
	b=strlen(argv[1]);//length of what is to be replaced
	
while(1)
{	i=data.find(argv[1]);//which position is the word to be replaced
//or str1.find(str2)
 if(i==-1)
break;
	data.replace(i,b,argv[2]);
	out.open(argv[3]);
	//cout<<data<<endl;
	out<<data;
	out.close();
	
}
cout<<data<<endl;

}
/* OUTPUT
noBody@anonymous:~/Documents$ g++  'find and replace.cpp'  
noBody@anonymous:~/Documents$ ./a.out are and shanu.txt
Includes multiple scenarios and "recipes", enabling users to create custom complex images with ease. Designed to provide value to seasoned testers are novices alike. 
Includes multiple scenarios and "recipes", enabling users to create custom complex images with ease. Designed to provide value to seasoned testers and novices alike. 
*/
