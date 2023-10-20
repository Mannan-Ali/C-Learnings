#include<bits/stdc++.h>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
       
    }
    virtual void display()=0;
};

class CWH_Video: public CWH{
    float videoLength;
    public:
    CWH_Video(string s,float r, float vL):CWH(s,r){
        videoLength=vL;
       
    }
    void display(){
        cout<<"This are from class CWH_Video : "<<endl<<title<<" "<<rating<<" "<<videoLength<<endl;
    }

};

class CWH_Text: public CWH{
    float TextLength;
    public:
    CWH_Text(string s,float r, float TL):CWH(s,r){
        TextLength=TL;
    }
    void display(){
        cout<<"This values are from class CWH_Text : "<<endl<<title<<" "<<rating<<" "<<TextLength<<endl;
    }

};


int main(){
    string title;
    float rating,Vlen;
    int words;
    //for CWh_Video
    cout<<"Enter the Title for Video"<<endl;
   cin>>title;
   cout<<"Enter your rating out of 5"<<endl;
   cin>>rating;
   cout<<"The length of video(By creator)"<<endl;
   cin>>Vlen;
   cout<<"The number of words in video(By creator)"<<endl;
   cin>>words;
   CWH_Video Dj_video(title,rating,Vlen);
   CWH_Text Dj_Text(title,rating,words);
   CWH * ptr[2];
   ptr[0]=&Dj_video;
   ptr[1]=&Dj_Text;
   ptr[0]->display();
   ptr[1]->display();
   return 0;
}