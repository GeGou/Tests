#include<iostream>
using namespace std;

class Actor{ 
    int strength;
public :
    Actor(int s=10) : strength(s) {
        cout << "Creating an Actor" << endl;}
    Actor(const Actor& actor) : strength(actor.strength) {
        cout << "Creating a Copy of an Actor" << endl;}
    virtual ~Actor() {cout << "Disappearing ..." << strength << endl;}
    int get_strength() {return strength;}
    void tiring() {if (strength > 0) strength-- ;}
    virtual void act() {cout << "words, words, words ..." << endl; tiring();} };

class ActorDancer : public Actor{ 
    int strength;
public:
    ActorDancer(int as=5, int s=100) : Actor(as), strength(s) {
        cout << "Creating an Actor who Dances" << endl;}
    virtual ~ActorDancer(){
        if (get_strength()> 80) cout << "Exiting but no problem at all" << endl ;
        else { 
            if (get_strength()> 50) cout << "Exiting but still keeping" << endl ;
        else cout << "Exiting exhausted" << endl;}
        cout << strength << endl;
    }
    int get_strength() {return Actor::get_strength() + strength;}
    void tiring() {
        cout << strength << endl;
        if (strength > 20 ) strength -= 20;
        cout << strength << endl;
    }
    virtual void act() {cout << "I am dancing in the streets" << endl; tiring();} };

class ActorSingerDancer : public ActorDancer{
public:
    ActorSingerDancer(int astrength=30, int dstrength=50) :
    ActorDancer(astrength, dstrength) {
        cout << "Creating an Actor who Sings and Dances" << endl;}
    virtual void act() {
        ActorDancer::act();
        cout << "I am singing under the stars!" << endl;
    tiring(); Actor::tiring();} 
};

class Musical{
    ActorSingerDancer& starring1; 
    ActorSingerDancer& starring2;
    ActorDancer& dancer; 
    Actor& actor;
public :
    Musical(ActorSingerDancer& s1, ActorSingerDancer& s2, ActorDancer& d, Actor& a) :
    starring1(s1), starring2(s2), dancer(d), actor(a) {
        cout << "The show starts!" << endl;
        scene(s1,s2); scene(d,a);
    }
    ~Musical() {cout << "The End" << endl;}
// void scene(Actor a1, Actor a2)
// void scene(Actor& a1, Actor& a2)
{ a1.act(); a2.act();} };

int main(){ 
    ActorSingerDancer ES(60); ActorSingerDancer RG(40,70);
    ActorDancer AD; Actor A;
    Musical la_la_land(ES, RG, AD, A);
    return 0; 
}