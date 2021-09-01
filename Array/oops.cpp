#include<iostream>
using namespace std;
using std::string;

class Abstractstudent{
	virtual void AskForpromotion()=0;
	
};
class Student:Abstractstudent{
	private:
		int Usn;
		string Name;
		string Address;
		
		public:
				void setUsn(int usn){
					Usn=usn;
				}
				int getUsn(){
					return Usn;
				}
		void Varuuunn(){
			std::cout<<"USN-"<<Usn<<endl;
			std::cout<< Name <<endl; 
			cout<<Address;
		}
			void AskForpromotion()
			{
				if (Usn>30)
				cout<<Name<<"-gotpromoted"<<endl;
				else
				cout<<Name<<"-got no promotion";
			}
			
		Student (int usn,string name,string address){
		 Usn=usn;
		 Name= name;
		 Address=address;
		
			}
};
class Developer:Student{
	public:
		string Favproglang;
		Developer(string name,string company, int Usn,string Favproglang)
		:Student(name,company,age)
		{
			Favproglang=favprogramming language;
		}
		
};
int main()
{

	Developer  d =Developer(,"Vaishu","TCS",25,"CPP");
	cout<<getName()<<"fixed bug using"<<Favproglang<<endl;
	d.FixBug();
}
