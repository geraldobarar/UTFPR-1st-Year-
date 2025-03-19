using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Library library = new Library();
        bool isRunning = true;

        Console.WriteLine("Welcome to the Library Management System!");

        while (isRunning)
        {
            Console.WriteLine("\nPlease choose an option:");
            Console.WriteLine("1. Add a book");
            Console.WriteLine("2. View available books");
            Console.WriteLine("3. Borrow a book");
            Console.WriteLine("4. Return a book");
            Console.WriteLine("5. Exit");
            Console.Write("Enter your choice: ");

            string choice = Console.ReadLine();

            switch (choice)
            {
                case "1":
                    library.AddBook();
                    break;
                case "2":
                    library.DisplayAvailableBooks();
                    break;
                case "3":
                    library.BorrowBook();
                    break;
                case "4":
                    library.ReturnBook();
                    break;
                case "5":
                    isRunning = false;
                    Console.WriteLine("Thank you for using the Library Management System. Goodbye!");
                    break;
                default:
                    Console.WriteLine("Invalid choice. Please try again.");
                    break;
            }
        }
    }
}

class Book
{
    public string Title { get; set; }
    public string Genre { get; set; }
    public string Author { get; set; }
    public int Pages { get; set; }
    public bool IsAvailable { get; set; }

    public Book(string title, string genre, string author, int pages)
    {
        Title = title;
        Genre = genre;
        Author = author;
        Pages = pages;
        IsAvailable = true; // By default, the book is available
    }

    public override string ToString()
    {
        string availability = IsAvailable ? "Available" : "Borrowed";
        return $"{Title} by {Author} ({Genre}, {Pages} pages) - {availability}";
    }
}

class Library
{
    private List<Book> books = new List<Book>();

    public void AddBook()
    {
        Console.Write("Enter the book title: ");
        string title = Console.ReadLine();

        Console.Write("Enter the book genre: ");
        string genre = Console.ReadLine();

        Console.Write("Enter the author's name: ");
        string author = Console.ReadLine();

        Console.Write("Enter the number of pages: ");
        int pages = int.Parse(Console.ReadLine());

        Book newBook = new Book(title, genre, author, pages);
        books.Add(newBook);

        Console.WriteLine($"Book '{title}' has been added to the library.");
    }

    public void DisplayAvailableBooks()
    {
        if (books.Count == 0)
        {
            Console.WriteLine("No books available in the library.");
            return;
        }

        Console.WriteLine("\nAvailable Books:");
        foreach (var book in books)
        {
            if (book.IsAvailable)
            {
                Console.WriteLine(book);
            }
        }
    }

    public void BorrowBook()
    {
        DisplayAvailableBooks();

        if (books.Count == 0)
        {
            return;
        }

        Console.Write("Enter the title of the book you want to borrow: ");
        string title = Console.ReadLine();

        Book bookToBorrow = books.Find(b => b.Title.Equals(title, StringComparison.OrdinalIgnoreCase) && b.IsAvailable);

        if (bookToBorrow != null)
        {
            bookToBorrow.IsAvailable = false;
            Console.WriteLine($"You have borrowed '{bookToBorrow.Title}'. Enjoy your reading!");
        }
        else
        {
            Console.WriteLine("Book not found or already borrowed.");
        }
    }

    public void ReturnBook()
    {
        Console.Write("Enter the title of the book you want to return: ");
        string title = Console.ReadLine();

        Book bookToReturn = books.Find(b => b.Title.Equals(title, StringComparison.OrdinalIgnoreCase) && !b.IsAvailable);

        if (bookToReturn != null)
        {
            bookToReturn.IsAvailable = true;
            Console.WriteLine($"Thank you for returning '{bookToReturn.Title}'.");
        }
        else
        {
            Console.WriteLine("Book not found or already returned.");
        }
    }
}