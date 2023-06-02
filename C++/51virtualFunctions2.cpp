// here we will see an example of virtual function and its creation rules ...

/*
    Rules for virtual functions:-
    1. They cannot be static.
    2. They are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A virtual function in base class might not be used.
    5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/

#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display() // if we will remove this virtual function then derived class display will not be invoked.
    {
        cout << "bogous code" << endl;
    }
};

class cwhVideo : public CWH
{
    int videoLength;

public:
    cwhVideo(string s, float r, int vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars " << endl;
        cout << "Length of this video is: " << videoLength << " minutes " << endl;
    }
};

class cwhText : public CWH
{
    int words;

public:
    cwhText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial: " << rating << " out of 5 stars " << endl;
        cout << "number of words in this tutorial: " << words << " words " << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "python tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhVideo pythonVideo(title, rating, vlen);
    // pythonVideo.display(); // this method is run directly using object.

    // for code with harry Text
    title = "python tutorial text";
    words = 433;
    rating = 4.19;
    cwhText pythonText(title, rating, words);
    // pythonText.display();

    // now we will use pointer for invoke
    CWH *tuts[2];
    tuts[0] = &pythonVideo;
    tuts[1] = &pythonText;

    tuts[0]->display(); // here the display function of derived class is called coz of the virtual fuction. If we will remove the virtual function then display function of base class will be called.
    tuts[1]->display();

    return 0;
}