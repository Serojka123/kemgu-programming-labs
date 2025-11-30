#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    int x, y;
};

struct Polygon{
    Point a, b, c, d;

    struct Sides {
        float ab, bc, cd, da;
    };

    struct Diagonals {
        float ac, bd;
    };

    Sides lenSides(){
        float ab = sqrt( pow(a.x - b.x, 2) + pow( a.y - b.y, 2) );
        float bc = sqrt( pow(b.x - c.x, 2) + pow( b.y - c.y, 2) );
        float cd = sqrt( pow(c.x - d.x, 2) + pow( c.y - d.y, 2) );
        float da = sqrt( pow(d.x - a.x, 2) + pow( d.y - a.y, 2) );
        
        Sides s;
        s.ab = ab;
        s.bc = bc;
        s.cd = cd;
        s.da = da;
        return s;
    };

    Diagonals lenDiagonals(){
        float ac = sqrt( pow(a.x - c.x, 2) + pow( a.y - c.y, 2) );
        float bd = sqrt( pow(b.x - d.x, 2) + pow( b.y - d.y, 2) );

        Diagonals d;
        d.ac = ac;
        d.bd = bd;
        return d;
    }
};

struct Rhombus{
    Polygon abcd;

    float Perimetr(){
        Polygon::Sides sides = abcd.lenSides();
        return sides.ab + sides.bc + sides.cd + sides.da;
    }

    float Square(){
        Polygon::Diagonals diagonals = abcd.lenDiagonals();
        return diagonals.ac * diagonals.bd / 2;
    }
};

int main(){
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;
    cout << "x3 = "; cin >> x3;
    cout << "y3 = "; cin >> y3;
    cout << "x4 = "; cin >> x4;
    cout << "y4 = "; cin >> y4;

    Point a = {x1, y1};
    Point b = {x2, y2};
    Point c = {x3, y3};
    Point d = {x4, y4};
    
    Polygon ABCD = {a, b, c, d};

    Polygon::Sides sides = ABCD.lenSides();

    if (sides.ab == sides.bc && sides.bc == sides.cd && sides.cd == sides.da){
        cout << "ромб" << endl;
        Rhombus RhombusABCD = {ABCD};
        cout << "Периметр ромба: " << RhombusABCD.Perimetr() << endl;
        cout << "Площадь ромба: " << RhombusABCD.Square() << endl;
    }
    else{
        cout << "не ромб" << endl;
    }

    return 0;
}