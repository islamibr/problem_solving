#include <cs50.h>
#include <stdio.h>

// call and wait
bool check_validity(long long credit_Card_Num);
void print_credit_card_brand(long long ccn);
int find_length(long long n);
bool checkSum(long long ccn);

int main(void)
{
    long long credit_Card_Num;
    int count_tot = 0;
    do
    {
        credit_Card_Num = get_long_long("number: ");
    }
    while (credit_Card_Num < 0); // repeat until getting positive

    // main function
    if (check_validity(credit_Card_Num) == true)
    {
        print_credit_card_brand(credit_Card_Num);
    }
    else
    {
        printf("INVALID\n");
    }

}

// validity
bool check_validity(long long credit_Card_Num)
{
    int len = find_length(credit_Card_Num);
    return (len == 15 || len == 16 || len == 13) && checkSum(credit_Card_Num);
}

// length calc
int find_length(long long n)
{
    int len;
    for (len = 0; n != 0; n /= 10)
    {
        len++;
    }
    return len;
}

// Luhn’s Algorithm
bool checkSum(long long ccn)
{
    int sum = 0;
    for (int i = 0; ccn != 0; i++)
    {
        if (i % 2 == 0) // for first items
        {
            sum += ccn % 10;
        }
        else
        {
            int digit = 2 * (ccn % 10);
            sum += digit / 10 + digit % 10;
        }
        ccn /= 10;
    }
    return (sum % 10) == 0;
}

// card type
void print_credit_card_brand(long long ccn)
{
    // amex
    if ((ccn >= 34e13 && ccn < 35e13) || (ccn >= 37e13 && ccn < 38e13))
    {
        printf("AMEX\n");
    }
    // master
    else if (ccn >= 51e14 && ccn < 56e14)
    {
        printf("MASTERCARD\n");
    }
    // visa
    else if ((ccn >= 4e12 && ccn < 5e12) || (ccn >= 4e15 && ccn < 5e15))
    {
        printf("VISA\n");
    }
    // last choose
    else
    {
        printf("INVALID\n");
    }
}
