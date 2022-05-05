#include <iostream>
#include <fstream>
using namespace std;

string title;
fstream html, css;

#include "./lib/head.h"
#include "./lib/nav_footer.h"
#include "./lib/main.h"

inline void initiate()
{
  system("clear");
  cout << "Initializing...." << endl;
}

class class_html{
private:
public:
  class_html();
  ~class_html();

  void callHead()
  {
    head B;
    B.gettitle();
  }

  void callNav()
  {
    nav D;
    D.getTitle();
    D.getContent();
  }

  void callMain()
  {
    
  }

  void callFooter()
  {
    footer Z;
    Z.getContent();
  }
};

class_html::class_html()
{
  html.open("index.html", ios::out);
  html << "<!DOCTYPE html>" << endl
       << "<html lang=en> " << endl
       << "" << endl;
  html.close();

  callHead();

  cout << "Body Setting Up" << endl;
  html.open("index.html", ios::app);
  html << "<body>" << endl;
  html.close();

  callNav();

  callMain();

  callFooter();
}

class_html::~class_html()
{
  html.open("index.html", ios::app);
  html << "</body>" << endl;
  html.close();
  cout << "Body Setting Up Completed" << endl;

  html.open("index.html", ios::app);
  html << endl
       << "</html>";
  html.close();
}
