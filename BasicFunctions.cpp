//
//  BasicFunctions.cpp
//  Long Term Assets
//
//  Created by Noah Kihata on 10/16/14.
//  Copyright (c) 2014 Noah Kihata. All rights reserved.
//

#include "declarations.h"
#include <iostream>
#include <iomanip>
using namespace std;

int neg(int num){
    if(num < 0){
        num *= -1;
    }
    return num;
}

int check(string type){
    
 
    if(type == "SYD" || type == "syd"){
        cin.clear();
        return 1;
    }
    else if(type == "straight" || type == "Straight"){
        cin.clear();
        return 2;
    }
    else if(type == "double" || type == "Double"){
        cin.clear();
        return 3;
    }
    else if(type == "units" || type == "Units"){
        cin.clear();
        return 4;
    }
    else{
        cout << endl
        << "Invalid Input.  Valid inputs are:" << endl
        << "syd - Sum of Years Depreciation" << endl
        << "straight - Straight Line Depreciation" << endl
        << "double - Double Declingng Balance" << endl
        << "units - Units of Production Depreciation" << endl << endl
        << "What Type of Depreciation would you Like? ";
        cin.clear();
        cin >> type;
        return check(type);
        
    }
    return 0;
}

int right(int month){
    if(month < 1 || month > 12){
        cout << "Incorrect month, please enter a correct one: ";
        cin >> month;
        right(month);
    }
    return month;
}

int lenget(int k){
    
    // the "length" of 0 is 1:
    int len = 1;
    
    // and for numbers greater than 0:
    if (k >= 10) {
        // we count how many times it can be divided by 10:
        // (how many times we can cut off the last digit until we end up with 0)
        for (len = 0; k > 0; len++) {
            k = k / 10;
        }
    }
    
    // and that's our "length":
    return len;
}


void output(int k){

    for(int i = 0; i < k; i++){
        cout << "-";
    }
    
}

void spacing(int k, int spaces){

    for(int i = 0; i < spaces - lenget(k); i++){
        cout << " ";
    }
}

int stringtoint(string s){
    int r = 1;
    for(int i = 0; i < s.length(); i++){
        r++;
    }
    return r;
}

int finalvscost(double& a, double& b){
    if(a > b){
        cout << "Salvage Value can not be greater than Original Cost.  Please Reinput" << endl;
        cout << "Original Cost: ";
        cin >> b;
        cout << "Salvage Value: ";
        cin >> a;
        cout << endl << endl;
        
        return finalvscost(a, b);
    }
    return 0;

}






