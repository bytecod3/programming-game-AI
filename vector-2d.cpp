
#include <iostream>

struct Vector2D {
    double x;
    double y;

    Vector2D():x(0.0), y(0.0){}; // origin 
    Vector2D(double a, double b); // point 

    // set x and y to zero
    inline void Zero();

    // returns true is both x and y are zero
    inline bool isZero() const;

    // return the length of the vector
    inline double Length() const;

    // return the squared length of a vector (to avoid sqrt)
    inline double LengthSq() const;

    inline void Normalize();

    // returns the dot product of this and v2
    inline double Dot(const Vector2D& v2) const;

    // returns poisitive if v2 is clockwise of this vector 
    // negative if counterclockwise (y axis is pointing down, x axis is pointing right)
    inline int Sign(const Vector2D& v2) const;

    // returns the vector that is perpendicular to this one 
    inline Vector2D Perp() const;

    // adjusts x and y so that the length of the vector does not exceed max
    inline void Truncate(double max);

    // returns the distance between this vector and the one passed as a parameter
    inline double Distance(const Vector2D& v2) const;

    // squared version of the above
    inline double DistanceSq(const Vector2D& v2) const;

    // returns the vector that is the reverse of this vector
    inline Vector2D GetReverse() const;

    // some operators 
    const Vector2D& operator+=(const Vector2D& rhs);
    const Vector2D& operator-=(const Vector2D& rhs);
    const Vector2D& operator*=(const Vector2D& rhs);
    const Vector2D& operator/=(const double& rhs);
    bool operator== (const Vector2D& rhs) const;
    bool operator!=(const Vector2D& rhs) const;

};