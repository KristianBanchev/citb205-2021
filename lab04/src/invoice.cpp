#include "invoice.h"

void Invoice::add(Product product, int qty) {
    Item item(product, qty);
  items.push_back(item);
}

double Invoice::subtotal() {
  double sum = 0;
  for (auto item : items){
      sum += item.total();
  }
  return sum;
}