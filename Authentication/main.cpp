#include "authent.h"

int main()
{
    UsernamePasswordAuthenticate upa;
    Authenticator auth(&upa);
    bool isAuthenticated = auth.login("Admin123","Admin@123");

    if (isAuthenticated)
    {
        cout<<"Authenticate successfullly"<<endl;
    }
    else
    {
        cout<<"Authenticate failed please try again"<<endl;
        
    }

    BiometricAuthenticate ba;
    Authenticator auth2(&ba);
    bool isAuthenticated2 = auth2.login("Admin123","Admin@123");

    if (isAuthenticated2)
    {
        cout<<"User authenticate successfullly using biometric"<<endl;
    }
    else
    {
        cout<<"Biometric authenticate failed please try again"<<endl;
        
    }
    
    
    return 0;

}