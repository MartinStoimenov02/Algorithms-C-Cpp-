#include<stdio.h>

int main(){
    int n, m, flag=0;   //n-broy redove, m - broy koloni, flag - flag za tova dali masiva e monotonen
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j==m-1 && i!=n-1){   //pravim proverka za posledniq element na vseki red (bez posledniq red)
                if(arr[i][j]>=arr[i+1][j]){ //proverqvame samo dali dolniq lement e po-maluk
                    printf("1) %d>=%d\n", arr[i][j], arr[i+1][j]);
                    flag=1; //vdigame flaga, che matricata ne e dvoyno monotonna
                    break;  //prekratqvame izpulnenieto na cikula pri purvoto sreshtnato nesuotvetstvie, za da ne gubim vreme
                }
            }
            else if(i==n-1 && j!=m-1){  //proverqvame elementite na posledniq red (bez posledniq element)
                if(arr[i][j]>=arr[i][j+1]){ //proverqvame samo dali sledvashtiqt element po red e po-maluk
                    printf("2) %d>=%d\n", arr[i][j], arr[i][j+1]);
                    flag=1; //vdigame flaga, che matricata ne e dvoyno monotonna
                    break;  //prekratqvame izpulnenieto na cikula pri purvoto sreshtnato nesuotvetstvie, za da ne gubim vreme
                }
            }
            else if(i==n-1 && j==m-1){  //proverqvame dali sme dostignali posledniq element, zashtoto sled nego nqma elementi, s koito da go sravnim
                printf("%d=>possleden element!\n", arr[i][j]);
                break;  //spirame izpulnenieto na cikula, ako sme stignali do posledniq element
            }
            else
            {
                if(arr[i][j]>=arr[i+1][j]){ //proverqvame dali dolniqt element e po-maluk ot tekushtiqt
                    printf("3) %d>=%d\n", arr[i][j], arr[i+1][j]);
                    flag=1; //vdigame flaga, che matricata ne e dvoyno monotonna
                    break;  //prekratqvame izpulnenieto na cikula pri purvoto sreshtnato nesuotvetstvie, za da ne gubim vreme
                }
                else if(arr[i][j]>=arr[i][j+1]){    //proverqvame dali sledvashtiqt po red element e po-maluk
                    printf("3) %d>=%d\n", arr[i][j], arr[i][j+1]);
                    flag=1; //vdigame flaga, che matricata ne e dvoyno monotonna
                    break;  //prekratqvame izpulnenieto na cikula pri purvoto sreshtnato nesuotvetstvie, za da ne gubim vreme
                }
            }
        }
        if(flag==1){break;}  //prekratqvame izpulnenieto na cikula pri purvoto sreshtnato nesuotvetstvie, za da ne gubim vreme
    }
    if(flag==0){    //ako flaga ne se e vdignal, znachi masiva e monotonen
        printf("tova e dvoyno monotonen masiv!");
    }
    else{   //ako se e vdignal, znachi masiva ne e monotonen
        printf("tova NE E dvoyno monotonen masiv!");
    }
}
