//
//  main.cpp
//  Long Term Assets
//
//  Created by Noah Kihata on 10/16/14.
//  Copyright (c) 2014 Noah Kihata. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "declarations.h"

using namespace std;

int main() {
    
    setprecision(10);
    
    string type;
    int years;
    int month;
    int year;
    double cost;
    double final;
    
    
    cout << "                       ----------------------------------------------" << endl
         << "                       --    Welcome to Depreciation Calculator    --" << endl
         << "                       ----------------------------------------------" << endl << endl
         << "What Type of Depreciation would you Like? ";
    cin >> type;
    
    int dec = check(type);
    
    cout << "What was the cost in dollars for the asset? (no commas) ";
    cin >> cost;
    cost = neg(cost);
    
    cout << "How many YEARS will this depreciate for? ";
    cin >> years;
    years = neg(years);
    
    cout << "What is the expected salvage value? (no commas) ";
    cin >> final;
    final = neg(final);
    
    cout << "What are the starting MONTH and YEAR (type each individually followed by an enter)? " << endl;
    cin >> month >> year;
    month = neg(month);
    year = neg(year);
    
    month = right(month);
    
    
    cout << endl << endl;
    
    finalvscost(final, cost);
    
    
    
    
    
    
    switch(dec){
            
        case 1:
            syd(years, month, year, cost, final);
            break;
        
        case 2:
            str(years, month, year, cost, final);
            break;
       
        case 3:
            doub(years, month, year, cost, final);
            break;
            
        case 4:
            unit(years, month, year, cost, final);
            break;
            
    }
    
    for(int i = 0; i < 6; i++){
        
        cout << endl;
        
    }
    
    
    
}























