/*Build a Post class that keeps track of the number of likes for a social media post. Overload
the + operator to merge the likes of two posts into one.*/
#include<iostream>
using namespace std;
class Post
{
    int n_likes;
public:
    Post(int n)
    {
        n_likes = n;
    }
    Post operator +(Post &another)
    {
        return Post(n_likes + another.n_likes);
    }
    void show()
    {
        cout<<"Number of Likes: "<<n_likes<<endl;
    }
};
int main()
{
    Post p1(5);
    p1.show();
    Post p2(7);
    p2.show();
    Post p3 = p1+p2;
    p3.show();
    return 0;
}
