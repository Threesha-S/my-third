#include <stdio.h>

int main()
{
  int n,i,price,highestprice=0,highpricedays=0;
  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    scanf("%d",&price);
    if(price > highestprice){
      highestprice = price;
    }
    if(price > 100){
      highpricedays++;
    }
  }
  printf("Highest price: %d\n",highestprice);
  printf("High price days: %d",highpricedays);


  return 0;
}