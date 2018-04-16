#ifndef TEST
#define TEST
class Test
{
public:
    Test(int value=0);
    void print() const;
private:
    int x;
};
Test::Test(int value)
    :x(value)
{
    //empty
}
void Test::print()const
{
    cout<<"         x="<<x<<endl;
    cout<<"   this->x="<<this->x<<endl;
    cout<<" (*this).x="<<(*this).x<<endl;
}

#endif // TEST

