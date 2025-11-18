#include "Bieuthuc.h"

Bieuthuc::Bieuthuc(int level) {
    int pheptinh;
    switch (level)
    {
    case 1:
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        pheptoan = '+';
        break;

    case 2:
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        pheptinh = rand() % 2 + 1;
        if (pheptinh == 1) pheptoan = '+';
        else pheptoan = '-';
        break;

    case 3:
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        pheptinh = rand() % 3 + 1;
        if (pheptinh == 1) pheptoan = '+';
        else if (pheptinh == 2) pheptoan = '-';
        else pheptoan = '*';
        break;

    case 4:
        a = (rand() % 10 + 1) * 10;
        b = (rand() % 10 + 1) * 10;
        pheptinh = rand() % 2 + 1;
        if (pheptinh == 1) pheptoan = '+';
        else pheptoan = '-';
        break;

    case 5:
        a = (rand() % 10 + 1) * 10;
        b = (rand() % 10 + 1) * 10;
        pheptinh = rand() % 3 + 1;
        if (pheptinh == 1) pheptoan = '+';
        else if (pheptinh == 2) pheptoan = '-';
        else pheptoan = '*';
        break;
    }
}

ostream& operator<<(ostream& out, Bieuthuc bt) {
    out << bt.a << " " << bt.pheptoan << " " << bt.b;
    return out;
}

bool Bieuthuc::kiemtra(float traloi) {
    return traloi == giatri();
}

float Bieuthuc::giatri() {
    switch (pheptoan) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    default:
        return 0;
    }
}
