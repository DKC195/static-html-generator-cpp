class nav
{
private:
public:
  nav();
  ~nav();

  void getTitle()
  {
    html.open("index.html", ios::app);
    html << "    <p>" << title << "</p>" << endl;
    html.close();
  }

  void getContent()
  {
    int n = 0;

    html.open("index.html", ios::app);
    html << "    <div>" << endl;
    cout << "    Enter the No. of items to include on Nav Bar: ";
    cin >> n;

    string content[n];
    for (int i = 0; i < n; i++)
    {
      cout << "    Enter Content No. " << i + 1 << ": ";
      cin >> content[i];
      html << "      <a href=\"#" << content << "\">" << content << "</a>" << endl;
    }
    html << "    </div>" << endl;
    html.close();
  }
};

nav::nav()
{
  cout << "  Nav Setting Up" << endl;
  html.open("index.html", ios::app);
  html << "  <nav>" << endl;
  html.close();
}

nav::~nav()
{
  html.open("index.html", ios::app);
  html << "  </nav>" << endl;
  html.close();
  cout << "  Nav Setting Up Completed" << endl;
}

class footer
{
private:
public:
  footer();
  ~footer();

  void getContent()
  {
    html.open("index.html", ios::app);
    html.close();
  }
};

footer::footer()
{
  cout << "  Footer Setting Up" << endl;
  html.open("index.html", ios::app);
  html << "  <footer>" << endl;
  html.close();
}

footer::~footer()
{
  html.open("index.html", ios::app);
  html << "    <div class=\"row\">" << endl
       << "      <p>" << title << " | ©2022 <p>" << endl
       << "    </div>" << endl;
  html << "  </footer>" << endl;
  html.close();
  cout << "  Footer Setting Up Completed" << endl;
}
