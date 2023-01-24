#ifndef UNTITLED_EVO_H
#define UNTITLED_EVO_H

#include "cmath"


class Evo {
public:
    Evo() = delete;

    Evo(double r, double t) {
        this->r = r;
        this->t = t;
    }

    double d_rast() const {
        return pow(t / 180 * M_PI * r + r * r, 0.5);
    };

    double d_dugi() const {
        return 0.5 * r * pow(t / 180 * M_PI, 2);
    };

    double d_x() const {
        return r * (cos(t) + t / 180 * M_PI * sin(t));
    };

    double d_y() const {
        return r * (cos(t) - t / 180 * M_PI * sin(t));
    };

    double d_radius(double rad) const {
        return pow(rad * 2 * r, 0.5);
    }

private:
    double r;
    double t;
};


#endif //UNTITLED_EVO_H
