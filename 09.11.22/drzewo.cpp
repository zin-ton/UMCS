#include <iostream>
#include <cmath>
#include <iterator>
#include <vector>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt"); ofstream cout("output.txt");
#define kvadrat kek
int m,x;
class TNode{
    public:
        TNode(int key)
            : Key(key)
        {
        }
        int Key;
        TNode* Left = nullptr;
        TNode* Right = nullptr;
};
class TTree{
    public:
        TTree()
            : Root(0)
        {
        }
        ~TTree(){
            DestroyNode(Root);
        }
    private:
        static void DestroyNode(TNode* node){
            if(node){
                DestroyNode(node->Left);
                DestroyNode(node->Right);
                delete node;
            }
        }
    private:
        TNode* Root;
};
void TTree::Insert(int x){
    TNode** cur = &Root;
    while(*cur){
        TNode& node = **cur;
        if(x<node.Key){
            cur=&node.Left;
        } else if(x>node.Key){
            cur=&node.Right;
        } else return;
    }
    *cur=new TNode(x);
}
int main(){
    cin>>m;
    int a=1,b=1;
    int ans;
    for(int i=0;i<m-2;++i){
        ans=a+b;
        b=a;
        a=ans;
    }
    cout<<ans<<'\n';
    return 0;
} 