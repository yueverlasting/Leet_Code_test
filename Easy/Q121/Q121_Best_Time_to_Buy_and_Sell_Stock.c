int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int max_profit = 0;
   
    for(int i=0; i<pricesSize; i++){
        if(min < prices[i]){                /* while next still bigger that min. */
            if(max_profit<prices[i]-min){   /* if profit bigger, update max profit. */
                max_profit = prices[i]-min;
            }
        }else{                              /* while next still bigger that min. */
            min = prices[i];
        }
    }

    return max_profit;
}