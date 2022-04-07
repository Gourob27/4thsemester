#include <bits/stdc++.h>
using namespace std;
int main()
{
    double tweight = 0,tprofit=0, profit = 0, weight = 0, ratio = 0;
    int nobj = 0;
    cout << "Enetr the wieght of knapsack : ";
    cin >> tweight;
    cout << "ENter the number of objects : ";
    cin >> nobj;
    vector<double> input[100];
    for (int i = 0; i < nobj; i++)
    {
        cout << "Enter the profit of Obj " << i + 1 << " : ";
        cin >> profit;
        cout << "Enter the weight of Obj " << i + 1 << " : ";
        cin >> weight;
        ratio = profit / weight;
        input[i].push_back(profit);
        input[i].push_back(weight);
        input[i].push_back(ratio);
    }

    for (int i = 0; i < nobj - 1; i++)
    {
        for (int j = 0; j < nobj - i - 1; j++)
        {
            if (input[j][2] < input[j + 1][2])
            {
                vector<double> temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < nobj; i++)
    {
        if(tweight==0){
            break;
        }
        else if (tweight>=input[i][1])
        {
            tweight=tweight-input[i][1];
            tprofit=tprofit+input[i][0];
        }
        else if(tweight<input[i][1]){
            tprofit=tprofit+(tweight*(input[i][0]/input[i][1]));
            tweight=0;
        }

    }
    cout <<"The maximum profit is : "<< tprofit;
}
