//First C script
#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {

    if(argc < 2) {
        printf("Modo de usar: ./script 192.168.1.0 \n");
    } else {
        int mySocket;
        int connection;

        struct sockaddr_in target;

        for (int i = 0; i < 65535; i++) {
            mySocket = socket(AF_INET, SOCK_STREAM, 0);
            target.sin_family = AF_INET;
            target.sin_addr.s_addr = inet_addr(argv[1]);
            target.sin_port = htons(i);
            connection = connect(mySocket, (struct sockaddr *)&target, sizeof target);

            if(connection == 0) {
                printf("Porta %i Aberta \n", i);
                close(mySocket);
                close(connection);
            } else {
                close(mySocket);
                close(connection);
            }
        }
    }
   
}