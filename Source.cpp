//In class Lab - Feb 14  
//Currency conversion


#include <iostream>

using namespace std;

int main()
{

	const double EURO = .88;
	const double CANADIAN = 1.32;
	const double FRANC = 1.01;
	const double YUAN = 6.77;

	double americanDollars = 0.0;
	double canadianDollars = 0.0;
	double euros = 0.0;
	double francs = 0.0;
	double yuan = 0.0;

	cout << "Please enter the number of dollars" << endl;

	cin >> americanDollars;
	
	euros = americanDollars*EURO;
	cout << "You have " << euros << "  Euros"<<endl;
	
	canadianDollars = americanDollars*CANADIAN;
	cout << "You have " << canadianDollars << " Canadian Dollars"<<endl;

	francs = americanDollars*FRANC;
	cout << "You have " << francs << "  Francs"<<endl;
	

	yuan = americanDollars*YUAN;
	cout << "You have " << yuan << "  Yuans" <<endl;
	
	

	system("pause");

} //end  main