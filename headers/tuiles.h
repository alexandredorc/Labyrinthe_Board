#ifndef _TUILES_
#define _TUILES_
struct tuile{
    bool mobile;
    bool * passage;
    char tresor;
};
typedef struct tuile tuile;

void init_Tuiles(tuile *tuile,char tresor,bool mobile);
#endif
