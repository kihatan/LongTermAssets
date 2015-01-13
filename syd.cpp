//
//  syd.cpp
//  Long Term Assets
//
//  Created by Noah Kihata on 10/16/14.
//  Copyright (c) 2014 Noah Kihata. All rights reserved.
//

#include "declarations.h"
#include <iostream>
#include <iomanip>
using namespace std;

void syd(int years, int month, int year, double cost, double final){
    
    
    setprecision(10);

    
    cout << "For a long-term asset:" << endl
    << "Costing $"  << cost << endl
    << "Over " << years << " years" << endl
    << "Starting " << month << "/" << year << endl
    << "With a Salvage Value of $" << final << endl
    << "Using the Sum of Years Digits Method" << endl << endl;
    
    double yearsum;
    
    for(int i = 1; i <= years; i++){
        yearsum += i;
    }
    
    double base = cost - final;
    
    output(98);
    
    cout << endl << "-     Date     ---      Base Amount      ---      Fraction      ---     Depreciation Expense     -" << endl;
    
    output(98);
    cout << endl;
    
    if(month == 1){
        for(int i = 0; i < years; i++){
            double dep = ((years - i) / yearsum) * base;
            cout << "- Dec 31, " << year + i;
            spacing(year, 4);
            cout << " --- " << base;
            spacing(base, 21);
            cout << " --- ";
            string t = to_string(years - i) + "/" + to_string(yearsum);
            int p = stringtoint(t);
            cout << years - i << "/" << yearsum;
            spacing(p, 16);
            cout << " --- " << dep;
            spacing(dep, 28);
            cout << " -" << endl;
            
        }
    }
    else{
    
        for(int i = 0; i < years; i++){
            double dep = ((years - i) / yearsum)* base;
            cout << "- Dec 31, " << year + i;
            spacing(year, 4);
            cout << " --- " << base;
            spacing(base, 11);
            cout << " --- ";
            string t = to_string(years - i) + "/" + to_string(yearsum) + " * " + to_string(11 - month) + "/" + to_string(yearsum);
            int p = stringtoint(t);
            cout << years - i << "/" << yearsum;
            spacing(p, 16);
            cout << " --- " << dep;
            spacing(dep, 20);
            cout << " -" << endl;
            
        }
    }
    output(98);
        
    
    
}
