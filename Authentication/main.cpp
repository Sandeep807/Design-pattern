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
    
    
    return 0;

}