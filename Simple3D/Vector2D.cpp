//
//  Vector2D.cpp
//  Simple3D
//
//  Created by Tobias Boström on 15/05/15.
//  Copyright (c) 2015 Tobias Boström. All rights reserved.
//

#include "Vector2D.h"
#include <string>
#include <iostream>

Vector2D::Vector2D(int x, int y) {
    set_values(x, y);
}

void Vector2D::set_values(int x, int y) {
    this->x = x;
    this->y = y;
}

std::ostream& operator<<(std::ostream& out, const Vector2D& vector) {
    return out << "(" << vector.x << ", " << vector.y << ")";
}

Vector2D Vector2D::operator+(const Vector2D& vector) {
    return Vector2D (x+vector.x, y+vector.y);
}

Vector2D Vector2D::operator-(const Vector2D& vector) {
    return Vector2D (x-vector.x, y-vector.y);
}