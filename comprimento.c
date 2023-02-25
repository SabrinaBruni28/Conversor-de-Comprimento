#include "comprimento.h"

/*Funcao que adiciona o valor que deseja ser convertido.*/
void Adiciona_Valor(Comprimento* comp, int n, float valor){
    switch (n){
        case 1:
            comp->km = valor;
            break;
        case 2:
            comp->hm = valor;
            break;
        case 3:
            comp->dam = valor;
            break;
        case 4:
            comp->m = valor;
            break;
        case 5:
            comp->dm = valor;
            break;
        case 6:
            comp->cm = valor;
            break;
        case 7:
            comp->mm = valor;
            break;
    }
}
/*Funcao que converte todos relacionados ao quilometro chamando a funcao de determinada conversao.*/
void Converte_km(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            printf("\n\033[1;34m# %.2fkm correspondem %.2fkm\n\033[m", comp->km, comp->km);
            break;
        case 2:
            km_hm(comp);
            break;
        case 3:
            km_dam(comp);
            break;
        case 4:
            km_m(comp);
            break;
        case 5:
            km_dm(comp);
            break;
        case 6:
            km_cm(comp);
            break;
        case 7:
            km_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao hectometro chamando a funcao de determinada conversao.*/
void Converte_hm(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            hm_km(comp);
            break;
        case 2:
            printf("\n\033[1;34m# %.2fhm correspondem a %.2fhm\n\033[m", comp->hm, comp->hm);
            break;
        case 3:
            hm_dam(comp);
            break;
        case 4:
            hm_m(comp);
            break;
        case 5:
            hm_dm(comp);
            break;
        case 6:
            hm_cm(comp);
            break;
        case 7:
            hm_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao decametro chamando a funcao de determinada conversao.*/
void Converte_dam(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            dam_km(comp);
            break;
        case 2:
            dam_hm(comp);
            break;
        case 3:
            printf("\n\033[1;34m# %.2fdam correspondem a %.2fdam\n\033[m", comp->dam, comp->dam);
            break;
        case 4:
            dam_m(comp);
            break;
        case 5:
            dam_dm(comp);
            break;
        case 6:
            dam_cm(comp);
            break;
        case 7:
            dam_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao metro chamando a funcao de determinada conversao.*/
void Converte_m(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            m_km(comp);
            break;
        case 2:
            m_hm(comp);
            break;
        case 3:
            m_dam(comp);
            break;
        case 4:
            printf("\n\033[1;34m# %.2fm correspondem a %.2fm\n\033[m", comp->m, comp->m);
            break;
        case 5:
            m_dm(comp);
            break;
        case 6:
            m_cm(comp);
            break;
        case 7:
            m_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao decimetro chamando a funcao de determinada conversao.*/
void Converte_dm(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            dm_km(comp);
            break;
        case 2:
            dm_hm(comp);
            break;
        case 3:
            dm_dam(comp);
            break;
        case 4:
            dm_m(comp);
            break;
        case 5:
            printf("\n\033[1;34m# %.2fdm correspondem a %.2fdm\n\033[m", comp->dm, comp->dm);
            break;
        case 6:
            dm_cm(comp);
            break;
        case 7:
            dm_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao centimetro chamando a funcao de determinada conversao.*/
void Converte_cm(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            cm_km(comp);
            break;
        case 2:
            cm_hm(comp);
            break;
        case 3:
            cm_dam(comp);
            break;
        case 4:
            cm_m(comp);
            break;
        case 5:
            cm_dm(comp);
            break;
        case 6:
            printf("\n\033[1;34m# %.2fcm correspondem a %.2fcm\n\033[m", comp->cm, comp->cm);
            break;
        case 7:
            cm_mm(comp);
            break;
    }
}
/*Funcao que converte todos relacionados ao milimetro chamando a funcao de determinada conversao.*/
void Converte_mm(Comprimento* comp, int n2){
    switch (n2){
        case 1:
            mm_km(comp);
            break;
        case 2:
            mm_hm(comp);
            break;
        case 3:
            mm_dam(comp);
            break;
        case 4:
            mm_m(comp);
            break;
        case 5:
            mm_dm(comp);
            break;
        case 6:
            mm_cm(comp);
            break;
        case 7:
            printf("\n\033[1;34m# %.2fmm correspondem a %.2fmm\n\033[m", comp->mm, comp->mm);
            break;
    }
}
/*Funcao que faz a convercao dos valores chamando a funcao de determinada conversao.*/
void Converte_Valor(Comprimento* comp, int n1, int n2){
     switch (n1){
        case 1:
            Converte_km(comp, n2);
            break;
        case 2:
            Converte_hm(comp, n2);
            break;
        case 3:
            Converte_dam(comp, n2);
            break;
        case 4:
            Converte_m(comp, n2);
            break;
        case 5:
            Converte_dm(comp, n2);
            break;
        case 6:
            Converte_cm(comp, n2);
            break;
        case 7:
            Converte_mm(comp, n2);
            break;
    }
}
/*Funcao que converte quilometro para hectometro*/
void km_hm(Comprimento* comp){
    comp->hm = comp->km * 10;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fhm\n\033[m", comp->km, comp->hm);
}
/*Funcao que converte hectometro para quilometro*/
void hm_km(Comprimento* comp){
    comp->km = comp->hm / 10;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fkm\n\033[m", comp->hm, comp->km);
}
/*Funcao que converte quilometro para decametro*/
void km_dam(Comprimento* comp){
    comp->dam = comp->km * 100;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fdam\n\033[m", comp->km, comp->dam);
}
/*Funcao que converte decametro para quilometro*/
void dam_km(Comprimento* comp){
    comp->km = comp->dam / 100;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fkm\n\033[m", comp->dam, comp->km);
}
/*Funcao que converte quilometro para metro*/
void km_m(Comprimento* comp){
    comp->m = comp->km * 1000;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fm\n\033[m", comp->km, comp->m);
}
/*Funcao que converte metro para quilometro*/
void m_km(Comprimento* comp){
    comp->km = comp->m / 1000;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fkm\n\033[m", comp->m, comp->km);
}
/*Funcao que converte quilometro para decimetro*/
void km_dm(Comprimento* comp){
    comp->dm = comp->km * 10000;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fdm\n\033[m", comp->km, comp->dm);
}
/*Funcao que converte decimetro para quilometro*/
void dm_km(Comprimento* comp){
    comp->km = comp->dm / 10000;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fkm\n\033[m", comp->dm, comp->km);
}
/*Funcao que converte quilometro para centimetro*/
void km_cm(Comprimento* comp){
    comp->cm = comp->km * 100000;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fcm\n\033[m", comp->km, comp->cm);
}
/*Funcao que converte centimetro para quilometro*/
void cm_km(Comprimento* comp){
    comp->km = comp->cm / 100000;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fkm\n\033[m", comp->cm, comp->km);
}
/*Funcao que converte quilometro para milimetro*/
void km_mm(Comprimento* comp){
    comp->mm = comp->km * 1000000;
    printf("\n\033[1;34m# %.2fkm correspondem a %.2fmm\n\033[m", comp->km, comp->mm);
}
/*Funcao que converte milimetro para quilometro*/
void mm_km(Comprimento* comp){
    comp->km = comp->mm / 1000000;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fkm\n\033[m", comp->mm, comp->km);
}
/*Funcao que converte hectometro para decametro*/
void hm_dam(Comprimento* comp){
    comp->dam = comp->hm * 10;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fdam\n\033[m", comp->hm, comp->dam);
}
/*Funcao que converte decametro para hectometro*/
void dam_hm(Comprimento* comp){
    comp->hm = comp->dam / 10;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fhm\n\033[m", comp->dam, comp->hm);
}
/*Funcao que converte hectometro para metro*/
void hm_m(Comprimento* comp){
    comp->m = comp->hm * 100;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fm\n\033[m", comp->hm, comp->m);
}
/*Funcao que converte metro para hectometro*/
void m_hm(Comprimento* comp){
    comp->hm = comp->m / 100;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fhm\n\033[m", comp->m, comp->hm);
}
/*Funcao que converte hectometro para decimetro*/
void hm_dm(Comprimento* comp){
    comp->dm = comp->hm * 1000;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fdm\n\033[m", comp->hm, comp->dm);
}
/*Funcao que converte decimetro para hectometro*/
void dm_hm(Comprimento* comp){
    comp->hm = comp->dm / 1000;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fhm\n\033[m", comp->dm, comp->hm);
}
/*Funcao que converte hectometro para centimetro*/
void hm_cm(Comprimento* comp){
    comp->cm = comp->hm * 10000;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fcm\n\033[m", comp->hm, comp->cm);
}
/*Funcao que converte centimetro para hectometro*/
void cm_hm(Comprimento* comp){
    comp->hm = comp->cm / 10000;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fhm\n\033[m", comp->cm, comp->hm);
}
/*Funcao que converte hectometro para milimetro*/
void hm_mm(Comprimento* comp){
    comp->mm = comp->hm * 100000;
    printf("\n\033[1;34m# %.2fhm correspondem a %.2fmm\n\033[m", comp->hm, comp->mm);
}
/*Funcao que converte milimetro para hectometro*/
void mm_hm(Comprimento* comp){
    comp->hm = comp->mm / 100000;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fhm\n\033[m", comp->mm, comp->hm);
}
/*Funcao que converte decametro para metro*/
void dam_m(Comprimento* comp){
    comp->m = comp->dam * 10;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fm\n\033[m", comp->dam, comp->m);
}
/*Funcao que converte metro para decametro*/
void m_dam(Comprimento* comp){
    comp->dam = comp->m / 10;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fdam\n\033[m", comp->m, comp->dam);
}
/*Funcao que converte decametro para decimetro*/
void dam_dm(Comprimento* comp){
    comp->dm = comp->dam * 100;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fdm\n\033[m", comp->dam, comp->dm);
}
/*Funcao que converte decimetro para decametro*/
void dm_dam(Comprimento* comp){
    comp->dam = comp->dm / 100;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fdam\n\033[m", comp->dm, comp->dam);
}
/*Funcao que converte decametro para centimetro*/
void dam_cm(Comprimento* comp){
    comp->cm = comp->dam * 1000;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fcm\n\033[m", comp->dam, comp->cm);
}
/*Funcao que converte centimetro para decametro*/
void cm_dam(Comprimento* comp){
    comp->dam = comp->cm / 1000;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fdam\n\033[m", comp->cm, comp->dam);
}
/*Funcao que converte decametro para milimetro*/
void dam_mm(Comprimento* comp){
    comp->mm = comp->dam * 10000;
    printf("\n\033[1;34m# %.2fdam correspondem a %.2fmm\n\033[m", comp->dam, comp->mm);
}
/*Funcao que converte milimetro para decametro*/
void mm_dam(Comprimento* comp){
    comp->dam = comp->mm / 10000;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fdam\n\033[m", comp->mm, comp->dam);
}
/*Funcao que converte metro para decimetro*/
void m_dm(Comprimento* comp){
    comp->dm = comp->m * 10;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fdm\n\033[m", comp->m, comp->dm);
}
/*Funcao que converte decimetro para metro*/
void dm_m(Comprimento* comp){
    comp->m = comp->dm / 10;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fm\n\033[m", comp->dm, comp->m);
}
/*Funcao que converte metro para centimetro*/
void m_cm(Comprimento* comp){
    comp->cm = comp->m * 100;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fcm\n\033[m", comp->m, comp->cm);
}
/*Funcao que converte centimetro para metro*/
void cm_m(Comprimento* comp){
    comp->m = comp->cm / 100;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fm\n\033[m", comp->cm, comp->m);
}
/*Funcao que converte metro para milimetro*/
void m_mm(Comprimento* comp){
    comp->mm = comp->m * 1000;
    printf("\n\033[1;34m# %.2fm correspondem a %.2fmm\n\033[m", comp->m, comp->mm);
}
/*Funcao que converte milimetro para metro*/
void mm_m(Comprimento* comp){
    comp->m = comp->mm / 1000;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fm\n\033[m", comp->mm, comp->m);
}
/*Funcao que converte decimetro para centimetro*/
void dm_cm(Comprimento* comp){
    comp->cm = comp->dm * 10;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fcm\n\033[m", comp->dm, comp->cm);
}
/*Funcao que converte centimetro para decimetro*/
void cm_dm(Comprimento* comp){
    comp->dm = comp->cm / 10;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fdm\n\033[m", comp->cm, comp->dm);
}
/*Funcao que converte decimetro para milimetro*/
void dm_mm(Comprimento* comp){
    comp->mm = comp->dm * 100;
    printf("\n\033[1;34m# %.2fdm correspondem a %.2fmm\n\033[m", comp->dm, comp->mm);
}
/*Funcao que converte milimetro para decimetro*/
void mm_dm(Comprimento* comp){
    comp->dm = comp->mm / 100;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fdm\n\033[m", comp->mm, comp->dm);
}
/*Funcao que converte centimetro para milimetro*/
void cm_mm(Comprimento* comp){
    comp->mm = comp->cm * 10;
    printf("\n\033[1;34m# %.2fcm correspondem a %.2fmm\n\033[m", comp->cm, comp->mm);
}
/*Funcao que converte milimetro para centimetro*/
void mm_cm(Comprimento* comp){
    comp->cm = comp->mm / 10;
    printf("\n\033[1;34m# %.2fmm correspondem a %.2fcm\n\033[m", comp->mm, comp->cm);
}