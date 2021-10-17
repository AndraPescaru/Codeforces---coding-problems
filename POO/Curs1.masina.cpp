#include <iostream>
#include <string>

class Masina{
    public: 
    std :: string culoare;
    int nr_locuri;
    int greutate;
    float motorizare;
    std :: string brand;
    std :: string model;

    void initializare(std :: string a_culoare, int a_nr_locuri, int a_greutate, float a_motorizare, std :: string a_brand, std :: string a_model){
        culoare = a_culoare;
        nr_locuri = a_nr_locuri;
        greutate = a_greutate;
        motorizare = a_motorizare;
        brand = a_brand;
        model = a_model;
    }
    void afisare(){
        std :: cout << "Culoare:" << culoare <<std :: endl;
        std :: cout << "Nr locuri:" << nr_locuri <<std :: endl;
        std :: cout << "Greutate:" << greutate <<std :: endl;
        std :: cout << "Motorizare:" << motorizare <<std :: endl;
        std :: cout << "Brand:" << brand <<std :: endl;
        std :: cout << "Model:" << model <<std :: endl;
    }
};

int main(){

    Masina m;
    std :: string var_culoare;
    int var_nr_locuri;
    int var_greutate;
    float var_motorizare;
    std :: string var_brand;
    std :: string var_model;

    std :: cin >> var_culoare;
    std :: cin >> var_nr_locuri;
    std :: cin >> var_motorizare;
    std :: cin >> var_brand;
    std :: cin >> var_model;

    m.initializare(var_culoare, var_nr_locuri, var_greutate, var_motorizare, var_brand, var_model);
    m.afisare();

    return 0;
}
