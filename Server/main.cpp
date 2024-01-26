/********************* COPYRIGHT SSS 2023-2024 ****************************
 ** MODULE  :  main.cpp
 **
 ** PURPOSE :  main file to control the console
 **
 ** PROJECT :  Internship Programme
 **
 ** HISTORY :  25.12.2023 - Initial Version
 **
 ** VERSION :  1.0 
 **
 ** AUTHOR  :  Ruchi
 *************************************************************************/

#include "Server.h"

int main() 
{
	/*
	 * Create an instance of the CTcpServer class, specifying the port number (12345)
	 */
    CTcpServer tcpServer(12345);

	/*
	 * Start listening for incoming client connections
	 */
    tcpServer.StartListening();

    system("pause");
    return 0;
}
