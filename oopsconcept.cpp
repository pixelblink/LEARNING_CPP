// encapsulation
// inheritance
        // single
        // multilevel
// polymorphism
// abstraction



// inheritance:- single

class a{    //base/parent
    public:
    int a=5;
};
class b: public a{  //derived/child
    int b=10;
};


// inheritance:- multilevel

class a{    //base/parent
    public:
    int a=5;
};
class b: public a{
    int b=10;
};
class c: public b{
    public:
    int c=15;
};
class d: public c{  //derived/child
    int d=20;
};