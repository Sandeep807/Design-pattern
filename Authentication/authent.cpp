#include "authent.h"

bool UsernamePasswordAuthenticate ::authenticate(const string& username,const string& password)
{
    if (username == "Admin123" && password == "Admin@123")
    {
        return true;
    }
    return false;
    
}

bool BiometricAuthenticate ::authenticate(const string& username,const string& password)
{
    return true;
}

Authenticator ::Authenticator(AuthenticationStrategy* auth):auth(auth){}

bool Authenticator ::login(const string& username,const string& password)
{
    return auth->authenticate(username,password);
}