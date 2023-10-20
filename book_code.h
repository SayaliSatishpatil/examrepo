# include <iostream>
using namespace std;

class Book{
	private :
		int bookId;
		string bookName;
		double bookPrice;
	
	public: 
	Book(){
		cout<<"this is Book constructor"<<endl;
		this-> bookId=1;
		this->bookName="Cpp";
		this->bookPrice=100;
	}
	void setId(int bookId){
			this->bookId=bookId;
	}

	void setbookName(string bookName){
			this->bookName=bookName;
	}
	
	int getId(){
		return bookId;
	}
	
	string getName(){
		return bookName;
	}
	double getprice(){
		return bookPrice;
	}
	
	void cal_price(int n){
		cout<<"Your total price will be : "<<n*bookPrice<<endl;	
	}

};

