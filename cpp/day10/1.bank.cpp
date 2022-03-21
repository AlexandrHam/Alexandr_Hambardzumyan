#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

double tok (double mayr, double tokos);

int main (int argc, char* argv[]) {


        time_t now = time(0);
        char* date_time = ctime(&now);
        string date[5];
        int x = 0;
        for (int i = 0; date_time[i] != '\0'; i++) {
                if (date_time[i] == ' ') {
                        x++;
                        continue;    
                }
                date[x] += date_time[i];
        }
    
        int day = stoi(date[2]);
        int year = stoi(date[4]);
        int m;
        string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < 12; i++) {
                if (month[i] == date[1]) {
                        m = i;
                }
        }
        double mayr = atof(argv[1]);
        double tokos = atof(argv[2]);   double amsekan;
        cout << "Skzbnakan gumar: " << mayr << " amd " <<  endl;
        for(int i = 0; i < atoi(argv[3]); i++) {
                amsekan = tok (mayr, tokos);
                mayr += amsekan;
                cout << m + 2 << "/" << day << "/" << year << "| "  << mayr << "amd = " << amsekan << endl;
                m++;
                if (m == 12) {
                        year++;
                        m = 0;
                }
        }
    
        return 0;

}

double tok (double mayr, double tokos) {

        return mayr * ((tokos / 100) / 12);
}


