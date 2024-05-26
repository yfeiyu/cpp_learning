#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <new>
using std::nothrow;
using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;
using std::unique_ptr;
using std::allocator;

int main(int argc, char const *argv[])
{
    {
    int *pi = new int(1024);
    string *ps = new string(10, '9');
    vector<int> *pv = new vector<int>{0,1,2,3,4,5,6,7,8,9};

    int *pi1 = new int;
    int *pi2 = new int();

    const int *pci = new const int(1024);
    const string *pcs = new const string;

    int *ptmp = new (nothrow) int;
    delete ptmp;
    }
    {
    unique_ptr<string> p1(new string("HelloKitty"));
    unique_ptr<string> p2(p1.release());

    unique_ptr<string> p3(new string("Jack"));
    p2.reset(p3.release());

    auto p = p2.release();
    delete p;
    }
    {
    int n = 10;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);

    auto q = p;
    alloc.construct(q++);
    alloc.construct(q++, 10, 'c');
    alloc.construct(q++, "hi");
    cout << *(p + 1) << endl;
    while (q != p)
        alloc.destroy(--q);
    alloc.deallocate(p, n);
    }

    {
    vector<int> vi{1, 3 ,5};
    allocator<int> alloc;
    auto p = alloc.allocate(vi.size() * 2);
    auto q = std::uninitialized_copy(vi.begin(), vi.end(), p);
    std::uninitialized_fill_n(q, vi.size(), 42);
    for ( int i = 0; i != vi.size() * 2; ++i)
        cout << *(p + i) << " ";
    cout << endl;
    alloc.deallocate(p, vi.size() * 2);
    }
    
    return 0;
}
