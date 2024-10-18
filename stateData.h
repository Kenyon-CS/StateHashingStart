#ifndef STATEDATA_H
#define STATEDATA_H

#include <iostream>
#include <string>
using namespace std;

class stateData {
private:
    string name;
    string capital;
    double gdp;
    string motto;
    string flower;
    double area;

public:
    stateData(string nm = "", string cap = "", double g = 0.0, string mot = "", string fl = "", double ar = 0.0);

    void setStateInfo(string nm, string cap, double g, string mot, string fl, double ar);
    string getName() const;
    string getCapital() const;
    double getGDP() const;
    string getMotto() const;
    string getFlower() const;
    double getArea() const;

    bool operator==(const stateData &other) const;
    bool operator!=(const stateData &other) const;
    bool operator<(const stateData &other) const;
    bool operator>(const stateData &other) const;

    friend ostream &operator<<(ostream &out, const stateData &state);
    friend istream &operator>>(istream &in, stateData &state);
};

#endif
