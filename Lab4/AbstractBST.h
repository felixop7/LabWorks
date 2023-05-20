#ifndef AbstractBST_h
#define AbstractBST_h
class AbstractBST {
public:
    virtual bool isEmpty() = 0;
    virtual void add(int value) = 0;
    virtual void remove(int value) = 0;
    virtual bool search(int value) = 0;
    virtual int max() = 0;
    virtual int min() = 0;
};
#endif
