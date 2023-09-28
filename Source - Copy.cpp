#include <iostream>

using namespace std;
class MovieInfo
{
public:
    string Title, Genre, Showtimes;
    int Duration;
    MovieInfo()
    {
    }
    MovieInfo(string title, string genre, string showtimes, int duration)
    {
        Title = title;
        Genre = genre;
        Showtimes = showtimes;
        Duration = duration;
    }
    void setTitle(string T)
    {
        Title = T;
    }
    void setGenre(string G)
    {
        Genre = G;
    }
    void setShowtimes(string  S)
    {
        Showtimes = S;
    }
    void setDuration(int D)
    {
        Duration = D;
    }
    string getTitle()
    {
        return Title;
    }
    string getGenre()
    {
        return Genre;
    }
    string getShowtimes()
    {
        return Showtimes;
    }
    int getDuration()
    {
        return Duration;
    }

    void ReservationConfirmation(int confirm)
    {
        confirm = confirm;
        if (confirm == 1)
        {
            cout << "your reservation has been confirmed" << '\n';
        }
        else
        {
            cout << "your reservation has not been confirmed" << '\n';
        }
    }
};
class SeatSelection
{
public:
    int arr[10][10] = { 0 };
    int chooserow;
    int choosecolumn;
    void chooseseat(int chooserow, int choosecolumn)
    {
        arr[chooserow][choosecolumn] = 1;
    }
    void availableseat(int chooserow, int choosecolumn)
    {
        if (arr[chooserow][choosecolumn] == 0)
        {
            cout << "available" << '\n';
            arr[chooserow][choosecolumn] == 1;
        }
        else
        {
            cout << "not available" << '\n';
        }
    }

};
class UserManagment
{
public:
    string UserName, Email;
    int Password;
    void setName(string s)
    {
        UserName = s;
    }
    string getName()
    {
        return UserName;
    }
    void setEmail(string e)
    {
        Email = e;
    }
    string getEmail()
    {
        return Email;
    }
    void setPass(int pass)
    {
        Password = pass;
    }
    int getpass()
    {
        return Password;
    }
    void regist(int pass, int confirmpass)
    {

        if (pass == confirmpass)
            cout << "registration completed" << endl;
        else
            cout << "Confirmation mismatched" << endl;
    }
    void setlogin(string name)
    {
        UserName = name;
    }
    void setforgetpassword(string name, string email)
    {

        Email = email;
        UserName = name;
        cout << "check your email to reset password\n";
    }
};
/*class BookingManagment
{
public:
    void BookingManagmentee(string email)
    {
        if (ReservationConfirmation(confirm))
        {
            cout << "your reservation has been confirmed\n";
        }
        else
        {
            cout << "your reservation has not been confirmed\t";
        }
    }
};*/
class SystemRatingAvdReview
{
public:
    string review;
    int rating;
    void ShowReviewAndRating(string review, int rating)
    {
        review = review;
        rating = rating;
        cout << "film Rating " << rating << " review " << review << '\n';
    }
};
int main()
{
    int num;
    MovieInfo m1("coco", "animation", "10:00 am ", 2);
    MovieInfo m2("From Up On Poppy Hill", "animation ", "12:00 am", 2);
    MovieInfo m3("Howl's moving castle", "animation", "2:00 am", 2);
    cout << "Enter the number of the film that you want to watch (from 1 to 3)" << endl;
    cin >> num;
    if (num == 1)
        cout << "your Movie information--> " << "name--> " << m1.getTitle() << ",genre--> " << m1.getGenre() << ",show time--> " << m1.getShowtimes() << ",Duration--> " << m1.getDuration() << " \n ";
    if (num == 2)
        cout << "your Movie information--> " << "name--> " << m2.getTitle() << ",genre--> " << m2.getGenre() << ",show time--> " << m2.getShowtimes() << ",Duration--> " << m2.getDuration() << " \n ";
    if (num == 3)
        cout << "your Movie information--> " << "name--> " << m3.getTitle() << ",genre--> " << m3.getGenre() << ",show time--> " << m3.getShowtimes() << ",Duration--> " << m3.getDuration() << " \n ";
    int k = 0;
    cout << "if you want to confirm your booking write 1 else write 0 \n";
    MovieInfo m4;
    cin >> k;
    m4.ReservationConfirmation(k);
    cout << endl;
    SeatSelection myseat;
    int chooserow, choosecolumn;
    cout << "please choose your seat by choosing the row number(from 1 to 10) and column number (from 1 to 10 ) \n";
    cout << "Enter the row \n";
    cin >> chooserow;
    cout << "Enter the column \n";
    cin >> choosecolumn;
    myseat.availableseat(chooserow, choosecolumn);
    UserManagment user1;
    cout << "please choose your state : " << '\n';
    cout << "1---- Register" << '\n' << "2----login" << '\n' << "3--forgetpassword" << '\n';
    int choose;
    cin >> choose;
    switch (choose)
    {
    case 1:
        user1.setEmail("shim123@gmail.com");
        user1.setName("shimaa");
        cout << "Your email is " << user1.getEmail() << "\n" << "Your name is " << user1.getName() << endl;
        int pass, confirmpass;
        cout << "Enter your password \n";
        cin >> pass;
        cout << "Enter the password again \n";
        cin >> confirmpass;
        user1.regist(pass, confirmpass);
    case 2:
        user1.setlogin("ahmed");
        user1.setPass(2300);
    case 3:
        user1.setforgetpassword("ahmed", "ahmed34@gmail.com");
        user1.setPass(9090);


    }
    SystemRatingAvdReview myevaluation;
    int rate;
    string review;
    cout << "Enter Your Rate From 1 to five\n";
    cin >> rate;
    cout << "type Your review\n";
    cin >> review;
    myevaluation.ShowReviewAndRating(review, rate);

}