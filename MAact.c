#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("Please pick you favorite order");
    printf("\n[1]Siomai (P25) \n[2]Hotdog w/ cheese (P40) \n[3]Sundae (P70) \nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 25;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Siomai Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("Apparently you do not have enough money");
}
    break;
    
    case 2:
    price = 40;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your Hotdog w? cheese Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 
    printf("Apparently you do not have enough money");
}
     break;
   
    
     case 3:
    price = 70;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Sundae Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("Apparently you do not have enough money");
}
  break;
   default:
   printf("The item that you wanted does not exist");
}
return 0;
}
