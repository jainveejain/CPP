#include"product.h"

product :: product(int id,string ttl,string desc,int lk,double price,int qnty)
{
this-> pid = id;
this->title = ttl;
this->pDescription = desc;
this->likes =lk;
this->unitPrice = price;
this->quantity = qnty;
}
