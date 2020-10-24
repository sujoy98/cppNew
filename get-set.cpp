#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        
        Movie(string atitle, string adirector, string arating) {
            title = atitle;
            director = adirector;
            setRating(arating);
        }
        void setRating(string arating){
            if(arating == "PG" || arating == "PG-13" || arating == "NR" || arating == "G"){
                rating = arating;
            }else{
                rating = "NR";
            }
            return;
        }
        string getRating(){
            return rating;
        }
};

int main() {
    Movie obj1("MovieName", "DirectorName", "PG-13");
    obj1.setRating("G");
    cout << obj1.getRating();
    return 0;
}