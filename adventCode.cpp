// adventCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include <map>
using namespace std;

/*
input : each line in file 
find the pos find ()
*/
string  parttwo(string line){
    
    string digit[] = { "one", "two", "three" , "four", "five" , "six" , "seven" , "eight" , "nine" };

    bool rtnval = false;
    // Find first occurrence of 
    for (int i = 0; i < 9; i++) {
        size_t found = line.find(digit[i]);
        if (found != string::npos) { //npos showing not found
            cout << found << endl;
            cout << digit[i].length()<<endl; 
           size_t val = digit[i].size() ; 
            cout << val << endl;
            line.replace(found, val, to_string(i + 1));
            rtnval = true;
        }
        cout << line << endl;
    }
    return line;
}

int FirtDigit(string  line){
    vector <  char > digitvect;

    int firstDigit; 
    int lastDigit;

    for ( char i :  line) {
        if (isdigit(i))
        {
            digitvect.push_back(i);
        }
    }


 firstDigit = digitvect[0] - '0';


   cout << "first digit :  " << firstDigit << endl;
   int last = digitvect.size();
   lastDigit = digitvect[last - 1] - '0';
   cout << " last digit : " << lastDigit << endl; 


   int result = firstDigit * 10 + lastDigit; 
   cout << "this result " << result << endl;

   return result;

}


void firstpart() {
    /*
    while (getline(myfile, line)) {
        string s;


        for (char i : parttwo(line)) {
            if (isdigit(i)) {
                s += i;
            }
        }
        //cout << "This the string " << s << endl;
        if (s.size() >= 2) {
            int j = s.size();
            //cout << j << endl;
                 //cout << "thisissss" << s[j - 0 - 1] << endl;
            int result = (s[0] - '0') * 10 + (s[j - 1] - '0');
            cout << result << endl;
            resultvec.push_back(result);

        }
        if (s.size() == 1) {
            int result = (s[0] - '0') * 10 + (s[0] - '0');
            resultvec.push_back(result);
            cout << result << endl;
        }
    }
    for (int k = 0; k < resultvec.size(); k++) {
        resultf = resultf + resultvec[k];
        cout << "This is the total result :" << resultf << endl;

    }

    */

}




int main()
{

 // string s = parttwo("4nineeightseven2");
 // cout << s << endl;

  //int k = FirtDigit(s);
    //std::cout << "Hello World!\n";
    fstream myfile;
    string line;
  //string s;
    vector<int> resultvec;
    int resultf= 0; 
  
    myfile.open("myfile.txt");

    while (getline(myfile, line)) {
        string s = parttwo(line);
        int k = FirtDigit(s);
        resultvec.push_back(k);
    }
    for (int k = 0; k < resultvec.size(); k++) {
        resultf = resultf + resultvec[k];
        cout << "This is the total result :" << resultf << endl;

    }
}


