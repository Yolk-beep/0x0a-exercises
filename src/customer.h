#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iostream>
#include "batch.h"

class Customer {
    private:
    std::string name_;
    std::vector<Batch*> batches;
    public:
    Customer(std::string navn);
    void addBatch(Batch* batch);
    int totalNoOfLeds();
};

#endif