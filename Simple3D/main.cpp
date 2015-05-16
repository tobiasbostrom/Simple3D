//
//  main.cpp
//  Simple3D
//
//  Created by Tobias Boström on 15/05/15.
//  Copyright (c) 2015 Tobias Boström. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Vector2D.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Vector2D vect1 (2, 4);
    Vector2D vect2 (1, 3);
    cout << "Hello, World!\n";
    cout << vect1 + vect2;
    cout << vect1 - vect2;
    return 0;
}
