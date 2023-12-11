/*
Write a C++ program that creates an output file, writes information to it,
closes the file, open it again as an input file and read the information from the file.
*/

#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("abc.txt");
    file<<"Welcome to snjbcoe..........";
    file.close();

    ifstream file1;
    file1.open("abc.txt");
    char ch[50];
    while(!file1.eof())
    {
        file1>>ch;
        cout<<""<<ch;
    }
    file1.close();
    return 0;
}


//****************************************OR*******************************************
/*
Write a C++ program that creates an output file, writes information to it, closes the file and
open it again as an input file and read the information from the file.

#include<iostream>
#include<fstream>
using namespace std;
class file
{
    public:
	string name;
	float price;
    void accept()
    {
        cout<<"\nEnter Book Name:";
		cin>>name;
		cout<<"\nEnter Price:";
		cin>>price;
    }
	void display()
	{
		cout<<"\nBook Name: "<<name<<"\nPrice: "<<price<<endl;
	}
};

int main()
{
	file o[10];
	int i,n;
	fstream f;

	cout<<"How many records you want: ";
	cin>>n;

	f.open("stu.txt",ios::out);
	for(i=0;i<n;i++)
    {
		o[i].accept();
		f<<"\nTitle of book: "<<o[i].name<<"\nPrice of book : " <<o[i].price<<endl;
	}
	f.close();

	f.open("stu.txt",ios::app);
	for(i=0;i<n;i++)
	{
			f.read((char*)&o[i],sizeof(o[i]));
			o[i].display();
	}
	f.close();

	return 0;
}
*/
