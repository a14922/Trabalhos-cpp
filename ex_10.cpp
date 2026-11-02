#include <iostream>

using namespace std;

int main() {

    /*
    FOR
    WHILE
    do.WHILE
        1. somar desde o nº 1 ao numero 10 (incluindo 1 e 10)
        2. subtraia desde o 11 ao 15 (incluindo o 11 e 15)
        3. multiplique / divida desde o 16 ao 20 (incluindo o 16 e 20)
            - se for par divide, se for impar multiplica

    */

    float resultado = 0;
    int i;
    for (i=1; i<=10; i++){
        resultado += i;
    }
    i=11;
    do {
        resultado -= i;
        i++;
    } while (i<=15);

    while (i<=20) {

        if (((i/2)*2)==i){
            resultado /=i;
        } else {
        resultado *=i;
        }

        i++;
    }

    cout << resultado;

    return 0;
}
