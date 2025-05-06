class Customer:
def set_name(self, name):
        self.name = name

   
    def show_customer(self):
        print("Customer Name:", self.name)


class OrderDetails:

    def set_product(self, product):
        self.product = product

   
        
    def show_order(self):
        print("Product Ordered:", self.product)


class OnlinePurchase(Customer, OrderDetails):
   
    def set_details(self, name, product):
        self.set_name(name)
        self.set_product(product)

   
    def show_purchase(self):
        self.show_customer()
        self.show_order()



