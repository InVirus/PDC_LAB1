#pragma once
#include<iostream>
#include<string>

using namespace std;

class Truth {
private:
    bool p, q;  
public: 
    void setP(bool p);
    void setQ(bool q);
  
    bool getP() const { return p; }
    bool getQ() const { return q; }
   
    void Input();
    
    bool isValid(string input);
    
    bool getVal(string input);
  
    bool checkAnd();
    bool checkOr();
    bool checkXor();
    bool checkFirstImplication();
    bool checkSecondImplication();
    bool checkEquivalence();

    Truth();
    Truth(bool p, bool q);
};
