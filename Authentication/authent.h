#include <iostream>
using namespace std;

class AuthenticationStrategy
{
public:
    virtual bool authenticate(const string &username, const string &password) = 0;
    virtual ~AuthenticationStrategy() {}
};

class UsernamePasswordAuthenticate : public AuthenticationStrategy
{
public:
    bool authenticate(const string &username, const string &password);
};

class BiometricAuthenticate : public AuthenticationStrategy
{
public:
    bool authenticate(const string &username, const string &password);
};

class Authenticator
{
    private:
        AuthenticationStrategy* auth;
    public:
        Authenticator(AuthenticationStrategy*);
        bool login(const string &username, const string &password);
};