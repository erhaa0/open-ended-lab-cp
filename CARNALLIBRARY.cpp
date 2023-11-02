#include<iostream>
using namespace std;
int main()
{
	int choice, ID, days;

	
    cout << "welcome to the Carnal library! We hope you enjoy your stay here! :D " << endl;
    cout << "Please select an option:" << endl;
	cout << "-Borrow a book" << endl; //choice 1
    cout << "-Return a book" << endl; //choice 2
    cout << "Note that $1 deducted for late submission dont forget!!" << endl;
    cout << "Do you want to borrow a book (1) or return a book(2)?";
    cin >> choice ;

    if(choice == 1)
    {
    	cout << "If you want to borrow a book, enter the ID of the book please! " << endl;
    	cin >> ID;
    	cout <<"good for you! the book is avalaible." << endl;
		cout << "Do you want to borrow it? (Yes or No)" << endl;
    	cin >> choice;
    	if(choice == 'yes') {
    	cout << "Enjoy your book! Please give it back on time." << endl:
		cout << "Sorry but you cannot borrow it, return the books you borrowed before first kindly." << endl;
       }

       else if(choice == 'no') {
       	cout << "Too bad. Hope you find another book to your liking!" << endl;
	   }
	}
	else if (choice == 2)
	{
		days;
		
			if (days == 20) {
			cout << "Thank you for returning this book on time." << endl;
			}

		else if(days >= 20) {
			cout << "You will be fined #$" << days << " for being late. Hope you return it on time in the future." << endl;
			cin >> days;
		}
	     
		

	}
	return 0;
}