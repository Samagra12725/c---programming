#include <iostream>
#include <vector>
using namespace std;

// Program to calculate maximum loss
int MaximumLoss(vector<int> price)
{
    int worst_buy = price[0];
    int max_loss = 0;
    for (int i = 1; i <= price.size(); i++)
    {
        if (price[i] > max_loss)
        {
            max_loss = min(max_loss, price[i] - worst_buy);
        }

        worst_buy = max(worst_buy, price[i]);
    }

    return max_loss;
}

// Program to calculate maximum profit

int MaximumProfit(vector<int> price)
{
    int best_buy = price[0];
    int max_profit = 0;
    for (int i = 1; i <= price.size(); i++)
    {
        if (price[i] > max_profit)
        {
            max_profit = max(max_profit, price[i] - best_buy);
        }

        best_buy = min(best_buy, price[i]);
    }

    return max_profit;
}

int main()
{
    vector<int> prices = {6,1,7,3,8,2,5};
    
    cout << "maximum profit = " << MaximumProfit(prices)<< endl;
    cout << "maximum loss = " << MaximumLoss(prices) << endl;
}