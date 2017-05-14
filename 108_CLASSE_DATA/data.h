#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data
{
    //INTERFACCIA
    public:
        //COSTRUTTORI
        Data();
        Data(int gg);
        Data(int gg, int mm);
        Data(int gg, int mm, int aa);

        //OSSERVATORI
        std::string stampa_data();
        int get_giorno()    {return giorno;}
        int get_mese()      {return mese;}
        int get_anno()      {return anno;}

        //OVERLOAD OPERATORI SATNDARD
        bool operator==(const Data&);
        bool operator>(const Data&);
        bool operator<(const Data&);
        Data operator++(int);

        //ALTRI
        static tm* data_corrente();
        bool valida (int gg,int mm,int aa);
        static bool bisestile(int);
        static int giorni_mese(int,int);
        static int conta_giorni(const Data&, const Data&);

    //IMPLEMENTAZIONE
    private:
        //int giorno = 1, mese = 1, anno = 1970; metodo vecchio
        int giorno {oggi->tm_mday};
        int mese {oggi->tm_mon+1};
        int anno {oggi->tm_year+1900};

        static tm* oggi;
};

#endif // DATA_H_INCLUDED
