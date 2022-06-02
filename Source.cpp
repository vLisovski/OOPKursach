#include"Functions.h"
#include<math.h>

void Kvadrat::perimeter()
{
    perim = a * 4;

}
void Kvadrat::field()
{
    fik = a * a;
}
void Kvadrat::diagonal()
{
    dia = floor(sqrt(2 * a * a)*100)/100;

}
int Kvadrat::geta()
{
    return a;
}
void Piramide::apophem()
{
    apop = floor(sqrt(h * h + a * a / 4)*100)/100;

}
void Piramide::field()
{

    fip = floor((2 * a * sqrt(h * h + a * a / 4) + a * a)*100)/100;
}
void Piramide::sizep()
{
    size = floor((0.333 * a * a * h)*100)/100;

}
int Piramide::get_h()
{
    return h;
}
int Piramide::geta()
{
    return a;
}


