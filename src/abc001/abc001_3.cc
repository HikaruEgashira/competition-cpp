#include <bits/stdc++.h>
using namespace std;

// 5
int main() {
    float a, b;
    string Dir;
    int W;
    cin >> a >> b;

    a /= 10;
    if(a >= 0 && a < 11.25) {
        Dir = "N";
    } else if(a < 33.75) {
        Dir = "NNE";
    } else if(a < 56.25) {
        Dir = "NE";
    } else if(a < 78.75) {
        Dir = "ENE";
    } else if(a < 101.25) {
        Dir = "E";
    } else if(a < 123.75) {
        Dir = "ESE";
    } else if(a < 146.25) {
        Dir = "SE";
    } else if(a < 168.75) {
        Dir = "SSE";
    } else if(a < 191.25) {
        Dir = "S";
    } else if(a < 213.75) {
        Dir = "SSW";
    } else if(a < 236.25) {
        Dir = "SW";
    } else if(a < 258.75) {
        Dir = "WSW";
    } else if(a < 281.25) {
        Dir = "W";
    } else if(a < 303.75) {
        Dir = "WNW";
    } else if(a < 326.25) {
        Dir = "NW";
    } else if(a < 348.75){
        Dir = "NNW";
    } else {
        Dir = "N";
    }

    b = round(b * 10 / 60) / 10;
    if(b >= 0 && b < 0.2) {
        W = 0;
        Dir = "C";
    } else if(b < 1.5) {
        W = 1;
    } else if(b < 3.3) {
        W = 2;
    } else if(b < 5.4) {
        W = 3;
    } else if(b < 7.9) {
        W = 4;
    } else if(b < 10.7) {
        W = 5;
    } else if(b < 13.8) {
        W = 6;
    } else if(b < 17.1) {
        W = 7;
    } else if(b < 20.7) {
        W = 8;
    } else if(b < 24.4) {
        W = 9;
    } else if(b < 28.4) {
        W = 10;
    } else if(b < 32.6) {
        W = 11;
    } else {
        W = 12;
    }

    cout << Dir << " " << W << endl;
    return 0;
}