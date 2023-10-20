#include<iostream>
using namespace std;

class author {
	private : int authorid;
	        string authorname,bookname;
	        int noofbookpublished;
	        int totalsalebook;
	public :
		author(){
			 authorid=10;
	         authorname="mr.anderson ";
			  bookname="smart boy";
	         noofbookpublished=10;
	         totalsalebook=8;
			}
	   author(int authorid,string authorname,string bookname,int notebookpublished,int totalsalebook){
	   	this->authorid=authorid;
	        this->authorname=authorname;
		this->bookname=bookname;
	    this->noofbookpublished=noofbookpublished;
	   this->totalsalebook=totalsalebook;
}
void display(){
	cout<<"authorid"<<authorid<<endl;
	cout<<"authorname"<<authorname<<endl;
	cout<<"bookname"<<bookname<<endl;
	cout<<"noofbookpublished"<<noofbookpublished<<endl;
	
	
	
}

};

int main(){
	author a1;
	a1.display();
	
	
	
	
	
	
}
