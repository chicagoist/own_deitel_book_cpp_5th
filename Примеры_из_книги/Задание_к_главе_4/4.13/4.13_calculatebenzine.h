#ifndef CALCULATEBENZINE_H
#define CALCULATEBENZINE_H


class CalculateBenzine
{
public:
    CalculateBenzine();
    void calculateTotalKmToLitres();
    double getTotalKmToLitres ();
    double getlastKmToLitres ();
    void setLocalKm( int );
    void setLocalLitres( );
private:
    int local_litres = 0;
    int local_kms = 0;

    int calcul_litres = 0;
    int calcul_km = 0;

    double last_kmTOlitres = 0;
    double global_kmTOlitres = 0;
};

#endif // CALCULATEBENZINE_H
