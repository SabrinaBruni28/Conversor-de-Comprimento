#include <stdio.h>
#include <stdlib.h>

/*TAD que guarda os tipos de comprimento.*/
typedef struct{
    float km;
    float hm;
    float dam;
    float m;
    float dm;
    float cm;
    float mm;
} Comprimento;

/*Funcao que adiciona o valor que deseja ser convertido.*/
void Adiciona_Valor(Comprimento* comp, int n, float valor);
/*Funcao que converte todos relacionados ao quilometro chamando a funcao de determinada conversao.*/
void Converte_km(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao hectometro chamando a funcao de determinada conversao.*/
void Converte_hm(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao decametro chamando a funcao de determinada conversao.*/
void Converte_dam(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao metro chamando a funcao de determinada conversao.*/
void Converte_m(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao decimetro chamando a funcao de determinada conversao.*/
void Converte_dm(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao centimetro chamando a funcao de determinada conversao.*/
void Converte_cm(Comprimento* comp, int n2);
/*Funcao que converte todos relacionados ao milimetro chamando a funcao de determinada conversao.*/
void Converte_mm(Comprimento* comp, int n2);
/*Funcao que faz a convercao dos valores chamando a funcao de determinada conversao.*/
void Converte_Valor(Comprimento* comp, int n1, int n2);
/*Funcao que converte quilometro para hectometro e printa o resultado*/
void km_hm(Comprimento* comp);
/*Funcao que converte hectometro para quilometro e printa o resultado*/
void hm_km(Comprimento* comp);
/*Funcao que converte quilometro para decametro e printa o resultado*/
void km_dam(Comprimento* comp);
/*Funcao que converte decametro para quilometro e printa o resultado*/
void dam_km(Comprimento* comp);
/*Funcao que converte quilometro para metro e printa o resultado*/
void km_m(Comprimento* comp);
/*Funcao que converte metro para quilometro e printa o resultado*/
void m_km(Comprimento* comp);
/*Funcao que converte quilometro para decimetro e printa o resultado*/
void km_dm(Comprimento* comp);
/*Funcao que converte decimetro para quilometro e printa o resultado*/
void dm_km(Comprimento* comp);
/*Funcao que converte quilometro para centimetro e printa o resultado*/
void km_cm(Comprimento* comp);
/*Funcao que converte centimetro para quilometro e printa o resultado*/
void cm_km(Comprimento* comp);
/*Funcao que converte quilometro para milimetro e printa o resultado*/
void km_mm(Comprimento* comp);
/*Funcao que converte milimetro para quilometro e printa o resultado*/
void mm_km(Comprimento* comp);
/*Funcao que converte hectometro para decametro e printa o resultado*/
void hm_dam(Comprimento* comp);
/*Funcao que converte decametro para hectometro e printa o resultado*/
void dam_hm(Comprimento* comp);
/*Funcao que converte hectometro para metro e printa o resultado*/
void hm_m(Comprimento* comp);
/*Funcao que converte metro para hectometro e printa o resultado*/
void m_hm(Comprimento* comp);
/*Funcao que converte hectometro para decimetro e printa o resultado*/
void hm_dm(Comprimento* comp);
/*Funcao que converte decimetro para hectometro e printa o resultado*/
void dm_hm(Comprimento* comp);
/*Funcao que converte hectometro para centimetro e printa o resultado*/
void hm_cm(Comprimento* comp);
/*Funcao que converte centimetro para hectometro e printa o resultado*/
void cm_hm(Comprimento* comp);
/*Funcao que converte hectometro para milimetro e printa o resultado*/
void hm_mm(Comprimento* comp);
/*Funcao que converte milimetro para hectometro e printa o resultado*/
void mm_hm(Comprimento* comp);
/*Funcao que converte decametro para metro e printa o resultado*/
void dam_m(Comprimento* comp);
/*Funcao que converte metro para decametro e printa o resultado*/
void m_dam(Comprimento* comp);
/*Funcao que converte decametro para decimetro e printa o resultado*/
void dam_dm(Comprimento* comp);
/*Funcao que converte decimetro para decametro e printa o resultado*/
void dm_dam(Comprimento* comp);
/*Funcao que converte decametro para centimetro e printa o resultado*/
void dam_cm(Comprimento* comp);
/*Funcao que converte centimetro para decametro e printa o resultado*/
void cm_dam(Comprimento* comp);
/*Funcao que converte decametro para milimetro e printa o resultado*/
void dam_mm(Comprimento* comp);
/*Funcao que converte milimetro para decametro e printa o resultado*/
void mm_dam(Comprimento* comp);
/*Funcao que converte metro para decimetro e printa o resultado*/
void m_dm(Comprimento* comp);
/*Funcao que converte decimetro para metro e printa o resultado*/
void dm_m(Comprimento* comp);
/*Funcao que converte metro para centimetro e printa o resultado*/
void m_cm(Comprimento* comp);
/*Funcao que converte centimetro para metro e printa o resultado*/
void cm_m(Comprimento* comp);
/*Funcao que converte metro para milimetro e printa o resultado*/
void m_mm(Comprimento* comp);
/*Funcao que converte milimetro para metro e printa o resultado*/
void mm_m(Comprimento* comp);
/*Funcao que converte decimetro para centimetro e printa o resultado*/
void dm_cm(Comprimento* comp);
/*Funcao que converte centimetro para decimetro e printa o resultado*/
void cm_dm(Comprimento* comp);
/*Funcao que converte decimetro para milimetro e printa o resultado*/
void dm_mm(Comprimento* comp);
/*Funcao que converte milimetro para decimetro e printa o resultado*/
void mm_dm(Comprimento* comp);
/*Funcao que converte centimetro para milimetro e printa o resultado*/
void cm_mm(Comprimento* comp);
/*Funcao que converte milimetro para centimetro e printa o resultado*/
void mm_cm(Comprimento* comp);