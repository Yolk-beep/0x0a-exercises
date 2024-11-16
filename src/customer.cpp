#include "customer.h"
#include <string>
#include <iostream>
#include <vector>
#include "batch.h"

Customer::Customer(std::string navn)
{
    name_ = navn;
}
void Customer::addBatch(Batch *batch)
{
    batches.push_back(batch);
}
int Customer::totalNoOfLeds()
{
    int sum = 0;
    for (size_t i = 0; i < batches.size(); i++)
    {
        sum+=batches[i]->noOfLeds();
    }
    return sum;
}