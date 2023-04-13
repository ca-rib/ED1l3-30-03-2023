#include <iostream>
#include <string> 
#include <locale.h>

using namespace std;

struct data {
	int dia;
	int mes;
	int ano;
};

class Contato {
    private:
        string email;
        string nome;
        string telefone;
        data dtnasc;
    public:
        void setEmail(string email) {
            this->email = email;
        }
        void setNome(string nome) {
            this->nome = nome;
        }
        void setTelefone(string telefone) {
            this->telefone = telefone;
        }
        void setDtnasc(data dtnasc) {
            this->dtnasc = dtnasc;
        }
        
        string getEmail() {
            return this->email;
        }
        string getNome() {
            return this->nome;
        }
        string getTelefone() {
            return this->telefone;
        }
        string getDtnasc() {
            string dataFormatada;
            dataFormatada += to_string(this->dtnasc.dia) + "/";
            dataFormatada += to_string(this->dtnasc.mes) + "/";
            dataFormatada += to_string(this->dtnasc.ano);
            
            return dataFormatada;
        }
        
        int idade () {
            return (2023 - this->dtnasc.ano);
        }
};

int main() {
	setlocale(LC_ALL, "");
	
    Contato arrContatos[5];
    int numClasses = 0;
    
    while(numClasses < 5) {
        string nome;
        string email;
        string telefone;
        string dia;
        string mes;
        string ano;
        struct data nascimento;#include <iostream>
#include <string> 
#include <locale.h>

using namespace std;

struct data {
	int dia;
	int mes;
	int ano;
};

class Contato {
    private:
        string email;
        string nome;
        string telefone;
        data dtnasc;
    public:
        void setEmail(string email) {
            this->email = email;
        }
        void setNome(string nome) {
            this->nome = nome;
        }
        void setTelefone(string telefone) {
            this->telefone = telefone;
        }
        void setDtnasc(data dtnasc) {
            this->dtnasc = dtnasc;
        }
        
        
        string getEmail() {
            return this->email;
        }
        string getNome() {
            return this->nome;
        }
        string getTelefone() {
            return this->telefone;
        }
        string getDtnasc() {
            string dataFormatada;
            dataFormatada += to_string(this->dtnasc.dia) + "/";
            dataFormatada += to_string(this->dtnasc.mes) + "/";
            dataFormatada += to_string(this->dtnasc.ano);
            
       cout << "Nome: " << arrContatos[0].getNome() << endl;
cout << "Email: " << arrContatos[0].getEmail() << endl;
cout << "Telefone: " << arrContatos[0].getTelefone() << endl;
cout << "Data de nascimento: " << arrContatos[0].getDtnasc() << endl;
     return dataFormatada;
        }
        
        int idade () {
            return (2023 - this->dtnasc.ano);
        }
};
cout << "Nome: " << arrContatos[0].getNome() << endl;
cout << "Email: " << arrContatos[0].getEmail() << endl;
cout << "Telefone: " << arrContatos[0].getTelefone() << endl;
cout << "Data de nascimento: " << arrContatos[0].getDtnasc() << endl;

int main() {
	setlocale(LC_ALL, "");
	
    cout << "Nome: " << arrContatos[0].getNome() << endl;
cout << "Email: " << arrContatos[0].getEmail() << endl;
cout << "Telefone: " << arrContatos[0].getTelefone() << endl;
cout << "Data de nascimento: " << arrContatos[0].getDtnasc() << endl;
Contato arrContatos[5];
    int numClasses = 0;
    
    while(numClasses < 5) {
        string nome;
        string email;
        string telefone;
        string dia;
        string mes;
        string ano;
        struct data nascimento;
        
        cout << "Digite o seu nome: ";
        getline(cin, nome);
        cout << "Digite o seu email: ";
        getline(cin, email);
        cout << "Digite o seu telefone: ";
        getline(cin, telefone);cout << "Nome: " << arrContatos[0].getNome() << endl;
cout << "Email: " << arrContatos[0].getEmail() << endl;
cout << "Telefone: " << arrContatos[0].getTelefone() << endl;
cout << "Data de nascimento: " << arrContatos[0].getDtnasc() << endl;

        cout << "Digite o seu dia de nascimento: ";
        getline(cin, dia);
        cout << "Digite o seu mês de nascimento: ";
        getline(cin, mes);
        cout << "Digite o seu ano de nascimento: ";
        getline(cin, ano);
        
        nascimento.dia = stoi(dia);
        nascimento.mes = stoi(mescout << "Nome: " << arrContatos[0].getNome() << endl;
cout << "Email: " << arrContatos[0].getEmail() << endl;
cout << "Telefone: " << arrContatos[0].getTelefone() << endl;
cout << "Data de nascimento: " << arrContatos[0].getDtnasc() << endl;
);
        nascimento.ano = stoi(ano);
        
        arrContatos[numClasses].setNome(nome);
        arrContatos[numClasses].setEmail(email);
        arrContatos[numClasses].setTelefone(telefone);
        arrContatos[numClasses].setDtnasc(nascimento);
        
        numClasses++;
    }
    
    cout << "Você criou " << to_string(numClasses) << (numClasses == 1 ? " contato" : " contatos") << endl;

    return 0;
}

        
        cout << "Digite o seu nome: ";
        getline(cin, nome);
        cout << "Digite o seu email: ";
        getline(cin, email);
        cout << "Digite o seu telefone: ";
        getline(cin, telefone);
        cout << "Digite o seu dia de nascimento: ";
        getline(cin, dia);
        cout << "Digite o seu mês de nascimento: ";
        getline(cin, mes);
        cout << "Digite o seu ano de nascimento: ";
        getline(cin, ano);
        
        nascimento.dia = stoi(dia);
        nascimento.mes = stoi(mes);
        nascimento.ano = stoi(ano);
        
        arrContatos[numClasses].setNome(nome);
        arrContatos[numClasses].setEmail(email);
        arrContatos[numClasses].setTelefone(telefone);
        arrContatos[numClasses].setDtnasc(nascimento);
        
        numClasses++;
        
		cout << "Nome: " << getNome() << endl;
		cout << "Email: " << getEmail() << endl;
		cout << "Telefone: " << getTelefone() << endl;
		cout << "Data de nascimento: " << getDtnasc() << endl;

}
    }

    return 0;
}
