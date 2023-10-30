class Wektor2D
{
private:

    double x;
    double y;

public:
    Wektor2D() {x = 0; y = 0;} //konstruktor domyslny

    Wektor2D(double i_x, double i_y) //konstruktor
    {
        x = i_x;
        y = i_y;
    }

    void setX(double new_x)
    {
        x = new_x;
    }

    void setY(double new_y)
    {
        y = new_y;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2) //dodawanie wektorow
{
    return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

double operator*(Wektor2D w1, Wektor2D w2) //iloczyn skalarny
{
    double result;
    result = (w1.getX() * w2.getX()) + (w1.getY() * w2.getY());
    return result;
}
