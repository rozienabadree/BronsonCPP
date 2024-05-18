namespace dataChecks
{
      
  bool isvalidInt(string str)
  {
    int start = 0;
    int i;
    bool valid = true;  // assume a valid
    bool sign = false;  // assume no sign

    // check for an empty string
    if (int(str.length()) == 0)  valid = false;

    // check for a leading sign
    if (str.at(0) == '-'|| str.at(0) == '+')
    {
      sign = true;
      start = 1;  // start checking for digits after the sign
    }

    // check that there's at least one character after the sign
    if (sign && int(str.length()) == 1) valid = false;

    // now check the string, which you know
    // has at least one non-sign character
    i = start;
    while(valid && i < int(str.length()))
    {
      if(!isdigit(str.at(i))) valid = false;  // found a non-digit character
      i++;  // move to next character
    }
    return valid;
  }

  int getanInt()
  {
    bool isvalidInt(string);  // function declaration (prototype)
    bool notanint = true;
    string svalue;

    while (notanint)
    {
      try
      {
        cin >> svalue;  // accept a string input
        if (!isvalidInt(svalue)) throw svalue;
      }
      catch (string e)
      {
        cout << "Invalid integer - Please reenter: ";
        continue; // send control to the while statement
      }
      notanint = false;
    }
    return atoi(svalue.c_str());  // convert to an integer
  }
  
  // a function that returns the integer part of a number
  int whole(int number)
  {
    return number;
  }

  // returns the fractional part of a double precision number
  double fracpart(double number)
  {
    int whole(int);
    return (number - whole(number));
  }

}  // end of dataChecks namespace

