//Arquivo ponto.h
typedef struct ponto pts;

//Cria um novo ponto
pts* pto_cria(float x, float y);

//Libera ponto
void pto_libera(pts* p);

//Acessar os valores "x" e "y" de um ponto
void pto_acessa(pts*, float* x, float* y);

//Atribuir os valores "x" e "y" de um ponto
void pto_atribuir(pts*, float* x, float* y);

//Calcula a distancia entre dois pontos
float pto_distancia(pts* p1, pts* p2);
