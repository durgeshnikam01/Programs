import tkinter as tk
from tkinter import messagebox
import sqlite3

class SalesManagementSystem:
    def __init__(self, root):
        self.root = root
        self.root.title("Sales Management System")
        self.root.geometry("800x600")
        
        # Variables for storing input data
        self.product_name = tk.StringVar()
        self.product_id = tk.StringVar()
        self.quantity_sold = tk.StringVar()
        self.quantity_left = tk.StringVar()
        self.price = tk.StringVar()
        
        # Create labels
        tk.Label(root, text="Product Name:").grid(row=0, column=0, padx=10, pady=5)
        tk.Label(root, text="Product ID:").grid(row=1, column=0, padx=10, pady=5)
        tk.Label(root, text="Quantity Sold:").grid(row=2, column=0, padx=10, pady=5)
        tk.Label(root, text="Quantity Left:").grid(row=3, column=0, padx=10, pady=5)
        tk.Label(root, text="Price:").grid(row=4, column=0, padx=10, pady=5)
        
        # Create entry fields
        tk.Entry(root, textvariable=self.product_name).grid(row=0, column=1, padx=10, pady=5)
        tk.Entry(root, textvariable=self.product_id).grid(row=1, column=1, padx=10, pady=5)
        tk.Entry(root, textvariable=self.quantity_sold).grid(row=2, column=1, padx=10, pady=5)
        tk.Entry(root, textvariable=self.quantity_left).grid(row=3, column=1, padx=10, pady=5)
        tk.Entry(root, textvariable=self.price).grid(row=4, column=1, padx=10, pady=5)
        
        # Create buttons
        tk.Button(root, text="Add Product", command=self.add_product).grid(row=5, column=0, columnspan=2, pady=10)
        tk.Button(root, text="Update Product", command=self.update_product).grid(row=6, column=0, columnspan=2, pady=10)
        tk.Button(root, text="Delete Product", command=self.delete_product).grid(row=7, column=0, columnspan=2, pady=10)
        tk.Button(root, text="Refresh", command=self.refresh_display).grid(row=8, column=0, columnspan=2, pady=10)
        
        # Create a listbox to display products
        self.product_listbox = tk.Listbox(root, width=100)
        self.product_listbox.grid(row=9, column=0, columnspan=2, padx=10, pady=10)
        
        # Initialize database connection
        self.conn = sqlite3.connect('sales_database.db')
        self.c = self.conn.cursor()
        
        # Create products table if not exists
        self.create_table()
        
        # Display existing products
        self.refresh_display()
    
    def create_table(self):
        self.c.execute('''CREATE TABLE IF NOT EXISTS products (
                        id INTEGER PRIMARY KEY,
                        product_name TEXT NOT NULL,
                        quantity_sold INTEGER NOT NULL,
                        quantity_left INTEGER NOT NULL,
                        price REAL NOT NULL)''')
        self.conn.commit()
    
    def add_product(self):
        product_name = self.product_name.get()
        product_id = self.product_id.get()
        quantity_sold = int(self.quantity_sold.get())
        quantity_left = int(self.quantity_left.get())
        price = float(self.price.get())
        
        self.c.execute('''INSERT INTO products (id, product_name, quantity_sold, quantity_left, price)
                        VALUES (?, ?, ?, ?, ?)''', (product_id, product_name, quantity_sold, quantity_left, price))
        self.conn.commit()
        
        self.refresh_display()
        self.clear_entries()
        messagebox.showinfo("Success", "Product added successfully!")
    
    def update_product(self):
        product_name = self.product_name.get()
        product_id = self.product_id.get()
        quantity_sold = int(self.quantity_sold.get())
        quantity_left = int(self.quantity_left.get())
        price = float(self.price.get())
        
        self.c.execute('''UPDATE products SET product_name=?, quantity_sold=?, quantity_left=?, price=?
                        WHERE id=?''', (product_name, quantity_sold, quantity_left, price, product_id))
        self.conn.commit()
        
        self.refresh_display()
        self.clear_entries()
        messagebox.showinfo("Success", "Product updated successfully!")
    
    def delete_product(self):
        product_id = self.product_id.get()
        
        self.c.execute('''DELETE FROM products WHERE id=?''', (product_id,))
        self.conn.commit()
        
        self.refresh_display()
        self.clear_entries()
        messagebox.showinfo("Success", "Product deleted successfully!")
    
    def refresh_display(self):
        self.product_listbox.delete(0, tk.END)
        
        self.c.execute('''SELECT * FROM products''')
        products = self.c.fetchall()
        
        for product in products:
            self.product_listbox.insert(tk.END, f"ID: {product[0]}, Name: {product[1]}, Quantity Sold: {product[2]}, Quantity Left: {product[3]}, Price: {product[4]}")
    
    def clear_entries(self):
        self.product_name.set('')
        self.product_id.set('')
        self.quantity_sold.set('')
        self.quantity_left.set('')
        self.price.set('')
    
    def __del__(self):
        self.conn.close()

if __name__ == "__main__":
    root = tk.Tk()
    app = SalesManagementSystem(root)
    root.mainloop()
