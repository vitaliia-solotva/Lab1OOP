#pragma once

    class Calculation
    {
    private:
        double a;
        double b;

    public:
        Calculation();
        Calculation(double a, double b);

        void computeAWithB(double x, double y, double z);
        void computeB(double x, double y, double z);

        double Faktr(int n);

        double getA();
        double getB();
    };

