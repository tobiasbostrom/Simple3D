//
//  Vector2D.h
//  Simple3D
//
//  Created by Tobias Boström on 15/05/15.
//  Copyright (c) 2015 Tobias Boström. All rights reserved.
//

#include <stdio.h>
#include <string>

class Vector2D {
    private:
        int x, y;
        friend std::ostream& operator<<(std::ostream& out, const Vector2D& vector);
    public:
        Vector2D(int x, int y);
        void set_values(int x, int y);
        Vector2D operator+(const Vector2D& other);
        Vector2D operator-(const Vector2D& other);
};
