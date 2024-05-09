#include <iostream>

using namespace std;

class Avaliacao {
protected:
  string nome;
  string curso;

public:
  Avaliacao(string nome, string curso) {
    this->nome = nome;
    this->curso = curso;
  }

  virtual ~Avaliacao() {}
};

class Disciplina : public Avaliacao {
protected:
  float nota;

public:
  Disciplina(string nome, string curso, float nota) : Avaliacao(nome, curso) {
    this->nota = nota;
  }

  ~Disciplina() {}

  void mostrarDados() {
    cout << "Nome: " << nome << endl;
    cout << "Curso: " << curso << endl;
    cout << "Nota: " << nota << endl;
  }
};

int main() {
  Disciplina d("samanta bordallo", "Biologia", 18.5);
  d.mostrarDados();

  return 0;
}
