class Foo {
public:
    Foo()
    {
        mutexSecond.lock();
        mutexThird.lock();
    }
    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mutexSecond.unlock();
    }

    void second(function<void()> printSecond) 
    {
        mutexSecond.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        mutexThird.unlock();
    }

    void third(function<void()> printThird) 
    {
        mutexThird.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
    private:
        mutex mutexSecond;
        mutex mutexThird;
};