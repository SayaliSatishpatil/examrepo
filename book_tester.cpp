#include<iostream>
#include "Book_code.h"
using namespace std;


int main (void){
Book b1;
b1.setId(7);
cout<<"id :"<<b1.getId()<<endl;
b1.getName();
cout<<"price :"<<b1.getprice()<<endl;
b1.setbookName("java");
cout<<"id :"<<b1.getName()<<endl;
b1.cal_price(5);
return 0;	
}
