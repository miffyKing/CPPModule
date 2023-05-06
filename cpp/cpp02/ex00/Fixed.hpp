
class Fixed
{
  private:
    int number;
    static const int bits = 8;

  public:
  //기본생성자, 복사생성자, 소멸자, 할당 연산자 오버로딩, 
    Fixed(void);
    //복사생성자.
    // 할당 연산자 오버로딩
    Fixed(Fixed& fixed);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

};
