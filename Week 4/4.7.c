#include <stdio.h>
#include <stdbool.h>

#define N 100
#define ISBN_SIZE 15
#define TITLE_SIZE 100
#define PRICE_SIZE 15



// int LINE_SIZE = QUANTITY_SIZE + ISBN_SIZE + TITLE_SIZE + PRICE_SIZE + TOTAL_SIZE;

struct BKBook {
    int quantity;
    int buyQuantity;
    char isbn[15];
    char title[100];
    float price;
    bool buy;
    bool info;
} BKBook[N];

void BKBookInit(){
    for (int i = 0; i < N ; i++){
        BKBook[i].buy = false;
        BKBook[i].info = false;
        BKBook[i].quantity = 0;
        BKBook[i].buyQuantity = 0;
    }
}

//note luu max duoc N sach
void BKBookInfoInput (){
    int n;
    printf("The number of book you want to add info (100 max) ?");
    scanf("%d",&n);

    for (int i = 0 ; i < n ; i++){
        BKBook[i].info = true;
        printf("Input for BKBook (%d)\n\n",i+1);
        printf("Enter ISBN: ");
        scanf("%15s", BKBook[i].isbn);
        printf("Enter Title: ");
        scanf(" %[^\n]s", BKBook[i].title); // Use %[^\n] to allow input with spaces
        printf("Enter Price: ");
        scanf("%f", &BKBook[i].price);
        printf("Enter Quantity: ");
        scanf("%d", &BKBook[i].quantity);
    }
}

void BKBookList(){
    for (int i = 0; i<N ; i++){
        if (BKBook[i].info == true) printf("%5d%15s%50s%15d\n",  i+1,  BKBook[i].isbn,   BKBook[i].title,   BKBook[i].price);   
         }
}

void BKBookBuy(){
    int BookNumberBuy,Number,buyQuantity;
    BKBookList();
    printf("The number of books that you want to buy ? \n");
    scanf("%d",&BookNumberBuy);
    Number = 0;
    for (int i = 0; i < BookNumberBuy; i++){
        printf("The book's number is ? ");
        scanf("%d",Number);
        printf("Quantity ?");
        scanf("%d",buyQuantity);
        if (buyQuantity  >  BKBook[Number-1].quantity) printf("Not enough %s for you to purchase.",BKBook[Number-1].title);
        else BKBook[Number-1].buy = true;
    }
    
}

void BKBookNumber(){
    int number = 0;
    for (int i =0; i < N ; i++){
        if (BKBook[i].info == true) number ++;
    }
    printf("Number of books in BKBook is %d.\n",number);
}

void BKBookBill(){

    
    float vat = 0.04; 
    float total, total_with_vat;
    // Calculate the total amount and total amount with VAT
    total = price * quantity;
    total_with_vat = total + (total * vat);


    printf("BK Bookseller\n\n");
    printf("Qty ISBN Title Price Total\n");




    for (int i = 0; i < N ; i++){
        printf('_');
    }

    printf("%5d %15s %100s %.2lf %.2lf\n",    BKBook[i].quantity,    BKBook[i].isbn,   BKBook[i].price,   total??);

    printf("VAT %.2f\n", total * vat);
    printf("You pay %.2f\n", total_with_vat);

}

}
int main() {
    BKBookInit();
    BKBookInfoInput ();
    BKBookList();
    BKBookBuy();
    BKBookBill();
    
 
    return 0;
}
