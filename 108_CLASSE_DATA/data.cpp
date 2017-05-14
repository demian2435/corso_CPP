#include "data.h"

bool Data::operator>(const Data& altra)
{
    if (anno>altra.anno)
        return true;
    else
        if (anno==altra.anno)
            if (mese>altra.mese)
                return true;
            else
                if(mese==altra.mese)
                    if(giorno>altra.giorno)
                        return true;

    return false;
}

bool Data::operator<(const Data& altra)
{
    return !(*this>altra || *this==altra);
}

bool Data::operator==(const Data& altra)
{
    return giorno==altra.giorno && mese==altra.mese &&anno==altra.anno;
}

bool Data::bisestile(int _anno)
{
    return ((_anno % 4==0 && _anno % 100 !=0) || (_anno % 400==0));
}

int Data::giorni_mese(int _mese, int _anno)
{
    switch (_mese)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    break;

    case 2:
        return Data::bisestile(_anno) ? 29 : 28;
    break;

    default:
        return 0;
        break;
    }
}

int Data::conta_giorni(const Data& prima, const Data& seconda)
{
    Data a=prima;
    Data b=seconda;
    int tot=0;

    if (a<b)
    {
        while(!(a==b)){a++;tot++;};

        return tot;
    }
    else
        return 0;
}

Data Data::operator++(int non_usato)
{
    Data d = *this; //DATA PRIMA DELL'INCREMENTO

    giorno++;

    if (giorno>giorni_mese(mese, anno))
    {
        mese++;
        giorno=1;
    }
    if (mese>12)
    {
        anno++;
        mese=1;
        giorno=1;
    }

    return d;
}

//FUNZIONI
tm* Data::oggi = Data::data_corrente(); //Variabile inizializzata ad inizio compilazione e resta invariata

tm* Data::data_corrente()
{
    time_t tempo_secondi=time(nullptr);
    return localtime(&tempo_secondi);
}

bool Data::valida(int gg, int mm,int aa)
{
    return gg>=1 && gg<=31 && mm>=1 && mm<=12 && aa>=1900;
}

//COSTRUTTORE DELEGATO
Data::Data (int gg,int mm,int aa)
{
    if (valida(gg,mm,aa))
    {
        giorno=gg;
        mese=mm;
        anno=aa;
    }
    else //impostiamo la data corrente
    {
        //tm* oggi = data_corrente();
        giorno = oggi->tm_mday;
        mese = oggi->tm_mon+1;
        anno = oggi->tm_year+1900;
    }
}

//COSTRUTTORI DELEGANTI
Data::Data() : Data (data_corrente()->tm_mday,data_corrente()->tm_mon+1,data_corrente()->tm_year+1900)
{

}

Data::Data (int gg) : Data (gg,data_corrente()->tm_mon+1,data_corrente()->tm_year+1900)
{

}

Data::Data (int gg,int mm) : Data (gg,mm,data_corrente()->tm_year+1900)
{

}

//OSSERVATORI
std::string Data::stampa_data()
{
    if (giorno <=9 && mese >9)
    return "0"+std::to_string(giorno)+"/"+std::to_string(mese)+"/"+std::to_string(anno);
    if (giorno <=9 && mese <=9)
    return "0"+std::to_string(giorno)+"/0"+std::to_string(mese)+"/"+std::to_string(anno);
    if (giorno >9 && mese <=9)
    return std::to_string(giorno)+"/0"+std::to_string(mese)+"/"+std::to_string(anno);
    if (giorno >9 && mese >9)
    return std::to_string(giorno)+"/"+std::to_string(mese)+"/"+std::to_string(anno);
}
