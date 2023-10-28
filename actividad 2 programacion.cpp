#include <iostream>
using namespace std;
int main() {
  int est= 35;
  int nota, cont_perfet =0, cont_repro;
  int sum_notas= 0;
  float prom;

    for (int i = 1; i <= est; i++){
      cout <<"ingrese la nota del estudiante " << i << ": ";
      cin >> nota;

      sum_notas += nota;

      if (nota == 100) {
        cont_perfet++;
      }

      if (nota < 60) {
        cont_repro++;
      }
    }
  prom = sum_notas /static_cast<float>(est);

  cout << "el promedio de notas de la seccion es: " <<prom << endl;
  cout << "numero de estudiantes con calificacion perfecta: " <<cont_perfet << endl;
  cout << "numero de estudiantes reprobados: " <<cont_repro << endl;

      return 0;
}
