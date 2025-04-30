using System;

class Database
{
    public string Server { get; set; }
    public string DatabaseName { get; set; }

    // Default constructor
    public Database()
    {
        Server = "defaultServer";
        DatabaseName = "studentDB";
    }

    // Overloaded constructor with optional parameters
    public Database(string server = "defaultServer", string dbName = "studentDB")
    {
        Server = server;
        DatabaseName = dbName;
    }
}

class Program
{
    static void Main()
    {
        // Using default constructor
        Database db1 = new Database();
        Console.WriteLine("DB1 - Server: " + db1.Server + ", Name: " + db1.DatabaseName);

        // Using parameterized constructor
        Database db2 = new Database("192.168.1.1", "SalesDB");
        Console.WriteLine("DB2 - Server: " + db2.Server + ", Name: " + db2.DatabaseName);
    }
}
