#include <stdio.h>

int main(){
system ("cls");
int a, i, j, k, l, m;
FILE * fpointer = fopen ("Tiny Library of Babel.txt", "w");

for(i=0;i<26;i++){
    for(j=0;j<26;j++){
        for(k=0;k<26;k++){
            for(l=0;l<26;l++){
                for(m=0;m<26;m++){
                    fprintf(fpointer, "%c%c%c%c%c, ", i+97, j+97, k+97, l+97, m+97);
                }
            }
        }
    }
}
fclose(fpointer);


return 0;
}