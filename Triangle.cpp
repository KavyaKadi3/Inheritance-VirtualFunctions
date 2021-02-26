//
//  Triangle.cpp
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student: Write the implementation of the class Triangle here

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Shape.h"
#include "Triangle.h"

// Build a Triangle object
Triangle::Triangle(string n, float xcent, float ycent, float x1, float y1, float x2, float y2, float x3, float y3):Shape(n, xcent, ycent) {
    X1 = x1;
    Y1 = y1;
    X2 = x2;
    Y2 = y2;
    X3 = x3;
    Y3 = y3;
    
    
   
}

Triangle::~Triangle() {
    // Nothing to do
}

float Triangle::getX1() const {
    return X1;
}
float Triangle::getY1() const {
    return Y1;
}
float Triangle::getX2() const {
    return X2;
}
float Triangle::getY2() const {
    return Y2;
}
float Triangle::getX3() const {
    return X3;
}
float Triangle::getY3() const {
    return Y3;
}

void Triangle::setX1(float x1) {
    X1 = x1;
}
void Triangle::setY1(float y1) {
    Y1 = y1;
}
void Triangle::setX2(float x2) {
    X2 = x2;
}
void Triangle::setY2(float y2) {
    Y2 = y2;
}
void Triangle::setX3(float x3) {
    X3 = x3;
}
void Triangle::setY3(float y3) {
    Y3 = y3;
}

void Triangle::draw() const {
    // Set floating point printing to fixed point with 2 decimals
    cout << std::fixed;
    cout << std::setprecision(2);
    
    // Print the information
    cout << "triangle: " << name << " " << x_centre << " " << y_centre << " " << X1 << " " << Y1 << " " << X2 << " " << Y2 << " " << X3 << " " << Y3 << " " << computeArea() << endl;
}

float Triangle::computeArea() const {
    float area = ((X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2))/2);
    if (area<1) {
        return (area*-1);
    }
    return (area);
}

Shape* Triangle::clone() const {
    return (new Triangle(*this));
}
