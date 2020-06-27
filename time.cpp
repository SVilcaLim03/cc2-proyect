#include <iostream>
#include <windows.h>
#include <ctime>
#include <sstream>

using namespace std;

void reloj()
{
  while (true)
  {
   time_t now = time(0);
   tm *time = localtime(&now); 
   int hour = time->tm_hour;
   int min = time->tm_min;
   int sec = time->tm_sec;    
   ostringstream h;
   ostringstream m;
   ostringstream s;
   h << hour;
   m << min;
   s << sec;
   
   string horas;
   if (h.str().size() == 1) horas = "0" + h.str();
   else horas = h.str();
   
   string minutos;
   if (m.str().size() == 1) minutos = "0" + m.str();
   else minutos = m.str();
   
   string segundos;
   if (s.str().size() == 1) segundos = "0" + s.str();
   else segundos = s.str();
   
   cout << horas << ":" << minutos << ":" << segundos;
   Sleep(1000);
   system("cls");
   
  }  
}

int main()
{
 reloj();
 system("PAUSE");
 return 0;
}
