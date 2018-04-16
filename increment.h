#ifndef INCREMENT_H
#define INCREMENT_H


class Increment
{
public:
    Increment(int c=0,int i=1);
    ~Increment();

    void addIncrement();
    void print() const;
private:
    int count;
    const int increment;
};

#endif // INCREMENT_H
