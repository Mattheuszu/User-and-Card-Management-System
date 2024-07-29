
#include <iostream>
#include <vector>

using namespace std;


class Card{
    
    string Number;
    int CVV;
    string Data;
    
    public:
    
    void setNumber(string Number)
    {
    this->Number = Number;
    }
  
    string getNumber()
    {
    return Number;
    }
    
    void setCVV(int CVV)
    {
    this->CVV = CVV;
    }
  
    int getCVV()
    {
    return CVV;
    }
    
    void setData(string Data)
    {
    this->Data = Data;
    }
  
    string getData()
    {
    return Data;
    }
};

class User{
    
  string Name;
  string LastName;
  int Age;
  vector <Card> cards;
  
  public:
    void setCard(vector <Card> cards)
    {
      this->cards = cards;  
    }
    
    void getCard()
    {
        for (Card card : cards)
        {
            cout << card.getNumber() << endl;
            cout << card.getData() << endl;
            cout << card.getCVV() << endl;
        }
    }
    
    void setName(string Name)
    {
        this->Name = Name;
    }
  
    string getName()
    {
        return Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
  
    string getLastName()
    {
        return LastName;
    }
    
    void setAge(int Age)
    {
        this->Age = Age;
    }
  
    int getAge()
    {
        return Age;
    }
};


int main()
{
    vector <User> users;
    
    /*

    */
    
    for(int i = 0; i < 1; i++)
    {
        User user;
        user.setName("Denis");
        user.setLastName("Tishenko");
        user.setAge(21);
        vector <Card> cards;
        for (int j = 0; j < 1; j++)
        {
            Card card;
            card.setNumber("5168 4564 5940 0192");
            card.setCVV(213);
            card.setData("29/09");
            cards.push_back(card);
        }
        user.setCard(cards);
        users.push_back(user);
    }
    
    for(int i = 0; i < users.size(); i++)
    {
        cout << users[i].getName() << endl;
        cout << users[i].getLastName() << endl;
        cout << users[i].getAge() << endl;
        
        users[i].getCard();
        
    }    

    return 0;
}

