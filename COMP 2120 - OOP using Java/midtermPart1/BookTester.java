package midtermPart1;
public class BookTester {
    public static void main(String[] args) {
        Book[] books = new Book[4];
        
        books[0] = new Book("", "War and Peace", 0);
        books[1] = new Book("1239812482912","The Hunchback", 2);
        books[2] = new Book("2923981728291", "Mind and Cosmos", 1);
        books[3] = new Book("2923981728291", "Another Book", 1);
        
        System.out.println("List of my books");
        System.out.println("----------------");
        
        for (Book book : books) {
            System.out.println("Title: " + book.getTitle());
            System.out.println("Edition: " + book.getEdition());
            System.out.println("ISBN: " + book.getIsbn());
            // System.out.println("Authors: " + book.addAuthor());
            // System.out.println("Pages: " + book.getPages());
            // System.out.println("Price: " + book.getPrice());
            // System.out.println("------");
        }
    }
}
