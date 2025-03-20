using System;
using System.Collections.Generic;
public class ShoppingCart
{
    private string[] products = new string[10];
    private int count = 0;
    public string this[int index]
    {
        get
        {
            if (index >= 0 && index < count)
            {
                return products[index];
            }
            else
            {
                return null;
            }
        }
        set
        {
            if (index >= 0 && index < products.Length)
            {
                if (count < products.Length)
                {
                    products[index] = value;
                }
                count++;
            }

        }
    }
    public void AddProduct(string product)
    {
        if (count < products.Length)
        {
            products[count] = product;
            count++;
        }
        else {
            Console.WriteLine("Full")
}
