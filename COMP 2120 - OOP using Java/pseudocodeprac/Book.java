package pseudocodeprac;

import java.util.ArrayList;

public class Book{
  private String isbn;
  private String title;
  private ArrayList<String> authors = new ArrayList<>();
  private int edition;
  private int pages;
  private double price;

  public Book(){
    title = "No title yet";
    authors = new ArrayList<>();
  }

  public Book(String isbn, String title, int edition){
    this.isbn = isbn;
    this.title = title;
    this.edition = edition;
  }

  public String getIsbn(){
    return isbn;
  }

  public void setIsbn(String isbn){
    this.isbn = isbn;
  }

  public String getTitle(){
    return title;
  }

  public void setTitle(String title){
    this.title = title;
  }

  public int getEdition(){
    return edition;
  }

  public void setEdition(int edition){
    this.edition = edition;
  }

  public int getPages(){
    return pages;
  }

  public void setPages(int pages){
    this.pages = pages;
  }

  public double getPrice(){
    return price;
  }

  public void setPrice(double price){
    this.price = price;
  }

  public void addAuthor(String author){
    authors.add(author);
  }

  public void removeAuthor(String author){
    authors.remove(author);
  }

  public void changeAuthor(String oldAuthor, String newAuthor){
    int index = authors.indexOf(oldAuthor);
    if (index != -1){
      authors.set(index, newAuthor);
    }
  }

  @Override
  public String toString(){
    return "Book: " + "isbn= " + isbn + "title= " + title + "authors= " + authors +  
    "edition= " + edition + "pages= " + pages + "price= " + price;
  }
}
