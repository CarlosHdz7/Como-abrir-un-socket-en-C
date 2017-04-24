#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h>

int  main(int argc, char const *argv[])
{
	int packet_socket;

	/*Parametros de la funcion socket
	1-La familia que vamos a trabajar
	2-el segundo es para trabajar en la capa de enlace de datos
	3-colocar los protocolos, en este caso todos*/
	packet_socket = socket(AF_PACKET,SOCK_RAW,htons(ETH_P_ALL));

	if(packet_socket==-1){
		perror("Error al abrir el socket");
		exit(1);
	}
	else{
		perror("Exito l abrir el socket");
	}
}