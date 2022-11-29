#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define NONE "\033[0m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"

struct Scarro {
  char marca[15];
  char placa[10];
  char cor[15];
};

void flush_in();
void menuprinc();
void menurelat();
void limpatela();
void imprimir(struct Scarro cadastro[], int t);
void timer();