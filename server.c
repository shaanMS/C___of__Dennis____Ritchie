#include <stdio.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main()
{
    WSADATA wsa;
    SOCKET server, client;
    struct sockaddr_in address;
    char message[100];

    // Winsock start
    WSAStartup(MAKEWORD(2, 2), &wsa);

    // Socket create
    server = socket(AF_INET, SOCK_STREAM, 0);

    // Server address
    address.sin_family = AF_INET;
    address.sin_port = htons(8080);
    address.sin_addr.s_addr = INADDR_ANY;

    // Bind
    bind(server, (struct sockaddr*)&address, sizeof(address));

    // Listen
    listen(server, 1);

    printf("Server waiting...\n");

    // Client accept
    client = accept(server, NULL, NULL);

    printf("Client connected!\n");

    // Receive message
    recv(client, message, sizeof(message) - 1, 0);

    printf("Client: %s\n", message);

    // Reply
    send(client, "Hello Client!", 13, 0);

    // Close
    closesocket(client);
    closesocket(server);
    WSACleanup();

    return 0;
}
