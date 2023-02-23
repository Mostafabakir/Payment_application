#pragma warning(disable : 4996)
#include "card.h"
#include <stdio.h>
#include<string.h>


EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
	uint8_t i =0 ; 
	printf("Please enter Card holder name \n");
	gets(cardData->cardHolderName);
	i = strlen(cardData->cardHolderName);
	printf("%d \n", i);
	if (i < 20 || i>24)
	{
		return WRONG_NAME ;
	}
	else {
		return CARD_OK;
	}
}

EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData)
{
	uint8_t l = 0; 
	printf("Please enter the card  expiry date in format MM/YY \n");
	gets(cardData->cardExpirationDate);
	l = strlen(cardData->cardExpirationDate);
	if (l==5 || cardData->cardExpirationDate[2] == '/')
	{
		return CARD_OK;
	}
	else {
		return WRONG_EXP_DATE;
	}
}
