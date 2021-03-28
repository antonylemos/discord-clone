#ifndef SERVIDOR_HPP
#define SERVIDOR_HPP
#include <string>
#include <vector>

using namespace std;

class Servidor {
  private:
    int usuarioDonoId;
    string nome;
    string descricao;
    string codigoConvite;
    vector <int> participantesIds;

  public:
    Servidor();
    Servidor(int usuarioDonoId, string nome);
    ~Servidor();

    int getUsuarioDonoId() const;
    void setUsuarioDonoId(int const usuarioDonoId);

    string getNome() const;
    void setNome(string const nome);

    string getDescricao() const;
    void setDescricao(string const descricao);

    string getCodigoConvite() const;
    void setCodigoConvite(string const codigoConvite);

    bool pushParticipante(int const participanteId);
};

#endif
