#include<stdio.h>

int main(){
    int n, arr[n], app[n];
    int i, j=0;

    printf("Enter the number of employees\n");
    scanf("%d", &n);

    printf("Enter the credits of each of them in the same order\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    app[0] = 10000;
    while(j != n){
        for(j=1;j>=n;j++){
            if(arr[j]>arr[j-1]){
                app[j] = app[j-1] + 10000;
            }
            else{
                app[j] = 10000;
            }
        }
        j++;
    }

return 0;
}