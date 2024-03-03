package midtermPart1.midtermPart2;

import midtermPart1.Book;

public class TextBook extends Book {
    private String subject;
    private Boolean electronic;
    private int ePrice;

    public TextBook(){
        subject = "No Subject";
    }

    public TextBook(String isbn, String title, int edition, String subject) {
        super(isbn, title, edition);
        this.subject = subject;
        this.electronic = false;
        this.ePrice = 0;
    }

    public String getSubject() {
        return subject;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }

    public Boolean getElectronic() {
        return electronic;
    }

    public String addTextBook(String title){
        title = title + " (Textbook)";
        return title;
    }

    @Override public String toString() { String bookInfo = super.toString(); 
        String electronicPrice = (electronic) ? "Electronic Price: $" + ePrice : "No electronic version available"; 
        return bookInfo + "\nSubject: " + subject + "\n" + electronicPrice; }


} 
