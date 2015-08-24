//
//  ex7_41_TEST.cpp
//  Test of Exercise 7.41
//
//  Created by pezy on 11/14/14.
//

#include "ex7_41.h"
using std::cout; using std::endl;

int main()
{
    cout << "1. default way: " << endl;
    cout << "----------------" << endl;
    Sales_data s1;   
    
    cout << "\n2. use std::string as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s2("CPP-Primer-5th");
    
    cout << "\n3. complete parameters: " << endl;
    cout << "----------------" << endl;
    Sales_data s3("CPP-Primer-5th", 3, 25.8);
    
    cout << "\n4. use istream as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s4(std::cin);
    
    return 0;
}

// print 
/*
 *  1. default way:
 *  ----------------
 *  Sales_data(const std::string&, unsigned, double)
 *  Sales_data()
 *  
 *  2. use std::string as parameter:
 *  ----------------
 *  Sales_data(const std::string&, unsigned, double)
 *  Sales_data(const std::string&)
 *  
 *  3. complete parameters:
 *  ----------------
 *  Sales_data(const std::string&, unsigned, double)
 *  
 *  4. use istream as parameter:
 *  ----------------
 *  Sales_data(const std::string&, unsigned, double)
 *  Sales_data()
 *  Sales_data(istream &is)
 *
 */ 
