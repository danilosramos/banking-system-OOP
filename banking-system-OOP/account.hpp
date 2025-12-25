#ifndef ACCOUNTS_HPP
#define ACCOUNTS_HPP

#include "client.hpp"

class ContaCorrente
{
protected:
    Client *m_client;
    float m_balance;

public:
    //constructors and destructor
    ContaCorrente(Client *client, float balance=0) : m_client(client), m_balance(balance) {};

    //getters and setters
    void UpdateClient(Client *client) {
        m_client = client;
    }

    bool Deposit(float value);
    bool operator +=(float value) { return Deposit(value); };
    bool Withdraw(float value);
    bool operator -=(float value) { return Withdraw(value); };
    bool Transfer(ContaCorrente &account, float value);

    //transfer all
    bool operator >> (ContaCorrente &account);

};

/*class ContaEspecial : public ContaCorrente
{

};*/

#endif
