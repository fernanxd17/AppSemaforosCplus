#include<bits/stdc++.h>
#include <string>

using namespace std;

int main ()
{
	int option,sf;
	//Variables int para manejar los estados de los semaforos
	int sf1 = 1; //Verde
	int sf2 = 0; //Rojo
	int sf3 = 0; //Rojo

	printf("\t\t\t\t\tBIENVENIDO A TU APP!\n\n");
	
	while(true){
		
		printf("Seleccione en cual de los tres semaforos se encuentra: \n");
		
		if(sf1 == 1){
			printf("1. Semaforo 1, esta en: Verde\n");
		}else{
			printf("1. Semaforo 1, esta en: Rojo\n");
		}
		
		if(sf2 == 1){
			printf("2. Semaforo 2, esta en: Verde\n");
		}else{
			printf("2. Semaforo 2, esta en: Rojo\n");
		}
		
		if(sf3 == 1){
			printf("3. Semaforo 3, esta en: Verde\n");
		}else{
			printf("3. Semaforo 3, esta en: Rojo\n");
		}
		
		printf("0. Salir de la aplicacion: \n\n");
		
		printf("Digite una opcion del menu: ");
		cin>>option;
		
		if(option == 0){
			printf("\n\nHa salido de la aplicacion");
			break;
		}else if(option > 0 && option < 4 ){
			
			if(option == 1){
				printf("\nEl semaforo %d se encuentra en: verde(1) o rojo(0)?: ", option);
				cin >> sf;
				if(sf == 1){
					sf1= 1;
					sf2= 0;
					sf3= 0;
				}else{
					sf1= 0;
				}
				
				if(sf1 == 1){
					printf("\nPuedes avanzar.");
				}else{
					printf("\nDetente!!, no puedes avanzar por el semaforo %d.", option);
				}
				
			}else if(option == 2){
				
				printf("\nEl semaforo %d se encuentra en: verde(1) o rojo(0)?: ", option);
				cin >> sf;
				if(sf == 1){
					sf1= 0;
					sf2= 1;
					sf3= 0;
				}else{
					sf2= 0;
				}
				
				if(sf2 == 1){
					printf("\nPuedes avanzar.");
				}else{
					printf("\nDetente!!, no puedes avanzar por el semaforo %d.", option);
				}
			}else{
				printf("\nEl semaforo %d se encuentra en: verde(1) o rojo(0)?: ", option);
				cin >> sf;
				if(sf == 1){
					sf1= 0;
					sf2= 0;
					sf3= 1;
				}else{
					sf3= 0;
				}
				
				if(sf3 == 1){
					printf("\nPuedes avanzar.");
				}else{
					printf("\nDetente!!, no puedes avanzar por el semaforo %d.", option);
				}
			}
			
		}else{
			
			printf("\n%d, No es una opcion valida", option);
		}
		
		printf("\n\nContinuar o salir de la app? (S/N): ");
		char rsp;
		cin >> rsp;
		if(rsp == 'N'){
			printf("\n\nHa salido de la aplicacion");
			printf("\n\n");
			printf("****************************************************");
			printf("\n\n");
			break;
		}
		
		printf("\n\n");
		printf("****************************************************");
		printf("\n\n");
	
	}
		
	return 0;
  
}
