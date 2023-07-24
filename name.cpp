#include<iostream>
using namespace std;
int main()
{
  //Put the first name and the last name as strings
  //Ask the user for their first name and their last names and then print the output together
  string first_name, last_name;
  cout << "Tell me your first name: ";

  //store the given input 
  cin>>first_name;

  //Repeat the same step but this time ask for their last name
  cout << "Tell me your last name: ";
  cin >>last_name;

  //Add the two together and then print out the output
  cout << "Your Full name is "<<first_name << " " << last_name;

  return 0;


}
