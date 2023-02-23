#include "comprimento.h"

/*Funcao que converte quilometro para hectometro*/
void km_hm(Comprimento* comp){
    comp->hm = comp->km * 10;
}
/*Funcao que converte hectometro para quilometro*/
void hm_km(Comprimento* comp){
    comp->km = comp->hm / 10;
}
/*Funcao que converte quilometro para decametro*/
void km_dam(Comprimento* comp){
    comp->dam = comp->km * 100;
}
/*Funcao que converte decametro para quilometro*/
void dam_km(Comprimento* comp){
    comp->km = comp->dam / 100;
}
/*Funcao que converte quilometro para metro*/
void km_m(Comprimento* comp){
    comp->m = comp->km * 1000;
}
/*Funcao que converte metro para quilometro*/
void m_km(Comprimento* comp){
    comp->km = comp->m / 1000;
}
/*Funcao que converte quilometro para decimetro*/
void km_dm(Comprimento* comp){
    comp->dm = comp->km * 10000;
}
/*Funcao que converte decimetro para quilometro*/
void dm_km(Comprimento* comp){
    comp->km = comp->dm / 10000;
}
/*Funcao que converte quilometro para centimetro*/
void km_cm(Comprimento* comp){
    comp->cm = comp->km * 100000;
}
/*Funcao que converte centimetro para quilometro*/
void cm_km(Comprimento* comp){
    comp->km = comp->cm / 100000;
}
/*Funcao que converte quilometro para milimetro*/
void km_mm(Comprimento* comp){
    comp->mm = comp->km * 1000000;
}
/*Funcao que converte milimetro para quilometro*/
void mm_km(Comprimento* comp){
    comp->km = comp->mm / 1000000;
}
/*Funcao que converte hectometro para decametro*/
void hm_dam(Comprimento* comp){
    comp->dam = comp->hm * 10;
}
/*Funcao que converte decametro para hectometro*/
void dam_hm(Comprimento* comp){
    comp->hm = comp->dam / 10;
}
/*Funcao que converte hectometro para metro*/
void hm_m(Comprimento* comp){
    comp->m = comp->hm * 100;
}
/*Funcao que converte metro para hectometro*/
void m_hm(Comprimento* comp){
    comp->hm = comp->m / 100;
}
/*Funcao que converte hectometro para decimetro*/
void hm_dm(Comprimento* comp){
    comp->dm = comp->hm * 1000;
}
/*Funcao que converte decimetro para hectometro*/
void dm_hm(Comprimento* comp){
    comp->hm = comp->dm / 1000;
}
/*Funcao que converte hectometro para centimetro*/
void hm_cm(Comprimento* comp){
    comp->cm = comp->hm * 10000;
}
/*Funcao que converte centimetro para hectometro*/
void cm_hm(Comprimento* comp){
    comp->hm = comp->cm / 10000;
}
/*Funcao que converte hectometro para milimetro*/
void hm_mm(Comprimento* comp){
    comp->mm = comp->hm * 100000;
}
/*Funcao que converte milimetro para hectometro*/
void mm_hm(Comprimento* comp){
    comp->hm = comp->mm / 100000;
}
/*Funcao que converte decametro para metro*/
void dam_m(Comprimento* comp){
    comp->m = comp->dam * 10;
}
/*Funcao que converte metro para decametro*/
void m_dam(Comprimento* comp){
    comp->dam = comp->m / 10;
}
/*Funcao que converte decametro para decimetro*/
void dam_dm(Comprimento* comp){
    comp->dm = comp->dam * 100;
}
/*Funcao que converte decimetro para decametro*/
void dm_dam(Comprimento* comp){
    comp->dam = comp->dm / 100;
}
/*Funcao que converte decametro para centimetro*/
void dam_cm(Comprimento* comp){
    comp->cm = comp->dam * 1000;
}
/*Funcao que converte centimetro para decametro*/
void cm_dam(Comprimento* comp){
    comp->dam = comp->cm / 1000;
}
/*Funcao que converte decametro para milimetro*/
void dam_mm(Comprimento* comp){
    comp->mm = comp->dam * 10000;
}
/*Funcao que converte milimetro para decametro*/
void mm_dam(Comprimento* comp){
    comp->dam = comp->mm / 10000;
}
/*Funcao que converte metro para decimetro*/
void m_dm(Comprimento* comp){
    comp->dm = comp->m * 10;
}
/*Funcao que converte decimetro para metro*/
void dm_m(Comprimento* comp){
    comp->m = comp->dm / 10;
}
/*Funcao que converte metro para centimetro*/
void m_cm(Comprimento* comp){
    comp->cm = comp->m * 100;
}
/*Funcao que converte centimetro para metro*/
void cm_m(Comprimento* comp){
    comp->m = comp->cm / 100;
}
/*Funcao que converte metro para milimetro*/
void m_mm(Comprimento* comp){
    comp->mm = comp->m * 1000;
}
/*Funcao que converte milimetro para metro*/
void mm_m(Comprimento* comp){
    comp->m = comp->mm / 1000;
}
/*Funcao que converte decimetro para centimetro*/
void dm_cm(Comprimento* comp){
    comp->cm = comp->dm * 10;
}
/*Funcao que converte centimetro para decimetro*/
void cm_dm(Comprimento* comp){
    comp->dm = comp->cm / 10;
}
/*Funcao que converte decimetro para milimetro*/
void dm_mm(Comprimento* comp){
    comp->mm = comp->dm * 100;
}
/*Funcao que converte milimetro para decimetro*/
void mm_dm(Comprimento* comp){
    comp->dm = comp->mm / 100;
}
/*Funcao que converte centimetro para milimetro*/
void cm_mm(Comprimento* comp){
    comp->mm = comp->cm * 10;
}
/*Funcao que converte milimetro para centimetro*/
void mm_cm(Comprimento* comp){
    comp->cm = comp->mm / 10;
}