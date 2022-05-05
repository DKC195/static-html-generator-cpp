class head
{
private:

public:
  head();
  ~head();

  void gettitle()
  {
    html.open("index.html", ios::app);
    html << title;
    html.close();
  }
};

head::head()
{
  cout << "Head Setting Up" << endl;
  html.open("index.html", ios::app);
  html << "<head>" << endl
       << "  <meta charset=\"UTF-8\" />" << endl
       << "  <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\" />" << endl
       << "  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\" />" << endl
       << "  <title>";
  html.close();
}

head::~head()
{
  html.open("index.html", ios::app);
  html << "</title>" << endl
       << "  <link rel=\"stylesheet\" href=\"style.css\">" << endl
       << "</head>" << endl
       << "" << endl;
  html.close();
  cout << "Head Setting Up Completed" << endl;
}
