#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Ingridient{
    string _name;
    double _count;
    double _price;
public:
    Ingridient(const string& name_of_product="",
               double count_of_product=0.0,
               double price_of_product=0.0):
            _name(name_of_product),
            _count(count_of_product),
            _price(price_of_product){}

    const string& name() const {return _name;}
    string& name(){return _name;}

    const double& count() const {return _count;}
    double& count(){return _count;}

    const double& price() const {return _price;}
    double& price(){return _price;}

    double cost() const {return _count*_price;}
};

istream& operator>>(istream& is, Ingridient& i){
    return is>>i.name()>>i.count()>>i.price();
}

ostream& operator<<(ostream& os, const Ingridient& i){
    return os<<i.name()<<'\t'
             <<i.count()<<'\t'
             <<i.price()<<'\n';
}

class Recipe{
private:
    string _name;
    vector<Ingridient> ingridients;

public:
    Recipe(const string& recipe_name=""): _name(recipe_name){}

    string& name(){return _name;}
    const string& name()const{return _name;}

    void add(const Ingridient& stuff){ingridients.push_back(stuff);}

    double cost() const {
        double sum=0;
        for (size_t i(0); i<ingridients.size(); ++i) sum+= ingridients[i].cost();
        return sum;
    }

    friend ostream& operator<<(ostream&, const Recipe&);
};

istream& operator>>(istream& is, Recipe& r){
    char ch;
    is>>r.name();
    while(is>>ch && isspace(ch));
    if (is && ch==';') return is;
    Ingridient i;
    while (is>>i){
        r.add(i);
        while(is>>ch && isspace(ch));
        if (ch==';') break;
        is.unget();
    }
    return is;
}

ostream& operator<<(ostream& os, const Recipe& r){
    os<<r.name()<<" :\n";
    for (size_t i(0); i<r.ingridients.size(); ++i)
        os<<'\t'<<r.ingridients[i];
    return os<<";\n";
}

int main(){
    Recipe r1("pizza_dough");
    r1.add(Ingridient("flour", 0.35, 40));
    r1.add(Ingridient("water", 0.15, 0));
    r1.add(Ingridient("oil", 0.05, 120));
    r1.add(Ingridient("yeast", 4.0, 5));
    r1.add(Ingridient("sugar", 0.15, 42));
    r1.add(Ingridient("salt", 0.15, 30));

    ofstream out("D:\\kuzin\\CLionProjects\\recipe.txt");
    out<<r1;
    out.close();

    ifstream in("D:\\kuzin\\CLionProjects\\recipe.txt");
    Recipe r2;
    in>>r2;

    cout<<r2<<"price of "<<r2.name()<<' '<<
        r2.cost()<<" grn";

    return 0;
}