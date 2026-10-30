#include <main>
#include <string>

using namespace std;

class Node {
    private:
    
    int value;
    Node left;
    Node right;

    public:
    Node(){

        value=0;
        left = nullptr; 
        right = nullptr;
    }
    Node(int v){
        value = v;
        left= nullptr;
        right= nullptr;
    }
    Node(int v, Node* l, Node* r) {
        value = v;
        left = l;
        right = r;
    }
};

int main() {
    Node A;
    Node B;
    Node C;
    Node D;

    A.left = B;
    A.right = C;

    B.right = D;a
}
