#include "client.hpp"
#include "account.hpp"
#include <vector>

int main()
{
    //lista de clientes
    vector<Client> clientList;
    clientList.push_back(Client("Antonio Carlos", "Rua X", "Professor", 200000));

    clientList.push_back(Client("Xica da Silva", "Rua Y", "Vendedor", 1600));

    clientList.push_back(Client("Joao Ricardo Pereira", "Rua W", "Encanador", 4000));

    clientList.push_back(Client("Marcelo Silveira", "Rua M", "Mecanico", 6000));

    clientList.push_back(Client("Mauricio Oliveira", "Rua Z", "Farmaceutico", 8000));

    //lista de contas e suas associacoes com os clientes
    ContaCorrente c1(&clientList.at(0), 1000);
    ContaCorrente c2(&clientList.at(4));
    //ContaEspecial c3(&clientList.at(0), 0, 30000);
    //ContaEspecial c4(&clientList.at(3), 1000);

    //vector<ContaCorrente*> accountList;


    return 0;
}


