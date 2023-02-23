#include <stdio.h>
#include "card.h"

void getCardHolderNameTest(void)
{
    ST_cardData_t card1 ;
    printf("Tester name: Mostafa Bakir \n");
    printf("Function name: getCardHolderName \n");
    printf("*****Test case 1 ******* \n");
    printf("input data: Mostafa Mohamed Bakir \n");
    printf("expected result: CARD_OK \n");
    if (getCardHolderName(&card1) == CARD_OK)
    {
        printf("Actual result: CARD_OK \n");
    }
    else {
        printf("ERROR ");
    }

}

void getCardExpiryDateTest(void) {
    ST_cardData_t card1;
    printf("Tester name: Mostafa Bakir \n");
    printf("Function name: getCardHolderName \n");
    printf("*****Test case 1 ******* \n");
    printf("input data:05/20 \n");
    printf("expected result: CARD_OK \n");
    if (getCardExpiryDate(&card1) == CARD_OK)
    {
        printf("Actual result: CARD_OK \n");
    }
    else {
        printf("ERROR ");
    }
}

int main()
{
    
    getCardExpiryDateTest();
}


