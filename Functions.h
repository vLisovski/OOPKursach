#pragma once


class Kvadrat
{
protected:
    int a;    
public:
    Kvadrat(int a) { this->a = a; }
    Kvadrat() {}
    int perim = 0, fik = 0;
    float dia = 0.0;
    void perimeter();
    virtual void field();
    void diagonal();
    virtual int geta();
    ~Kvadrat() {}
};

class Piramide : public Kvadrat
{
private:
    int h;
public:
    float size = 0, fip = 0, apop = 0;
    Piramide(int a, int h):Kvadrat(a) { this->h = h; }
    Piramide() {}
    void field();
    void sizep();
    void apophem();
    int get_h();
    int geta();
    ~Piramide() {}
};


