#include <stdio.h>#include <stdio.h>
int main(){
    
    int tam_matriz;
    int x,y, i;
    int before, actual, after;

    do
    {
        printf("\nDigite um valor impar que dimensiona o tamanho da matriz: ");
        scanf("%d", &tam_matriz);

    } while ((tam_matriz % 2) == 0);
    
    int matriz[tam_matriz][tam_matriz];

    for( i = 0; i < (tam_matriz*tam_matriz); i++){

        if(i == 1){
            matriz[0][(tam_matriz / 2)] = 1;
            
        }
        
        x = x - 1;
        y = y - 1;

        if(x < 0){
            x = tam_matriz + x;
        }
        if(y < 0){
            y = tam_matriz + y;
        }


        matriz[i-1  ][y-1]
        
    }


    for( x = tam_matriz; x < tam_matriz;){
        for( y = tam_matriz; y < tam_matriz;){

            while ()

            printf("%d", &tam_matriz[x][y]);
        }
    }
    
}
