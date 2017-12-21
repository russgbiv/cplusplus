#include "Person.h"
#include <iostream>

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
  cout << "Constructing" << firstname << " " << lastname << endl;
}

Person::~Person()
{
  cout << "Destructing" << firstname << " " << lastname << endl;
  
}

string Person::GetName()
{
  return firstname + " " + lastname;
}